
/*
//包含一个stdio.h的头文件——标准standard  input  output
#include<stdio.h>

int main()  //主函数——程序的入口——main函数有且仅有一个
{
	short  age = 20;//向内存申请2个字节的空间，=16个bit位，用来存放20；
	float weight = 95.6f;//向内存中申请4个字节
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return 0;
}
	/*
	double d = 3.14;
	printf("%f\n");
	float f = 5.0;
	printf("%f\n",f);
	char  ch = 'A';//内存
	printf("%c\n",ch);//%c——打印字符格式的数据；
	int age = 20;
	printf("%d",age);//%d打印整型十进制数据
	//short  int//短整型
	//	int//整型
		//long//长整形
		long mun= 100;
		printf("%d\n", mun);
	//这里完成任务；
	//printf(打印函数)——print  function
	//库函数——C语言本身提供给我们使用的函数
	//
	printf("hehe\n");
	return 0;//返回0；
}

//int 是整型的意思，main前面的int表示main函数调用返回一个整型值



//以下为过时写法不建议采纳
/**
void  main()
{
}
*/
/*
char_字符类型
%d—打印整型
%c—打印字符
%f—打印浮点数字
%p—以地址的形式打印
%x—打印16进制
%o—
*/