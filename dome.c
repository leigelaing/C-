#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���Ϊ0 0 3 4 5
/*
int main()
{

	return 0;
}

*/


/*

//������a�е�������b�е����ݽ��н���
int   main()
{
	int  arr1[] = { 1, 3, 5, 7, 9 };
	int  arr2[] = { 2, 4, 6, 8, 0 };
	int tmp = 0;

	return 0;
}

*/







/*
//�������ʼ��Ϊ0
void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
		arr[i] = 0;
}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d  ",arr[i]);
	}
}
//��������
void  Reverse(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tem = 0;
		tem = arr[i];
		arr[i] = arr[sz-i];
		arr[i + sz] = tem;
	}
}
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Init(arr, sz);//�������ʼ��Ϊ0
	//print(arr, sz);//��ӡ����
	Reverse(arr, sz);
	print(arr, sz);//��ӡ����
	return 0;
}
*/