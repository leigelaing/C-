#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"������.h"   //�Լ�д��ͷ�ļ���˫����
// ����������
// int Add(int, int);//Add(int x, int y);����������ʽ����

int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
//�����ĵ���
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

/*
//�����Ķ���
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
*/








/*
//���Ϊ4321  
//ԭ��printf��������ֵΪ�ַ��ĸ�����43 ���� 2  һ�� 
int main()
{
	printf("%d\n", printf("%d", printf("%d", 43)));
	return 0;
}
*/




/*
int main()
{
	int len = 0;
	
	
	len = strlen("abc");
	printf("%d\n", len);

	printf("%d\n", strlen("abc"));  //��������ʽ����
	return 0;
}
*/