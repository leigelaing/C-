#define _CRT_SECURE_NO_DEPRECATE

/*
#include<stdio.h>
int main()
{
	char arr[5] = { 0 };//5���ַ�
	scanf("%s",arr);//�������5���ַ���δ���
	//scanf���������ַ������ῼ������Ϊ�����ַ���������Ƿ񳬳����������
	printf("%s\n",arr);
	return 0;

}
*/

/*
int main()
{
	//δ�����ı�ʶ��
//extern ���������ⲿ���ţ�
	extern  int  a;
	printf("%d\n",a);
	return 0;
}
*/






/*
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("sum = %d\n",a + b);
	return 0;
}
*/


/*
int main()
{
	int a = 0;
	int b = 0;
	//scanf("%d %d", &a, &b);//& ȡ��ַ����
	int sum = a + b ;
	printf("%d\n",sum);
	printf("%d\n",a + b);
	return 0;
}
/*
#include <stdio.h>
//int num2 = 20;//ȫ�ֱ����������ڴ����֮��ı���
int main()
{
	int a = 20;
	//int num = 10;//�ֲ������������ڴ����֮�ڵı���
	//�ֲ�������ȫ�ֱ�������һ�£����������ֲ�һ�£�����������BUG
	//��ȫ�ֱ�����������ֲ�����������һ��ʱ���ֲ��������ȣ�
	printf("%d\n",a);
	return 0;
}
*/