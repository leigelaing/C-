#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//static 修饰全局变量，改变了全局变量的作用域，
//让静态的全局变量只能在自己所在的源文件内部使用，出了源文件就没办法再使用
int main()
{
	//extern ——声明外部符号
	    extern  int g_val;
		extern  int g_val2;
		printf("%d\n", g_val);
		printf("%d\n", g_val2);
	    return 0;
}



/*
void test()
{
	//static修饰局部变量，局部变量的生命周期变长
	//
	static int a = 1;//a是一个静态的局部变量(加入static 局部变量每次不销毁)；
	//int a = 1;  //局部变量每次自动销毁，每次进去自动创建
	a++;
	printf("%d\n", a);

}
int  main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;

}
*/





/*
int main()
{
	//typedef—类型定义—类型重定义
	unsigned int a = 10;
	typedef  unsigned int   uint;
	//unsigned int == uint //将变量名缩短
     //	register  int a = 10;//建议把a定义成寄存器变量
	int a = 10;
	a = -2;
	//int 定义的变量是有符号的
	//signed (一般省略)int ;
	//unsigned （一般省略）int;
	//struct——结构体关键字
	//union——联合体/共用体
	return 0;
}

*/


/*
int main()
{
	//在C语言中规定：
	//真——非0——1表示
	//假——0——0表示
	//&&——逻辑与
	//||——逻辑或
	int a = 3;
	int b = 5;
	int c = a && b;
	int d = a || b;
	printf("%d %d\n", c, d);
	return 0;
}
*/




/*
int main()
{
	int a = 10;
	int b = a++;//后置++，先使用再++
	int c = ++a;//前置++，先++再使用
	//--同理
	printf("%d %d %d\n", a,b,c);
	return 0;
}
*/





/*
int main()
{
	int a = 0;//4个字节32个bit位
	// ~按（2进制位）位取反
	//00000000000000000000000000000000
	//11111111111111111111111111111111     //最高位为符号位
	int b = ~a;
	printf("%d\n", b);//结果为 -1
	//正常使用的是原码
	//11111111111111111111111111111111 ——补码
	//11111111111111111111111111111110——反码（注意符号位不变，其他位按位取反）
	//10000000000000000000000000000001——原码
	return 0;
}
*/