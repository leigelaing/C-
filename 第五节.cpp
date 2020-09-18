#include <stdio.h>
#include <string.h>

//“.”操作符       应用到结构体变量，使用可找到成员
//“->”箭头操作符  结构体指针指向成员




  //结构体：
  //char、int、double
  //例如：数这种复杂类型如何表达，（书名、作者、出版社、定价、书号）
  //再例如：人这种复杂类型的定义，（名字、身高、年龄、身份证号码等
  //复杂对象创建——结构体——我们程序员自己创造出来的一种类型
  //创建一个结构体类型
 struct Book
 {
	 char name[20]; //C语言程序设计
	 short price;   //书的定价55元
 };         //注意结构体下方的分号
 int main()
 {
	 //利用结构体类型——创建一个该类型的结构体变量
	 struct  Book b1 = {"c语言程序设计",55}; 
	 //更改书名与价格价格可以直接更改，书名不能因为书名定义为数组名而价格是变量
	 strcpy (b1.name,"C++");    //变更名字为“C++”
 //strcpy函数—string copy（字符串拷贝）为库函数头文件注意使用<string.h>


	 struct Book*pb = &b1;  //定义结构体指针
	 //能否利用pb打印出来书名与价格
     printf("书名：%s\n",(*pb).name);    //利用指针打印价格与书名
	 printf("价格：%d\n",(*pb).price);  //利用指针打印价格与书名
     //使用指针简化方法打印书名与价格
     printf("书名：%s\n",pb->name);    
	 printf("价格：%d\n",pb->price); 
     //使用结构体变量打印书名与价格
	 printf("书名：%s\n",b1.name);
	 printf("价格：%d\n",b1.price);
	 b1.price = 15;
	 printf("修改后的价格：%d\n",b1.price);
     return 0;
 }








/*{
double  d = 3.14;
double* pd = &d;     //  32位——4个字节  64位——8个字节
       *pd = 5.5;
printf("pd = %lf\n",*pd);
printf("%d\n",sizeof(char*));  //指针变量的大小为4个字节，任何类型、任何时候都为4个字节
printf("%d\n",sizeof(short*));
printf("%d\n",sizeof(int*));
printf("%d\n",sizeof(double*));
	return 0;

}*/








/*{
int a = 10;
int* p = &a;   //  p的类型为int*   “*”告诉我们p为指针变量；
    *p = 20;
	printf("a = %d\n",a);
  return 0;
}*/