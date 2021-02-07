#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
enum  weekday
{
	monday, tuseday, wednesday, tuesday, friday, saturday, sunday
};
int main(void)
{
	enum weekday day = sunday;
	printf("%d\n",day);
	return 0;
}





/*
struct student
{
	int  age;
	float score;
	char sex;
};
int  main(void)
{
	struct student st = {80,66.6,'F'};
	struct student *pst = &st; //&st不能做成st
	pst->age = 88;//第二种方式 //pst->age会转化为（*pst）.age   
	//pst -> age 等价于（*pst）.age 等价于 pst.age   
	st.age = 10;  //第一种方式
	return 0;
}

*/



/*
//赋值和初始化：定义的同时可以整体赋初值
//如果定义完之后，则只能单个的赋初值
struct student
{
	int age;
	float score;
	char sex;
};
int  main(viod)
{
	struct student st1 = {80,66.6,'F'};//初始化定义的同时赋初值
	struct student st2;
	st2.age = 10;
	st2.score = 88;
	st2.sex = 'F';
	printf("%d %f %c\n", st1.age, st1.score, st1.sex);
	printf("%d %f %c\n", st2.age, st2.score, st2.sex);
	return 0;
}

*/





/*
//定义结构体方法三
struct 
{
	int age;
	float score;
	char sex;
}st3;
int main()
{
	return 0;
}

*/




/*
//定义结构体方法二
struct student
{
	int age;
	float score;
	char sex;
}st2;   
int main()
{

	return 0;
}
*/




/*
//如何定义结构体
//方法一：先定义一个新的结构体，并没有定义变量
struct student
{
	int age;
	float score;
	char sex;
};
int  main()
{
	struct student  st = {80,66.6,'F'};
	return 0;
}

*/





/*
#include<malloc.h>
//动态内存分配可以跨函数使用
void f(int **q)
{
	*q = (int*)malloc(sizeof(int));
}
int main(void)
{
	int* p;
	f(&p);
	return 0;
}
*/



/*
int main(void)
{
	int i = 10;
	int *p = &i;
	int **q = &p;
	int ***r = &q;
	r = &p;
	//因为r是int***类型，r只能存放int**类型的地址，
	//明确一下：int*算一种类型，int** 算另一种类型依次类推
	return 0;
}
*/






/*
//malloc只能返回第一个字节的地址，不能确定变量要使用几个字节，因此需要（int*）强制类型转换为整型地址，
//整型地址为4个字节

int main()
{
	int i = 5;//分配4个字节，静态分配
	int *p = (int *)malloc(5);//12行分配8个字节的地址，p变量占了4个字节，p所指向的内存也占了4个字节的地址
	//Ｐ本身所占的内存是静态分配，p所指向的内存空间是动态分配的
	return 0;
}
*/