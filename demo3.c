#define  _CRT_SECURE_NO_WARNINGS 1
/*
//qsort函数的自己实现
#include<stdio.h>
void swap(char* buf1,int* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
			*buf1 = *buf2;
			*buf2 = tmp;

	}
}

//实现冒泡排序函数的程序员，不知道未来排序的数据类型是怎样的
//程序员也不知道待比较两个元素的类型
void bubble_qsort(void* base,int sz,int width,int (*cmp)(void* e1,void* e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz-1; i++)
	{
		//每趟比较的对数
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个数进行比较
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
			//变为char类型指针，每次指向一个字节，再加上一个元素的宽度正好每次跳一个元素的大小
			{
				//交换
				swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
			
			}

		}
	}

}
struct stu
{
	char name[20];
	int age;
};
void test1()
{
	int arr[] = { 1, 3, 5, 6, 7, 9, 8, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//使用bubble_qsort函数进行排序，程序员一定知道自己排序的是什么类型，
	//就应该知道如何比较待排序数组中元素的个数
	bubble_qsort(arr，sz，sizeof(arr[0]),cmp_int);
}
void test2()
{
	struct stu s[3] = { { "zhangsan", 23 }, { "lisi ", 43 }, { "wangwu", 12 } };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_qsort(s, sz, sizeof(s[0]));
}
int main()
{
	test1();
	test2();
	return 0;
}
*/





/*
void qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));
//qsort
//第一个参数：待排序数组的首元素地址
//第二个参数：待排序数组元素的个数
//第三个参数：待排序数组的每个元素的大小，——单位字节
//第四个参数：是函数指针，比较两个元素的所用函数的地址——这个函数使用者自己实现
   //第四个参数 函数的两个参数是：待比较两个元素的地址
int main()
{

	return 0;
}
*/
