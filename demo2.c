#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

/*
void menu()
{
	printf("****************************************");
	printf("*****  1.add          2.sub    *********");
	printf("*****  3.mul          4.div    *********");
	printf("*****          0.exit          *********");
}
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int Sub(int x, int y)
{
	int z = 0;
	z = x - y;
	return z;
}
int Mul(int x, int y)
{
	int z = 0;
	z = x * y;
	return z;
}
int Div(int x, int y)
{
	int z = 0;
	z = x / y;
	return z;
}
void Calc(int(*pf)(int, int))
{
	int x = 0;
	int y = 0;
	pritnf("请输入两个操作数>:");
	scanf("%d  %d ", &x, &y);
	printf("%d\n", pf(x, y));
}
int main()
{
	int input = 0;
	do
	{
		menu;
		printf("请选择>：");
		scanf("%d ", &input);
		switch (input)
		{
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("退出\n");
		default:
			printf("输入错误！\n");
	} while (input);
}
*/









/*
方法二
int  main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	//pFArr 函数指针数组
	int(*pFArr[5])(int, int) = {0,Add,Sub,Mul,Div};
	do
	{
		menu;
		printf("请选择>：");
		scanf("%d ", &input);
		if (input >= 1 && input <= 4)
		{
			pritnf("请输入两个操作数>:");
			scanf("%d  %d ", &x, &y);
		int ret = pFArr[input](x,y);
		printf("%d\n",ret);
		}
		else if (input == 0)
		{
			pritnf("退出\n");
		}
		else
		{
			printf("选择错误！\n");
		}
	} while (input);
	return 0;
}

*/






/*
//繁琐的方法一
int  main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	do{
		menu;
		printf("请选择>：");
		scanf("%d ", &input);
		switch (input)
		{
		case 1:
			pritnf("请输入两个操作数>:");
			scanf("%d  %d ", &x, &y);
			printf("%d\n", Add(x, y));
			break;
		case 2:
			pritnf("请输入两个操作数>:");
			scanf("%d  %d ", &x, &y);
			printf("%d\n", Sub(x, y));
			break;
		case 3:
			pritnf("请输入两个操作数>:");
			scanf("%d  %d ", &x, &y);
			printf("%d\n", Mul(x, y));
			break;
		case 4:
			pritnf("请输入两个操作数>:");
			scanf("%d  %d ", &x, &y);
			printf("%d\n", Div(x, y));
			break;
		case 0:
			printf("退出\n");
		default:
			printf("输入错误！\n");
		}

	   } while (input);
}
*/











/*
int  main()
{
	char* my_strcpy(char* dest, const char*src);
	//1.写一个函数指针pf，能够指向my_strcpy
	char* (*pf)(char*, const char*);
	//注意这个函数指针的区别：原函数是存放指针的，所以要用二级指针的概念。
	//2.写一个函数指针数组pfArr，能够存放4个my_strcpy
	char* (*pa[4])(char*, const char*);

		return 0;
}

*/





/*
//计算器实现
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int Sub(int x, int y)
{
	int z = 0;
	z = x - y;
	return z;
}
int Mul(int x, int y)
{
	int z = 0;
	z = x * y;
	return z;
}
int Div(int x, int y)
{
	int z = 0;
	z = x / y;
	return z;
}
int  main()
{
	//指针数组
	int* arr[5];   //int(*pa)[5] //数组指针    *与[] 变量先与[]  结合
	int(*pa)(int, int) = Add;
	//需要一个数组，这个数组可以存放4个函数的地址——函数指针的数组
	int(*    parr[4]    )(int, int) = {Add,Sub,Mul,Div};  //函数指针的数组
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d\n", parr[i](2, 3));
	}
	return 0;
}
*/



/*
int main()
{
	int a = 10;
	int b = 20;
	int(*pa)(int, int) = Add;
	printf("%d\n", (pa)(2, 3));
	printf("%d\n", Add (2, 3));
	printf("%d\n", (*pa)(2, 3));
	//printf("%d\n", *pa(2, 3));//这种写法是错的，因为书写形式已经不是函数指针类型
	printf("%d\n", (**pa)(2, 3));
	printf("%d\n", (***pa)(2, 3));
	return 0;
}

*/










/*
int main()
{
	/*
	signal 是一个函数声明
	signal函数的参数有2个，第一个是int 第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
	signal 函数的返回类型也是一个函数指针，该函数指针指向的函数的参数是int 返回值是void
	



	void(*   signal(int, void(*)(int)) )(int);
	pfun_t signal(int, pfun_t);
	typedef void(*pfun_t)(int);
	typedef  unsigned int uint;
	return 0;
}
*/






//一个非常难以理解的代码
/*

(* (void(*)()) 0)();
void(*)()  ——函数指针类型 
本句代码的意思是：
把0强制类型转换为：void(*)()函数指针类型，  0就是一个函数的地址，调用0 地址处的该函数

void (*signal (int,   void(*)(int)  ))(int);

void（*              ）（int）——函数指针
void（*）（int）——函数指针类型



*/


/*
void print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	int a;
	int* pa;
	void(*p)(char*) = print;  //p中存放print函数的地址 ——函数指针
	(*p)("hello  bit");
	return 0;
}
*/
