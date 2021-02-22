#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>





/*
int  main()
{
	int a = 10;
	int b = 0;
	if (a > 5){
		b = 3;
	}
	else
	{
		b = -3;
	}

	b = ( a> 5? 3: -3);

	return 0;
}

*/




/*
int main() 
{
	int i = 0, a = 0, b = 2, c = 3, d = 4; 
	i = a++ && ++b && d++; 
	//i = a++||++b||d++; 
	printf("a = %d\n    b = %d\n    c = %d\n   d = %d\n", a, b, c, d);
	
	
	int i1 = 0, a1 = 1, b1 = 2, c1 = 3, d1 = 4;
	i = a++ && ++b && d++;  //2  3  3  4
	//i = a++||++b||d++; 
	printf("a = %d\n    b = %d\n    c = %d\n   d = %d\n", a1, b1, c1, d1);
	return 0; 
}
*/




/*
int  main()
{
	int a = 5;
	int b = 3;
	int c = a && b;
	printf("%d\n", c);
	return 0;
}
*/



/*
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//(2)  //arr代表首元素的地址
} 
void test2(char ch[])  
{ 
	printf("%d\n", sizeof(ch));//(4) //ch为首元素的地址
} int main()
{ 
	int arr[10] = {0};
	char ch[10] = {0};
	printf("%d\n", sizeof(arr));//(1)       //40
	printf("%d\n", sizeof(ch));//(3)         //10
	test1(arr);
	test2(ch);
	return 0;
}

*/







/*
int main()
{
	int a = (int)3.14;
	printf("%\n", a);
	return 0;
}
*/



/*
int main()
{
	int a = 10;
	printf("%d\n", ++a);//前置++  先++  后使用
	printf("%d\n", a++);//后置++  先使用 后++
	return 0;
}
*/




/*
int main()
{
	int a = 11;
	int b = 0;
	a = a | (1 << 2);
	printf("%d\n", a);
	//还原
	b = a & (~(1 << 2));
	printf("%d\n", b);
	//11的二进制
	//0000000000000000000000001011
	
	//0000000000000000000000000100//此数字的产生  将数字1向右按位移动两位
	//0000000000000000000000001111
	//两个数字或一下
	//将倒数第三位变为1


//	int a = 0;
	//~按（2进制）位取反
//	printf("%d\n", ~a);
	//000000000000000000——补码
	//111111111111111111——补码
	//111111111111111110——反码
	//100000000000000001——原码
	//注意最高位为符号位
	return 0;
}
*/




/*
int main()
{
	short s = 0;
	int a = 10;
	printf("%d\n", sizeof(s = a + 5));//输出结果为2 原因：s为short类型为2个字节
	printf("%d\n", s);
	//输出为0  原因：原则输出为15 但注意sizeof中的计算不会真实计算，s仍旧为0；
	return 0;
}
*/