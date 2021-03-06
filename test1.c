#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>










/*
struct stu
{
	int num;
	char name[10];
	int age;
};
void fun(struct stu* p)
{
	printf("%s\n", (*p).name);//%s  字符串  类型打印
	return;
}
int main()
{
	struct stu students[3] = { {9801,"zhang",20}, {9802,"wang",19}, {9803,"zhao",18} };
	fun(students + 1);//students + 1意思是首元素地址加1 指向第二个元素  
	//然后调用函数打印出第二个元素的值 wang
	
	return 0;
}

*/






/*
struct S
{
	int a;
	int b;
};
int   main()
{
	struct S a, *p = &a;
	//可以改写为  
	//struct S  a   ；声明了一个结构体变量   
	//struct S *p = &a；声明了一个结构体指针
	a.a = 99;
	//a.a   使用变量调用了结构体的成员变量
	printf("%d\n", *p.a);
	//pritnf   后面应该填什么能输出a的值      a.a     *p.a      p->a      (*p).a
    //a.a  OK  
	//  *  p.a    注意运算符的结合性    先点结合  再* 结合

	return 0;
}

*/





/*
int main()
{
	unsigned long  pulArray[] = { 6, 7, 8, 9, 10 };
	unsigned long *pulPtr;
	pulPtr = pulArray;//给了首元素地址
	*(pulPtr + 3) += 3;//  *(pulPtr + 3)= *(pulPtr + 3) +  3
	//pulPtr + 3  正好指向元素9的地址，然后解引用操作拿到元素9   再给元素9 加 3   变为  12
	printf("%d %d", *pulPtr, *(pulPtr + 3));
	//*pulPtr解引用操作后指向的是元素 6      
	return 0;
}
*/