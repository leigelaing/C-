#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>








/*
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	//指针数组
	int* arr[10];
	//数组指针
	int* (*pa)[10] = &arr;
	//函数指针
	int(*pArr)(int, int) = Add;//&Add 
	int sum = (*pArr)(1, 2);
	int sum = pArr(1, 2);
	int sum = Add(1, 2);
	pritnf("%d\n", sum);
	//函数指针的数组
	int(*pArr[5])(int, int);
	//指向函数指针数组的指针
	int(*(*ppArr)[5])(int,int) = &pArr;
	return 0;
}
*/




void BubbleSort(int arr[], int sz)
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
//qsort函数——可以排序任意类型的数据

int main()
{
	//冒泡排序函数
	//冒泡排序函数只能排序整型数组
	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d   ", arr[i]);
	}
	return 0;
}









/*
void print(char* str)
{
	printf("hehe:%s", str);
}
void test(void(*p)(char*))
{
	printf("test\n");
	p("bit");
}
int main()
{
	test(print);
	return 0;
}

*/



/*
int main()
{
	int arr[10] = { 0 };
	int(*p)[10] = &arr;//取数组的地址  指针数组
	int(*pf)(int, int);//函数指针
	int(*pfArr[4])(int, int);//pfArr是一个数组——函数指针数组
	//ppArr是一个指向函数指针数组的指针
	int(*(*ppfArr)[4])(int, int);
   //ppfArr是一个数组指针，指针指向数组有4个元素；
	//指向的数组的每个元素的类型是一个函数指针int（*）(int,int);
	return 0;
}
*/