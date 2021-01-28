#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	printf("%d\n", strlen("c:\test\328\test.c")); //  \328  8进制数没有8 这个不行应该报错
	printf("%c\n", '\x61');
	return 0;
}





/*
int main()
{
	printf("%c\n", '\132');
	printf("%c\n",'\32');
	printf("%d\n",strlen("c:\test\32\test.c"));//注意不算""双引号，
	//c   :  \t e s t \32 \t e s t . c   一共13个
	//  \32——32是2个8进制数字
	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符；
	//32转换为十进制，3*8^1+2*8^0 = 26;  26作为ASCII码值代表的字符
	return 0;
}
*/



/*
//打印路径
int  main()
{
	printf("%d\n",'\'');//打印" '"
	printf("%d\n"\"");//打印“ " ”
	printf("c:\test\32\test.c");     \t 转义为水平制表符，
	return 0;
}
*/



/*
int main()
{
	printf("abc\n")//  \n转义字符“换行”
	return 0;
}
*/



/*
int main()
{
	char  arr[] = "abc";//数组
	char  arr1[] = { 'a', 'b', 'c' };
	printf("%d\n", strlen(arr));//strlen _string  length  //用来计算字符串长度
	printf("%d\n", strlen(arr1));
	return 0;
}
*/






/*
int  main()
{
	char  arr[] = "abc";//数组
	char  arr1[] = { 'a', 'b', 'c' };
	char  arr2[] = { 'a', 'b', 'c' ,0};//  \0(字符串的结束标志)   \0 = 0;
	printf("%s\n",arr);
	printf("%s\n",arr1);
	printf("%s\n", arr2);
	return 0;
}

*/
/*
//4.枚举常量（枚举：一一列举）
//枚举关键字：enum
enum  color
{
	red,//0
	yellow,//1
	blue//2

};
//枚举常量不能改；
int main()
{
	enum color s = red;
	s = yellow;
	return 0;
}

*/


/*
enum  sex
{
	male,
	female,
	secret

};//注意分号
//male,female,secret——枚举常量（有值且不可改变）
int main()
{
	enum sex s = female;
	printf("%d\n", male);//0
	printf("%d\n", female);//1
	printf("%d\n", secret);//2
	return 0;
}
*/






/*
#define MAX 10//标识符常量，注意后面不需要分号
int  main()
{
	int arr[MAX] = { 0 };
	ptinf("%d\n"MAX);
	return 0;
}
*/












/*

int main()
{
	const int n = 10;
	int  arr[n] = { 0 };//常变量不是常量；还是会报错
	int n = 10;
	int  arr[n] = { 0 };//变量不能是变量表达式



	//const  (常属性)
	const int num1 = 4;//const修饰的常变量（变量具有常量的属性）不能进行更改
	int num1 = 8;
	printf("%d\n", num1);//会报错的
	int num = 4;
	num = 8;
	printf("%d\n",num);
	return 0;
}
*/