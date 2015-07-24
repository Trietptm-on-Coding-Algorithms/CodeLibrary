/* ************************************
*����ͨWindows API�� 
* ʾ������
* Semaphorec
* 7.2.3  ��ʾʹ���ź���ͬ���߳�
**************************************/
/* ͷ�ļ���*/
#include <windows.h>
#include <stdio.h>
/* �������塡*/
#define NUMTHREADS	4 
/* ȫ�ֱ�����*/
HANDLE hSemaphore;
/* ����������*/
void UseSemaphore(void);
DWORD WINAPI SemaphoreThread(LPVOID lpParam);

/*************************************
* int main(void)
* ����	��ʾ
*
* ����	δʹ��
**************************************/
int main()
{
	 UseSemaphore() ;
}
/*************************************
* DWORD WaitForAllThread(HANDLE hThread[], DWORD dwNumThread)
* ����	�ȴ�ָ�����̶߳�����
*
* ����	HANDLE hThread[]	��Ҫ�ȴ��������߳̾������
*		DWORD dwNumThread	�߳̾������Ĵ�С
**************************************/
DWORD WaitForAllThread(HANDLE hThread[], DWORD dwNumThread)
{
	// �ȴ������߳̽���
	DWORD dwWaitResult = WaitForMultipleObjects(
		dwNumThread,
		hThread,				// �߳̾����Ϊ�ȴ�����
		TRUE,
		INFINITE);
	switch (dwWaitResult) 
		{
		case WAIT_OBJECT_0: 
			printf("\nAll thread exit\n"); 
			break; 
		default: 
			printf("\nWait error: %u", GetLastError()); 
		}
	return 0;

}

/*************************************
* void UseSemaphore(void) 
* ����	��ʾUseSemaphore��ʹ�÷���
*
* ����	δʹ��
**************************************/
void UseSemaphore(void) 
{
	HANDLE hThread[NUMTHREADS];
	INT i;
	LONG lMax;
	CHAR cMax;
	// ��ӡ��Ϣ��ȡ����
	printf("������%d�����̣�����ź����Ľ��̿�������Ļ��ӡ��\n"
		"�������ź�����������1~%d��",NUMTHREADS,NUMTHREADS);	
	// ���������ַ�
	cMax = getch();
	printf("%c\n",cMax);
	// ���ַ�ת��Ϊ����
	lMax = cMax & 0xF;
	if(lMax<0 || lMax>NUMTHREADS)
	{
		printf("������1-%d",NUMTHREADS);
	}
	// �����ź���
	hSemaphore = CreateSemaphore( 
		NULL,   // Ĭ�ϰ�ȫ����
		lMax,   // ��ʼ�����������û�����
		lMax,   // ���������û�����
		NULL);  // δ����
	if (hSemaphore == NULL) 
	{
		printf("CreateSemaphore error: %d\n", GetLastError());
	}
	// ��������߳� ���ʹ�����Դ
	for(i = 0; i < NUMTHREADS; i++) 
	{		
		hThread[i] = CreateThread(NULL, 0, 
			SemaphoreThread, 
			&i,			// ���������Ϊ����
			0, NULL); 
		if (hThread[i] == NULL) 
		{
			printf("CreateThread failed (%d)\n", GetLastError());
			return;
		}
	}
	// �ȴ������̶߳�ִ����ɲ��˳�
	WaitForAllThread(hThread,NUMTHREADS);
}

/*************************************
* DWORD WINAPI SemaphoreThread(LPVOID lpParam) 
* ����	�̺߳������������ڴ�
*
* ����	δʹ��
**************************************/
DWORD WINAPI SemaphoreThread(LPVOID lpParam) 
{
	DWORD dwWaitResult;
	BYTE lpRead[16];
	//DWORD i = *(LPWORD)lpParam;		// �̵߳ı��
	DWORD dwPreviousCount;

	DWORD j = 0;
	// ÿ���̶߳�������3��������Դ
	for(; j<3; j++)
	{		
		// �߳̿����ڴ˽���һЩ����
		// ����ͣ�������ʱ��ģ����ʵ���
		Sleep(rand()%1000);
		// �ȴ��ź���
		dwWaitResult = WaitForSingleObject( 
			hSemaphore,      // �ź������
			INFINITE);		 // ���޵ȴ�
		switch (dwWaitResult) 
		{
		case WAIT_OBJECT_0: 
			printf("\nProcess %d Gets Semaphore",GetCurrentThreadId());
			break; 
		default: 
			printf("\nprocess %u Wait error: %u",GetCurrentThreadId(), GetLastError()); 
		}
		// �����Ϣ�������������Դ
		// �Եȴ������ʱ��ģ����ʵ���
		Sleep(rand()%1000);
		// �ͷ��ź���
		if (!ReleaseSemaphore( 
			hSemaphore,				// �ź������
			1,						// �ͷź��������1 
			&dwPreviousCount) )		// ��ü���
		{
			printf("\nprocess %u ReleaseSemaphore error: %d", GetCurrentThreadId(), GetLastError());
		}
		else
		{
			printf("\nProcess %u release Semaphore, previous count is %u",
				GetCurrentThreadId(), dwPreviousCount);
		}
	}

	return 1;
}