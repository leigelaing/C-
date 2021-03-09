#define  _CRT_SECURE_NO_WARNINGS 1
/*
#include<stdio.h>
#include<stddef.h>
//结构体
struct S
{
	char c;
	int i;
	double d;
};
int main()
{
	//offsetof() 是一个宏  计算结构体偏移量;
	printf("%d\n", offsetof(struct S, c));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, d));
	return 0;
}



*/









/*
//结构体内存对齐

//更改默认对齐数

//设置默认对齐数位 4
#pragma pack(4)  
struct S
{
	char c1;//1
	double d;//8
};
#pragma pack() 
//取消设置的默认对齐数
int main()
{
	struct S s;
	printf("%d\n", sizeof(s));
	return 0;
}


//S1 S2不同在于 成员变量顺序的不同
struct S3
{
	double d;
	char c;
	int i;
};
struct S1
{
	char c1;
	int  a;
	char c2;
};
struct S2
{
	char c1; 
	char c2;
	int  a;
};
int main()
{
	struct S1 s1 = { 0 };
	struct S2 s2 = { 0 };
	struct S3 s3 = { 0 };
	printf("%d\n", sizeof(s1));//12
	printf("%d\n", sizeof(s2));//8
	printf("%d\n", sizeof(s3));//16
	return 0;
 }




 */







/*
//结构体的变量以及初始化
struct T
{
	double weight;
	short age;
};


struct S
{
	char c;
	struct T st;
	int  a;
	double d;
	char arr[20];
};

int main()
{
	struct S s = { 'c', {55.6,30}, 100, 3014, "would" };//结构体变量的初始化
	printf("%c,%d,%lf,%s\n", s.c, s.a, s.d, s.arr);
	printf("%lf\n", s.st.weight);
	return 0;
}

*/



/*
typedef struct     //匿名结构体类型
{
	int data;
	 Node* next;//下面才重新定义了名字，这个位置不能提前用

}Node;//这个Node是重新定义的 类型名
int main()
{
	struct Node n1;
	Node n2;
	return 0;
}




typedef struct Node
{
	int data;
	struct Node* next;

}Node;//这个Node是重新定义的 类型名
int main()
{
	struct Node n1;
	Node n2;
	return 0;
}

*/








/*
结构体的自引用
//错误示范
struct Node
{
	int data;//数据    4个字节
	struct Node n;//错误的写法：不能存放放下一个结点
//n的字节大小无法计算，n中有data 与n 无法计算大小

};



//正确示范
struct Node
{
	int data;//数据域    4个字节
	struct Node* next ;//指针域   4/8个字节     应该存放下一个结点的指针，不断找下一个

};

int main()
{
	sizeof(struct Node);
	return 0;
}

*/




/*

//匿名结构体类型   
struct        //没有名字
{
	int a;
	char b;
	float c;
}x;   //因为匿名结构体类型没有名字   只能在这个位置根据变量列表创建变量   否则创建不出来的

struct      
{
	int a;
	char b;
	float c;
}* px;  //px变为匿名结构体指针类型

int main()
{
	px = &x;//这个属于两种不同的类型，不能像 int a = 10；   int*p  = &a   这样进行地址
	return 0;
}









//struct  tab//struct  结构体关键字    tab  结构体标签
//{
	    //成员列表
//} ;     //变量列表
	

//声明一个结构体类型，
//声明一个学生类型，是想创建学生变量（对象）
//描述学生：属性——名字  电话    性别  年龄
struct  stu
{
	char name[20];//名字
	char tele[12];//电话
	char  sex[10];//性别
	int age;//年龄
}S4,S5,S6;//S4,S5,S6为全局变量

struct  stu S3;//全局变量
	int main()
{
		//创建的结构体变量（局部变量）
		struct  stu S1;
		struct  stu S2;
	return 0;
}

*/
