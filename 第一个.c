#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//��д��������������ʱ���������ַ�������


//��������
/*
int  my_strlen(char* str)//str��ŵ��ǵ�һ���ַ��ĵ�ַ
{
	int count = 0;
	while (*str != "\0")
	{
		count++;//��¼�ַ�������
		str++;//��ָ���Լ�������
	}
	return count;
}
*/




/*
//�ݹ鷽��
int  my_strlen(char* str)
{
	if (*str != '\0') //str �д�ŵ�һ���ַ��ĵ�ַ
		return 1 + my_strlen(str + 1);//str+1��Ϊ�ڶ�����ַ�����ϼ�1����
	else
	      return 0;
}
//���»�С
// my_strlen("bit")
// 1+my_strlen("it")
//1+1+my_strlen("t")
//1+1+1+my_strlen("\0")
//1+1+1+0

int main()
{
	char arr[] = "bit";
	//int len = strlen(arr);//����һ
	int len = my_strlen(arr);//������ʹ�ú���
	//my_strlen(arr)  arr������ ���鴫��    ����Ĳ����������������Ԫ�صĵ�ַ
	printf("len = %d\n", len);
	return 0;
}
*/




/*
//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
void  print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d\n",n%10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	//�ݹ飺�����Լ������Լ�����˼
	print(num);
	return 0;
}

*/













/*
//�������Լ��ݹ�����Լ�
int main()
 {
	printf("hehehe");
	main();     
	return 0;
}
*/





/*
#include"Add.h"
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
*/