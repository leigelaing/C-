#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>

/*

1.scanf  /printf  ����Ա�׼������/��׼�������ʽ������/������
2.fscanf/fprintf  ���������������/�����������ʽ������/������
3.  sscanf  �Ǵ��ַ����ж�ȡ��ʽ������
    sprintf   �ǰɸ�ʽ��������ɣ��洢�����ַ���



*/

















/*
struct S
{
	int n;
	float score;
	char arr[10];
};
int  main()
{

	struct S s = { 100,3.14f,"abcdef"};
	struct S tmp = { 0 };
	char buf[1024] = { 0 };
	//�Ѹ�ʽ��������ת�����ַ����洢��buf
	sprintf(buf, "%d %f %s ", s.n, s.score, s.arr);
	printf("%s\n", buf);
	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);//arr ���������Ԫ�ص�ַ
	printf("%d %.2f %s", tmp.n, tmp.score, tmp.arr);
	return 0;
}
*/
/*
struct S
{
	int n;
	float score;
	char arr[10];
};
int  main()
{
	struct S s = { 0 };
	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);//arr ���������Ԫ�ص�ַ
	fprintf(stdout,"%d %.2f %s", s.n, s.score, s.arr);
	return 0;
}


*/



/*
struct S
{
	int n;
	float score;
	char arr[10];
};
int  main()
{
	struct S s = { 100, 3.14f, "bit" };
	FILE* pf = fppen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	//��ʽ������������
	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);//arr ���������Ԫ�ص�ַ
	printf("%d %f %s", s.n, s.score, s.arr);

	fclose(pf);
	pf = NULL;
	return 0;
}

*/



/*
struct S
{
	int n;
	float score;
	char arr[10];
};
int  main()
{
	struct S s = { 100, 3.14f, "bit" };
	FILE* pf = fppen("test.txt", "w");
	if (pf == NULL)
	{
		return 0;
	}
	//��ʽ������ʽд�ļ�
	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
	fclose(pf);
	pf = NULL;
	return 0;
}

*/











/*
int main()
{
	//�Ӽ��̶�ȡһ���ı��ı���Ϣ
	char buf[1024] = { 0 };
	fgets(buf, 1024, stdin);//�ӱ�׼�����ȡ
	fputs(buf, stdout);//�������׼�����
	gets(buf);
	puts(buf);
	
	return 0;
}
*/





/*
int main()
{
	char buf[1024] = { 0 };//����һ������
	FILE* pf = fopen("test.txt", "w");
	//��ʧ����Ҫ�ж�
	if (pf == NULL)
	{
		return 0;
	}
	//д�ļ�
	fputs("hello\n", pf);
	fputs("world\n", pf);
	  
	
	//�ر��ļ�
	fclose(pf);
	pf == NULL;
	return 0;
}

*/




/*
int main()
{
	char buf[1024] = { 0 };//����һ������
	FILE* pf = fopen("test.txt", "r");
	//��ʧ����Ҫ�ж�
	if (pf == NULL)
	{
		return 0;
	}
	//���ļ�
	fgets(buf, 1024, pf);
	printf("%s\n", buf);
	fgets(buf, 1024, pf);
	printf("%s\n", buf);
//�ر��ļ�
	fclose(pf);
	pf == NULL;
	return 0;
}
*/




/*
int main()
{
	FILE* pf = fopen("test.txt", "r");//��test.txt�ļ��������Զ��ķ�ʽ��
	//�ж�����
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//���ļ�
	int ch = fgetc(pf);
	printf("%c", ch);
    ch = fgetc(pf);
	printf("%c", ch);
    ch = fgetc(pf);
	printf("%c", ch);
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}

*/



/*
int main()
{
	FILE* pf = fopen("test.txt", "w");//���ļ���д��
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	//д�ļ�
	fputc('b', pf);
	fputc('i', pf);
	fputc('t', pf);
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}
*/
