#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
struct S
{
	int n;
	char c;
	int arr[0];//���������Ա
};
struct S
{
	int n;
	int arr[];//���������Ա
};

int main()
{
	printf("%d\n", sizeof(struct S));//���sizeof ��������������Ŀռ��С
	return 0;
}









/*
struct S
{
	int n;
	int*  arr;//�ṹ���Ϊintָ������
};

int main()
{
	struct S*  ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//������С
	int* ptr = realloc(ps->arr, 10 * sizeof(int));//��ԭ�еĿռ䣬��������
	if (ptr != NULL)
	{
		ps->arr = ptr;
	}
	for (i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//�ͷ��ڴ�
	//ע���ͷſռ�˳��
	free(ps->arr);
	ps->arr = NULL;


	free(ps);
	ps = NULL;
	return 0;
}

*/