#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
	int *p; 
	p = a[0]; 
	printf("%d", p[0]);   
	return 0; }









/*
int main()
{
	int a[4] = { 1, 2, 3, 4 }; 
	int *ptr1 = (int *)(&a + 1);//ptr1指向数组最后
	int *ptr2 = (int *)((int)a + 1); //prt2 首先是地址变为整型，加1  然后再变为地址，其实最后结果为指针往后移动了一个字节（注意是一个字节）
	printf("%x,%x", ptr1[-1], *ptr2);
	//prt1[-1] == *(prt +(-1)) ==  *(prt -1)
	return 0; 
}
*/





/*
//本题  考察指针+ -整数
//加减多少取决于指针类型
struct Test
{
	int Num;   
	char *pcName;
	short sDate;
	char cha[2];
	short sBa[4]; 
}*p;
//假设p 的值为0x100000。 如下表表达式的值分别为多少？ 
//已知结构体Test类型变量大小是20字节
int main()
{
	p = (struct Test*) 0x100000;
	printf("%p\n", p + 0x1);// 0x1 == 1,加1跳过一个结构体  （0x100000 + 20）——转化为16进制即可
	printf("%p\n", (unsigned long)p + 0x1);//将地址转化为数字，直接加1 再转化为16进制即可
	printf("%p\n", (unsigned int*)p + 0x1);//无符号的整型指针  加1跳过4个字节
    //一个无符号整数4个字节
	return 0;
}
*/




/*
int main() 
{
	int a[5] = { 1, 2, 3, 4, 5 }; 
	int *ptr = (int *)(&a + 1);//(&a + 1)数组指针类型  不能存放所以需要强制类型转换
	//取数组加1，跳过整个数组 
	printf("%d,%d\n", *(a + 1), *(ptr - 1));//ptr - 1 已经强制类型转换 减1 等于往回走4个字节
	return 0; 
}
*/