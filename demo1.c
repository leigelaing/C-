#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>
/*
int main()
{
	int ch = fgetc(stdin);
	fputc(ch, stdout);
	return 0;
}
*/




/*
 �Ӽ�������
 �������Ļ
 ����&��Ļ�����ⲿ�豸

 ���̡���׼�����豸������stdin����
 ��Ļ����׼����豸������stdout����
 ��һ������Ĭ�ϴ򿪵��������豸

 stdin   FILE*
 stdout  FILE*
 stderr����׼��������豸��  FILE*
 */

 








/*
int main()
{
	FILE* pfWrite = fopen("test.txt", "r");
	if (pfWrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//���ļ�
	printf('%c', pfWrite);
	printf('%c', pfWrite);
	printf('%c', pfWrite);
	//�ر��ļ�
	fclose(pfWrite);
	pfWrite = NULL;
	return 0;
}

*/



/*
int main()
{
	FILE* pfWrite = fopen("test.txt", "w");//���ļ�ֻд
	if (pfWrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//д�ļ�
	fputc('b', pfWrite);
	fputc('i', pfWrite);
	fputc('t', pfWrite);
   //�ر��ļ�
	fclose(pfWrite);
	pfWrite = NULL;
	return 0;
}

*/


/*
int main()
{
	//���ļ�test.txt
	//���·��
	//  .. ��ʾ��һ��·��
	// .  ��ʾ��ǰ·��
	fopen("../../test.txt", "r");//r������Ҫ�����Ĳ���
	fopen("test.txt", "r");//
	//����·����д��
	fopen("C:\\2020_code\\84��\\test_5_6\\test.txt", "r");//ע��·����д�����е�ת������  
	
	//fopen��������FILE*�� ָ������
	//pfָ��test.txt���ļ���Ϣ��    Ȼ���ٲ���text.txt �ļ�

	FILE* pf = fopen("test.txt", "r");
	//���ļ�����ʧ�ܣ����Ҫ���ж�
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));//���ش���ԭ��
	}
	//���ļ�
	//���ļ�

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}
*/


/*
int main()
{
	int a = 10000;   
	FILE* pf = fopen("test.txt", "wb");  
	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���   
	fclose(pf); 
	pf = NULL;
	return 0;
}
*/