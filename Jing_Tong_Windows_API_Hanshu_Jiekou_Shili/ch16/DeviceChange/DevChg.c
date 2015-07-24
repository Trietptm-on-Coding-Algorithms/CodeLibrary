/* ************************************
*����ͨWindows API��
* ʾ������
* DevChgc
* 16.1 �豸����
**************************************/
/* ͷ�ļ� */
#include <windows.h>
#include <Dbt.h>
/* ȫ�ֱ��� */
HINSTANCE hinst;
HWND hWnd;
HDEVNOTIFY hDevNotify;// NOTIFY
int YStart = 10;// ����TextOutʱ��λ���λ��
/* ȫ�ֱ��� */
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int);
InitApplication(HINSTANCE);
InitInstance(HINSTANCE, int);
LRESULT CALLBACK MainWndProc(HWND, UINT, WPARAM, LPARAM);
void OnDeviceChange (HWND hwnd, WPARAM wParam, LPARAM lParam);
char FirstDriveFromMask (ULONG unitmask);
BOOL DoRegisterDeviceInterface( GUID , HDEVNOTIFY * );
/*************************************
* WinMain
**************************************/
int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE hPrevInstance,
				   LPSTR lpCmdLine, int nCmdShow)
{
	MSG msg;
	BOOL fGotMessage;
	if (!InitApplication(hinstance))
		return 1;

	if (!InitInstance(hinstance, nCmdShow))
		return 1;

	if(!DoRegisterDeviceInterface( GUID_DEVINTERFACE_DISK, &hDevNotify ))
		// GUID_DEVINTERFACE_MEDIUMCHANGER
		// GUID_DEVINTERFACE_VOLUME
		// GUID_DEVINTERFACE_STORAGEPORT
		// ����

	{
		return 1;
	}

	while ((fGotMessage = GetMessage(&msg, (HWND) NULL, 0, 0)) != 0 && fGotMessage != -1)
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
	UNREFERENCED_PARAMETER(lpCmdLine);
}
/*************************************
* InitApplication
**************************************/
BOOL InitApplication(HINSTANCE hinstance)
{
	WNDCLASSEX wcx;

	wcx.cbSize = sizeof(wcx); 
	wcx.style = CS_HREDRAW | CS_VREDRAW; 
	wcx.lpfnWndProc = MainWndProc; 
	wcx.cbClsExtra = 0; 
	wcx.cbWndExtra = 0; 
	wcx.hInstance = hinstance; 
	wcx.hIcon = LoadIcon(NULL, IDI_APPLICATION); 
	wcx.hCursor = LoadCursor(NULL, IDC_ARROW);
	wcx.hbrBackground = GetStockObject( WHITE_BRUSH);
	wcx.lpszMenuName = "MainMenu"; 
	wcx.lpszClassName = "MainWClass"; 
	wcx.hIconSm = LoadImage(hinstance, 
		MAKEINTRESOURCE(5),
		IMAGE_ICON,
		GetSystemMetrics(SM_CXSMICON),
		GetSystemMetrics(SM_CYSMICON),
		LR_DEFAULTCOLOR);

	return RegisterClassEx(&wcx);
}
/*************************************
* InitInstance
**************************************/
BOOL InitInstance(HINSTANCE hinstance, int nCmdShow)
{
	HWND hwnd;
	hinst = hinstance;

	hwnd = CreateWindow(
		"MainWClass", 
		"device monitor", 
		WS_OVERLAPPEDWINDOW, 
		CW_USEDEFAULT,  CW_USEDEFAULT, 
		CW_USEDEFAULT,  CW_USEDEFAULT, 
		(HWND) NULL, (HMENU) NULL, hinstance, (LPVOID) NULL);

	if (!hwnd)
		return FALSE;

	hWnd = hwnd;

	ShowWindow(hwnd, nCmdShow);
	UpdateWindow(hwnd);
	return TRUE;

}
/*************************************
* MainWndProc
**************************************/
LRESULT CALLBACK MainWndProc(
							 HWND hwnd, 
							 UINT uMsg, 
							 WPARAM wParam, 
							 LPARAM lParam)
{

	switch (uMsg)
	{
	case WM_DEVICECHANGE:
		OnDeviceChange ( hwnd, wParam, lParam);
		break;

	case WM_DESTROY:
		ExitProcess(0);
		return 0;

	default:
		return DefWindowProc(hwnd, uMsg, wParam, lParam);
	}
	return 0;
}

/*************************************
* void OnDeviceChange (HWND , WPARAM , LPARAM )
* ����	���� WM_DEVICECHANGE ��Ϣ
*		����Ϊ������Ϣ
**************************************/
void OnDeviceChange (HWND hwnd, WPARAM wParam, LPARAM lParam)
{
	// ��ȡ PDEV_BROADCAST_HDR ����
	PDEV_BROADCAST_HDR lpdb = (PDEV_BROADCAST_HDR)lParam;
	char szMsg[256];

	HDC hdc = GetDC(hwnd);
	DWORD dwStrLen;
	SIZE sz;
	TEXTMETRIC tm;

	switch(wParam)
	{
	case DBT_DEVICEARRIVAL:
		// ���� CD ���� DVD ��������
		if (lpdb -> dbch_devicetype == DBT_DEVTYP_VOLUME)
		{
			// ��ȡ����
			PDEV_BROADCAST_VOLUME lpdbv = (PDEV_BROADCAST_VOLUME)lpdb;
			// �жϱ�־
			if (lpdbv -> dbcv_flags & DBTF_MEDIA)
			{
				wsprintf (szMsg, "Drive %c: Media has arrived.",
					// ����mask��ȡ�̷���
					// dbcv_unitmask��bit���α�ʾA:��B:...�����Ϊ1����ʾ�Ǹ��̷���
					FirstDriveFromMask(lpdbv ->dbcv_unitmask));
			}
			else
				// ��־�����ã���ӡ�¼�ID
				wsprintf (szMsg, "Message: %u.", wParam);
		}
		else
			// �������Ͳ����ã���ӡ�¼�ID
			wsprintf (szMsg, "Message: %u.", wParam);
		break;

	case DBT_DEVICEREMOVECOMPLETE:
		// ��������
		if (lpdb -> dbch_devicetype == DBT_DEVTYP_VOLUME)
		{
			// ��ȡ����
			PDEV_BROADCAST_VOLUME lpdbv = (PDEV_BROADCAST_VOLUME)lpdb;
			// ����־
			if (lpdbv -> dbcv_flags & DBTF_MEDIA)
			{
				wsprintf (szMsg, "Drive %c: Media was removed.",
					FirstDriveFromMask(lpdbv ->dbcv_unitmask));
			}
			else
				wsprintf (szMsg, "Message: %u.", wParam);
		}
		else
			wsprintf (szMsg, "Message: %u.", wParam);
		break;

	default:
		// �����豸�ı��������ӡ�豸ID
		wsprintf (szMsg, "Message: %u.", wParam);

	}
	// �ڽ���������豸�����Ϣ
	dwStrLen = lstrlen(szMsg);
	// �������λ��
	GetTextExtentPoint32(hdc, szMsg, dwStrLen, &sz);
	YStart += sz.cy;
	GetTextMetrics(hdc, &tm);
	YStart -= tm.tmOverhang;
	// TODO ���ڹ���
	TextOut(hdc, 10, YStart, szMsg, dwStrLen);
	DeleteDC( hdc );	// �ͷ�DC
}

/*************************************
* char FirstDriveFromMask (ULONG unitmask)
* ����	���̷���Ϣmaskת��Ϊ�̷�
**************************************/
char FirstDriveFromMask (ULONG unitmask)
{
	char i;

	for (i = 0; i < 26; ++i)
	{
		if (unitmask & 0x1)
			break;
		unitmask = unitmask >> 1;
	}

	return (i + 'A');
}

/*************************************
* DoRegisterDeviceInterface
* ����	����RegisterDeviceNotification
*			API ����ע���豸����㲥��Ϣ��
*			��ע�����͵����÷�������󣬴��ڻ��յ���Ϣ
**************************************/
BOOL DoRegisterDeviceInterface(
							   GUID InterfaceClassGuid,
							   HDEVNOTIFY *hDevNotify
							   )

{
	DEV_BROADCAST_DEVICEINTERFACE NotificationFilter;
	char szMsg[80];
	// ���DEV_BROADCAST_DEVICEINTERFACE�ṹ����Ϊ����
	ZeroMemory( &NotificationFilter, sizeof(NotificationFilter) );
	NotificationFilter.dbcc_size =
		sizeof(DEV_BROADCAST_DEVICEINTERFACE);
	// ������ӵ��豸����
	NotificationFilter.dbcc_devicetype = DBT_DEVTYP_DEVICEINTERFACE;
	// ���͵�GUID��������GUID_DEVINTERFACE_DISK�ȡ�
	NotificationFilter.dbcc_classguid = InterfaceClassGuid;
	// ����RegisterDeviceNotification API
	*hDevNotify = RegisterDeviceNotification( hWnd,
		&NotificationFilter,
		DEVICE_NOTIFY_WINDOW_HANDLE
		);
	// �жϵ��ý�������ء�
	if(!*hDevNotify)
	{
		wsprintf(szMsg, "RegisterDeviceNotification failed: %d\n",
			GetLastError());
		MessageBox(hWnd, szMsg, "Registration", MB_OK);
		return FALSE;
	}
	return TRUE;
}