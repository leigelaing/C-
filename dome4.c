#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
struct S
{
	int n;
	char c;
	int arr[0];//柔性数组成员
};
struct S
{
	int n;
	int arr[];//柔性数组成员
};

int main()
{
	printf("%d\n", sizeof(struct S));//这个sizeof 不计算柔性数组的空间大小
	return 0;
}









/*
struct S
{
	int n;
	int*  arr;//结构体变为int指针类型
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
	//调整大小
	int* ptr = realloc(ps->arr, 10 * sizeof(int));//将原有的空间，进行增加
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
	//释放内存
	//注意释放空间顺序
	free(ps->arr);
	ps->arr = NULL;


	free(ps);
	ps = NULL;
	return 0;
}

*/