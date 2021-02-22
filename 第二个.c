#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>








/*
//sizeof操作符
//sizeof计算的变量所占空间的大小，单位为 字节
int main()
{
	int a = 10;
	char c = 'r';
	char* p = &c;
	int arr[10] = { 0 };
	printf("%d\n", sizeof(a));//4    //  变量求大小可以省略掉括号
	printf("%d\n", sizeof(int));    //   类型求大小不能省略掉括号
	printf("%d\n", sizeof(c));//1
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(p));//4
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(arr));//40
	printf("%d\n", sizeof(int[10]));//int[10]就是arr数组的类型  
	return 0;
}
*/



/*
int main()
{
	int a = 10;
	int* p = &a;//取地址操作符
	*p = 20;//解引用操作符
	printf("%d\n", a);//根据地址将a的值变为20；
	return 0;
}

*/




/*
//单目操作符（只有一个操作数）
//双目操作符（有两个操作数）
int main()
{
	int a = -5;
	a = -a;
	printf("%d\n", a);

	int a = 10;
	printf("%d\n", !a);//  非零为真
	if (!a)
	{
		printf("哈哈\n");
	}
	
	return 0;
}
*/




/*
int main()
{
	//复合赋值符
	int a = 10;
	a = a + 2;
	a += 2;
	a = a >> 1;
	a >>= 1;
	a = a & 1;
	a &= 1;
	return 0;
}
*/