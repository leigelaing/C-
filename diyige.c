#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
//数组指针——实质为指针
//指针数组——实质为数组——存放指针的数组
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//整型数组——存放整型
	//字符数组——存放字符
	//指针数组——存放指针
	int* arr2[3] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr2[i]));
	}
	return 0;
}
*/





/*
int  main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;  //ppa就是二级指针
	int*** pppa = &ppa //pppa就是三级指针
	return 0;
}

*/




/*
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + 1) = i;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]); //其中&arr[i]还可以写成  *（p+i）
	}
	for (i = 0; i < 10; i++)
	{
		printf(" %p  =======   %p\n",p+1, &arr[i]);
	}
	return 0;
}

*/




/*
int main()
{
	int arr1[10] = { 0 };
	printf("%p\n", arr1);//地址——首元素的地址
	printf("%p\n", &arr1[0]);
	//以下两种情况arr不代表首元素地址：
	//1.&arr ——&数组名—数组名不是首元素地址，数组名表示整个数组—&数组名  取出的是整个数组的地址；
	//2.sizeof（arr）——sizeof（数组名）—数组名表示的整个数组，——sizeof（数组名）计算的是整个数组的大小

	//验证过程
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%p\n", arr+1);

	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);

	printf("%p\n", &arr);
	printf("%p\n", &arr+1);

	return 0;
}
*/


/*
int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
    //strlen -求字符串长度
	//递归—模拟实现了strlen-  方法一计数器方式；  方法二—递归的方式2；
	char arr[] = "bit";
	int  len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}
*/






/*

//指针-指针:指针减去指针得到的结果为元素的个数
int main()
{
	char ch[5] = { 0 };
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	pritnf("%d\n",&arr[9] - &arr[0]);//大地址-小地址——元素个数
	pritnf("%d\n", &arr[0] - &arr[9]);//小地址-大地址——元素个数的负数
	pritnf("%d\n", &arr[9] - &ch[9]);//类型不统一，并且不是同一个数组，不能进行相减，结果垃圾值
	return 0;
}
*/








/*
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = &arr[9];

	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *p);
		p = p - 1; //相等于p--
	}
	return 0;
}
*/



/*

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;

	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *p);
		p = p + 1; //相等于p++
	}

	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *p);
		p = p + 2; 
	}
	return 0;
}
*/