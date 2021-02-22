#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
int main()
{
	int i = 1;
	int a = (++i) + (++i) + (++i);
	printf("%d\n", a);
	return 0;
}

*/






/*
int fun()
{
	static int count = 1; 
	return ++count;
} 
int main() 
{
	int answer; 
	answer = fun() - fun() * fun(); 
	printf("%d\n", answer);//输出多少？     
	return 0;
}
*/





/*
int main()
{
	int a = 10;
	int b = 20;
	int c = a + b * 3;//先算*法
	printf("%d\n", c);
	return 0;
}
*/







/*
int main() 
{ 
	char c = 1;
	printf("%u\n", sizeof(c));//1  
	printf("%u\n", sizeof(+c));//4
	printf("%u\n", sizeof(!c));//1
	return 0; 
}


*/





/*
int  main()
{
	    char a = 0xb6; 
		short b = 0xb600;
		int c = 0xb6000000; 
		if (a == 0xb6)
			printf("a");
		if (b == 0xb600)
			printf("b");
		if (c == 0xb6000000)  
			printf("c");
	return 0;
	//结果C打印  a b 不打印 原因是a b都发生了整型提升
}

*/





/*
int main()
{
	char a = 3;
	char b = 127;
	char c = a + b;
	printf("%d\n", c);
	return 0;
}
*/







/*
//学生
//struct stu  等价于 int   float 是一种类型，为了创建变量
//创建一个结构体类型——struct stu
struct stu
{
	//成员变量
	char  name[20];
	int age;
	char id[20];
};
int  main()
{
	//使用struct stu 这个类型创建了一个学生对象叫s1并初始化
	struct stu s1 = {"张三",20,20190305019};
	int a = 10;

	//访问成员变量方法一
	struct stu* ps = &s1;
	//结构体指针->成员名
	printf("%s\n", ps -> name);
	printf("%s\n", ps -> age);
	printf("%s\n", ps -> id);

	//访问成员变量方法二
	printf("%s\n", (*ps).name);
	printf("%s\n", (*ps).age );
	printf("%s\n", (*ps).id );

	//访问成员变量方法三
	printf("%s\n",s1.name);
	printf("%d\n", s1.age);
	pritnf("%d\n", s1.id);
	return 0;
}

*/



/*
int get_max(int x, int y)//()是语法规则，不是函数调用操作符
{
	return (x > y ? x : y);
}
int main()
{
	int a = 10;
	int b = 20;
	//调用函数的时候的（）就是函数调用操作符
	int max = get_max(a, b);
	printf("max = %d\n", max);
	return 0;
}
*/


/*
int main()
{
	int a[10] = { 0 };
	 a[4] = 10;
	return 0;
}
*/