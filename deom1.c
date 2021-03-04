#define  _CRT_SECURE_NO_WARNINGS 1
/*
#include<stdio.h>
#include<stdlib.h>
//冒泡排序
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//一趟冒泡排序
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		//趟数
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]<arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
struct stu
{
	char name[20];
	int age;
};
void qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));

int cmp_int(const void* e1, const void* e2)
{
	//比较两个浮点型值
	return *(int*)e1 - *(int*)e2;
}
int cmp_float(const void* e1, const void* e2)
{
	//比较两个浮点型值
	if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;
}
void test1()
{
	int arr[] = { 1, 3, 5, 6, 7, 9, 8, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
}

void test2()
{
	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%d\n", f[j]);
	}
}

int main()
{
	int arr[] = {1,3,5,6,7,9,8,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//另一个程序
	struct stu s[3] = { { "zhangsan", 23 }, { "lisi ", 43 }, { "wangwu", 12 } };
	float f[] = {9.0,8.0,7.0,6.0,5.0,4.0,3.0};
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	test1();
	test2();
    //冒泡排序只能排序整型，不能是其他类型
	//bubble_sort(arr,sz);
	//int i = 0;
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}
	return 0;
}
*/







/*

int  main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));




	pritnf("%d\n", sizeof(arr));//sizeof(arr)计算的是数组的大小，单位是字节：7
	pritnf("%d\n", sizeof(arr + 0));//4/8   计算的是地址的大小——arr + 0是首元素的地址
	pritnf("%d\n", sizeof(*arr));//1        *arr是首元素，sizeof(*arr)计算首元素的大小
	pritnf("%d\n", sizeof(arr[1]));//1      sizeof(arr[1])计算的是第二个元素，计算第二个元素的大小
	pritnf("%d\n", sizeof(&arr));//4/8     &arr代表数组的地址，但也是地址，所以是4/8个字节
	pritnf("%d\n", sizeof(&arr + 1));//4/8   &arr + 1 是跳过整个数组后的地址，但也是地址 
	pritnf("%d\n", sizeof(&arr[0] + 1));//4/8  &arr[0] + 1 第二个元素的地址
	return 0;
}
*/




/*
int com_stu_by_name(const void* e1, const void*e2)
{
   //比较名字就是比较字符串
	//字符串比较不能用><=进行比较，应该用strcmp函数
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name, );
}

int  main()
{
	
	return 0;
}

*/



/*
int  main()
{
	int a = 10;
	int* pa = &a;
	//char* pc = &a;
	char ch = 'W';
	void* p = &a;
	p = &ch;
	//*p = 0;
	//p++;
	//void*  类型的指针，可以接收任意类型的地址
	//void* 类型的指针  不能进行解引用操作
	//void* 类型的指针，不能进行加减整数的操作

	return 0;
}
*/