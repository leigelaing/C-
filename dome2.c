#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>
/*
//联合 — 联合体  ——共用体——共用体就是共同利用了同一块空间
struct S
{
	char a;
};
enum A
{

};
union Un
{

};
int main()
{
	return 0;
}
*/




/*
//枚举
//枚举类型
enum Sex
{
	//枚举的可能取值——枚举常量  
	MALE = 2 ,
	FEMALE = 3,
	SECRET = 4
};

#define RED 0;
#define GREEN 1;
#define BLUE 2;

enum  Color
{
  //枚举常量默认从零开始 依次递增1   也可以重新赋初始值
	RED,   //0
	GREEN, //1
	BLUE   //2
};
int main()
{
	enum Sex s = MALE;
	enum Color c = BLUE;//BLUE等于2，但不能将2赋给c 因为2为int型数据
	printf("%d %d %d\n", RED, GREEN, BLUE);
	printf("%d %d %d\n", MALE, FEMALE, SECRET);
	return 0;
}

*/





/*
//位段——二进制位
//位段的作用可以节省空间
//A就是一个结构体位段类型
//位段不支持跨平台
struct S 
{ 
	char a : 3;  
	char b : 4; 
	char c : 5;  
	char d : 4;
};
int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3; 
	s.d = 4;
	return 0;
}
*/










/*
struct A
{
	int a : 2; //a只需要2个比特位就足够
	int b : 5; //b只需要5个比特位就足够
	int c : 10;//c只需要10个比特位就足够
	int d : 30;//d只需要30个比特位就足够
//一共需要47个bit   ——6个字节*8 == 48bit
	//注意定义位段类型时，后面的数字不能大于类型的字节数
};
int main()
{
	struct A s;
	printf("%d\n", sizeof(s));//解果为：8个字节
	return 0;
}
*/






/*
//结构体传参
struct S
{
	int a;
	char c;
	double d;
};

void Init(struct S tmp)
{
	tmp.a = 100;
	tmp.c = 'w';
	tmp.d = 3.14;
}

//传值
void print1(struct S tmp)
{
	printf("%d,%c,%lf\n", tmp.a ,tmp.c  ,tmp.d  );
}
//传址
void print2( const struct S* ps)
{
	printf("%d,%c,%lf\n", ps->a, ps->c, ps->d);
}

int main()
{
	struct S s = { 0 };
	Init(&s);
	print1(s);
	print2(&s);
	printf("%d\n", s.a);
	return 0;
}
*/
