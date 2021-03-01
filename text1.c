#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
int main()
{
	int arr1[] = { 1, 2, 3, 4, 9 };
	int arr2[] = { 1, 2, 3, 4, 8 };
	int arr3[] = { 1, 2, 3, 4, 4 };
	int* parr[] = { arr1, arr2, arr3 };
	int i = 0;
	for (i = 0; i < 3;i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d  ",*(parr[i] + j));
		}
		printf("\n");
	}
	
	return 0;
}
*/




/*
int  main()
{
   //指针数组  是数组  用来存放指针的数组
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[4] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", *(arr[i]));
	}
	int arr[10] = { 0 };//整型数组
	char ch[5] = { 0 };//字符数组
	int* arr[10] = { 0 };//存放整型指针的数组——指针数组
	char* ch[5] = { 0 };//存放字符型指针的数组——指针数组
	return 0;
}
*/





/*
int main()
{
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	const char *str3 = "hello bit.";
	const char *str4 = "hello bit.";
	if (str1 == str2) //两个数组不一样，比较的的是两个不同数组的首元素的地址，怎么会一样       
		printf("str1 and str2 are same\n");
	else  
		printf("str1 and str2 are not same\n");
	if (str3 == str4)   //这个str3 = str4是一样的 ，常量字符串不能修改，虽然看着创建了两份实际上在内存中只存放一份
		//p1与p2为两份不同的空间，但指向的是同一块空间
		printf("str3 and str4 are same\n");
	else  
		printf("str3 and str4 are not same\n");
	return 0;
}
*/






/*
int main()
{
	//这种写法Ok
	const char* p = "abcdef";  //指针为四个字节，放不下这么多字母因为一共7个字节
	//前面加const 意味着后面内容不能改
	//"abcdef"中的字符串为常量字符串，实际是将a的地址赋给p   
	*p = 'W';//*p = a;但是不能通过*p改变空间的值
	printf("%c\n", *p);
	printf("%s\n", p);//%s 代表打印一个字符串
	//char ch = 'W';
	//char* pc = &ch;
	//char arr[] = "abcdef";
	//char* pc = arr;//首元素地址
	//printf("%s\n",pc);
	//printf("%s\n", arr);
	//return 0;
}
*/





/*
结果为1

void test(int arr[])
{
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
}
int main()
{
	int  arr[10] = { 0 };
	test(arr);
	return 0;
}
*/