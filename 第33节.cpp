#include<stdio.h>
void menu()
{
  printf( "*************************\n" );
  printf( " 1:add             2:sub \n" );
  printf( " 3:mul             4:div \n" );
  printf( "*****    0.exit    ******\n" );
  printf( "*************************\n" );
}
int Add(int x,int y)
{
 return x + y;
}
int Sub(int x,int y)
{
 return x - y;
}
int Mul(int x,int y)
{
 return x * y;
}
int Div(int x,int y)
{
 return x / y;
}
int main()
{  
    int input = 0;
	int x = 0;
	int y = 0;
    int (*pfarr[5])(int,int) = {0,Add,Sub,Mul,Div};
	do 
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		if(input >= 1 && input <= 4)
		{
	  	  printf("请输入两个操作数:>");
		  scanf("%d%d",&x,&y);
		  int ret = pfarr[input](x,y);
		  printf("%d\n",ret);
		}
		else if(input == 0)
		{
		  printf("退出\n");
		}
		else
		{
		  printf("选择错误\n");
		}
	}while (input);
}












/*
int main()
{  
    int input = 0;
	int x = 0;
	int y = 0;
    do 
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		printf("请输入两个操作数:>");
        scanf("%d %d",&x,&y);
		switch(input)
		{
		case 1:	
		  printf("%d\n",Add(x,y));
	      break;
        case 2:	
		  printf("%d\n",Sub(x,y));
	      break;
		case 3:	
		  printf("%d\n",Mul(x,y));
          break;
		case 4:	
		  printf("%d\n",Sub(x,y));
	      break;
		case 0:
		  printf("退出\n");
		  break;
		default:
		  printf("选择错误\n");  
          break;
		}
	}while (input);
	return 0;
}
*/






/*
char* my_strcpy(char* dest,const char* str)
//1.写一个函数指针pf，能够指向my_strcpy
//2.写一个函数指针数组pfarr，能够存放4个my_strcpy函数的地址
  int(*pf)(char* ,const char* ) = my_strcpy;
  char* (*pfarr[4])(char* ,const char* );

*/





/*
int Add(int x,int y)
{
 return x + y;
}
int Sub(int x,int y)
{
 return x - y;
}
int Mul(int x,int y)
{
 return x * y;
}
int Div(int x,int y)
{
 return x / y;
}
int main()
{
   int* arr[5];//指针数组
   //需要一个数组，这个数组可以存放4个函数的地址——函数指针的数组——存放函数的地址
   int(*pa)(int ,int) = Add;
   int(*parr[4])(int ,int) = {Add,Sub,Mul,Div};//函数指针的数组；
   int i = 0;
   for(i = 0;i < 4;i++)
   {
     printf("%d\n",parr[i](2,3));//5   -1  6   0
   }
	return 0;
}
*/











/*

int Add(int x,int y)
{
  int z = 0;
  z = x + y;
  return z;
}
int main()
{
   int a = 10;
   int b = 20;
   int (*pa)(int,int) = Add;
   printf("%d\n",(pa)(2,3));
   printf("%d\n",(*pa)(2,3));//*没有太大的价值，可以不用写，但是不带括号必行，优先级有问题
   printf("%d\n",(**pa)(2,3));
   printf("%d\n",(***pa)(2,3));
   return 0;
}
*/





/*
{
   //signal是一个函数声明
  //signal函数的参数有2个，第一个是int 第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是Viod
	//signa1 函数的返回类型也是函数指针，该函数指针指向函数的参数是int，返回类型为void
   void (*signal(int , void(*)(int)))(int);
	return 0;
}
*/