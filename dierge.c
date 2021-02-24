#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//将a中值变为1,2,3,4，5,6，7,8,9,10
//数组越界导致的野指针问题
int main()
{
	int a[10] = { 0 };
	int i = 0;
	int* p = a;
	for (i = 0; i <= 12; i++)
	{
		*p = i;
		p++;     //*p++ = i；
	}
	return 0;
 }





/*
//局部变量函数运行完成后，变量空间被操作系统回收，
//当指针指向被释放的空间时，会出现野指针
int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p = test();
	*p = 20;
	printf("%d\n",*p);
	return 0;
}

*/




/*
int main()
{
	//指针越界范围，会出现野指针
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 12; i++)
	{
		p++;
	}
	*/




	int a;//局部变量不初始化，默认为随机值
	int* p;//局部的指针变量，就被初始化随机值
	return 0;
}






/*
int  main()
{
	int arr[10] = { 0 };
	int* p = arr;//arr为首元素地址
	char* p1 = arr;//这种不行，不能全部变为1
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;//将arr数组内容变为 1
	}
	return 0;
}
*/



/*
指针类型的第二个作用
int  main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pa+1);
	printf("%p\n", pc);
	printf("%p\n", pc+1);
	return 0;
}
*/






//指针变量无论任何类型，指针变量类型都是4个字节
//那么指针类型又有何意义
//解引用操作不一样是有区别的，区别如代码所示
/*
指针类型决定了指针进行进行解引用操作的时候，能够访问空间的大小
//   int* p   *p能够访问4个字节
     char* p   *p能够访问1个字节
	 double* p   *p能够访问8个字节
int main()
{
	int a = 0x11223344;
	int* pa = &a;
	*pa = 0; //a地址中的值变化为00 00 00 00   四个字节全部都变为0
	char* pc = &a;
	*pc = 0;//a地址中的值变化为00 33 22 11   四个字节中只有1个字节变为0
	printf("%p\n", pa);
	printf("%p\n", pc);
	return 0;
}
*/