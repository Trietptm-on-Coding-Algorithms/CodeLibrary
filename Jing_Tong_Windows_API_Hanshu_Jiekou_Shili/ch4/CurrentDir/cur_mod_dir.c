/* ************************************
*����ͨWindows API�� 
* ʾ������
* cur_mod_dir.c
* 4.3.4	��ȡ��ǰĿ¼����ȡ�������ڵ�Ŀ¼����ȡģ��·��
**************************************/

/* ͷ�ļ���*/
#include <windows.h>
#include <stdio.h>

/* ************************************
* int main(void)
* ����	��ʾʹ�����û�ȡ��ǰ·��
*		��ʾ��ȡģ��·��
**************************************/
int main(void)
{
	//���ڴ洢��ǰ·��
	CHAR szCurrentDirectory[MAX_PATH];
	//���ڴ洢ģ��·��
	CHAR szMoudlePath[MAX_PATH];
	//Kernel32�ļ�������
	LPSTR szKernel32 = "kernel32.dll";
	HMODULE hKernel32;
	//��ǰ·���ĳ��ȣ�Ҳ�����жϻ�ȡ�Ƿ�ɹ�
	DWORD dwCurDirPathLen;
	
	//��ȡ���̵�ǰĿ¼
	dwCurDirPathLen = 
		GetCurrentDirectory(MAX_PATH,szCurrentDirectory);
	if(dwCurDirPathLen == 0)
	{
		printf("��ȡ��ǰĿ¼����\n"); 
		return 0;
	}
	printf("���̵�ǰĿ¼Ϊ %s \n",szCurrentDirectory); 
	
	//�����̵�ǰĿ¼����Ϊ��C:\��
	lstrcpy(szCurrentDirectory, "C:\\");
	if(!SetCurrentDirectory(szCurrentDirectory))
	{
		printf("���õ�ǰĿ¼����\n"); 
		return 0;
	}
	printf("�Ѿ����õ�ǰĿ¼Ϊ %s \n",szCurrentDirectory); 

	//�ڵ�ǰĿ¼�´�����Ŀ¼��current_dir��
	//������ɺ�C:���½������ļ��С�current_dir��
	CreateDirectory("current_dir", NULL);

	//�ٴλ�ȡϵͳ��ǰĿ¼
	dwCurDirPathLen = 
		GetCurrentDirectory(MAX_PATH,szCurrentDirectory);
	if(dwCurDirPathLen == 0)
	{
		printf("��ȡ��ǰĿ¼����\n"); 
		return 0;
	}
	printf("GetCurrentDirectory��ȡ��ǰĿ¼Ϊ %s \n",
		szCurrentDirectory); 

	//ʹ��NULL��������ȡ��ģ���·����
	if(!GetModuleFileName(NULL,szMoudlePath,MAX_PATH))
	{
		printf("��ȡģ��·��¼����\n"); 
		return 0;
	}
	printf("��ģ��·�� %s \n",szMoudlePath);

	//��ȡKernel32.dll��ģ������
	hKernel32 = LoadLibrary(szKernel32);

	//ʹ��Kernel32.dll��ģ��������ȡ��·����
	if(!GetModuleFileName(hKernel32,szMoudlePath,MAX_PATH))
	{
		printf("��ȡģ��·������\n"); 
		return 0;
	}
	printf("kernel32ģ��·�� %s \n",szMoudlePath); 

	return 0;
}