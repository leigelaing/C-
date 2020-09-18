#include  <stdio.h>
int  main()
{
char ch = 'W';
char* pc = &ch;//指针是pc
*pc = 'a';
printf("%c\n",ch);
printf("%d\n",sizeof(pc));
return 0;
}







/*int  main()
{
int  a = 10;//4个字节
int* p = &a;//取地址
printf("%p\n",&a);
*p = 20;//*——解引用操作符
return 0;
}
//有一种变量是用来存放地址的这种变量——指针变量

*/




/*#define MAX(X,Y) (X>Y?X:Y)         //可以定义宏——带参数
int  main()
{
int a = 10;
int b = 20;
int max = 0;
//宏的方式求两个数中的较大值
max = MAX(a,b);
printf("max = %d\n",max);
return 0;
}
*/







/*#define MAX 100  //定义了一个标识符常量MAX，它的值为100
int  main()
{
int  a = MAX;
printf("a = %d\n",a);
return 0;
}*/





/*extern  int Add(int,int);  //声明外部函数   
//extern —声明外部符号的

int main()
{
 int a = 10;
 int b = 20;
 int sum = Add(a,b);
 printf("sum = %d\n",sum);
return 0;
}
*/






/*void test()
{
 static  int a = 1;//a是一个静态局部变量//第二个程序不销毁
	// int a = 1; //a为局部变量
  a++;
  printf("a = %d\n",a);//每次a执行完毕，销毁
}
int main()
{
 int i = 0;
 while (i < 5)
 {
  test();
  i++;
 }
 return 0;
}*/







/*{
    register  int = a;  //建议a放进寄存器变量中；
	  auto int a = 10; //局部变量也叫自动变量  局部变量前面都应该有auto（自动），仅仅只是省略；
    int a = 10;
	a = -2;
	//int 定义的变量是有符号的
    //signed  int      signed被省略
	//unsigned  int   num = 10    unsigned   无符号数
	//struct—结构体关键字
	//union—共用体（联合体）
	//变量名不能与关键字相同
	//typedef —类型定义—类型重定义
	typedef unsigned int u-int; //把unsigned int重新定义为 u-int作用、效果一致
	unsigned  int  num = 20;
    u-int   num2 = 20; 
	return 0;
}*/





/*int Add( int x,int y)
{
   int z = 0;
    z = x + y;
	return z;

}
int  main()
{
	//int arr[10] = {0};
//	arr[4];——下标引用操作符
	int  a = 10;
    int  b = 20;
    int sum =0;
	sum = Add(a,b);    //圆括号  叫函数调用操作符
    printf("sum = %d\n",sum);
	return 0;
}*/










/*{
  int a = 10;
  int b = 20;
  int max = 0;
  
  //max(a > b?   a : b);  //a大于b吗   如果不等式正确输出a的值，如果不正确输出b的值
  
  if(a > b)
   max = a;
  else
   max = b;
  printf("max = %d\n",max);
	return 0;

}*/









/*{
    int a = 0;
	int b = 0;
	int c = a||b;          //a、b都为假的时候才为假    真假判断方式与逻辑与一致；
	printf("c = %d\n",c);
	return 0;
}
//代码结果为 0 （假）      逻辑或注意同假才假
*/




/*{
    int a = 0;
	int b = 5;
	int c = a||b;          //a、b都为假的时候才为假    真假判断方式与逻辑与一致；
	printf("c = %d\n",c);
	return 0;
}

//代码结果为 1  （真）      逻辑或注意同假才假
*/




/*{
	int a = 0;
    int b = 5;
    int c = a && b;  //a为真并且b为真
    printf("c = %d\n",c); 
	return 0;
}
//代码结果为 0（假）
*/




/*{
 int a = 3;
 int b = 5;
 int c = a && b;  //a为真并且b为真
 printf("c = %d\n",c);   //0表示假  非0为真（真用1表示）   就是那个数字不为零就算真
  return 0;
}
//代码结果为 1 （真）

*/





/*{

   int a = (int) 3.14;   //强制类型转换
  
   return 0;
}
*/





/*{
int a = 10;
int b = a++;    //后置++  b先使用再给a加加
int b1 = ++a;  //前置++  先给a加加再给b1使用
int c = a--;    //后置--  c先使用再给a加加
int c1 = --a;  //前置--  先给a加加再给c1使用
printf("a = %d\n b = %d\n ",a,b);
 return 0;
}*/







/*{
   int a = 0;//整型占用四个字节，32bit位
   int b = ~a;//b是有符号的整型   最高位为符号位  1表示负   0表示正
    //“~”按位取反，（按二进制）“0”变“1” “1”变“0” 
   //00000000000000000000000000000000
   //11111111111111111111111111111111
  printf("%d\n",b);//  使用的，打印的是这个数的原码
    return 0;
}
//以上代码是结果为  -1  为什么？
//原码、 反码、 补码、
//负数在内存中存储的时候，存储的是二进制的补码；
//11111111111111111111111111111111   ——补码
//11111111111111111111111111111110  —减1— 反码
//10000000000000000000000000000001  —取反（符号位不变）— 原码    结果为-1

*/





/*int Max(int x,int y)
{
if(x > y)
   return x;
else
   return y;

}

int  main()
{
  int num1 = 10;
  int num2 = 20;
  int max  = 0;
  max = Max(num1,num2);
  printf("max = %d\n",max);

	return 0;
}*/





/*int  main()
{
  int num1 = 10;
  int num2 = 20;
  int max  = 0;
  if(num1>num2)
  printf("max = %d\n",num1);
  else
  printf("max = %d\n",num2);
  return 0;
}
*/











/*int Max(int x,int y)
{
if(x > y)
   return x;
else
   return y;

}

int  mian()
{
  int num1 = 10;
  int num2 = 20;
  int max  = 0;
  max = Max(num1,num2);
  printf("max = %d\n",max);

	return 0;
}*/