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
		printf("��ѡ��:>");
		scanf("%d",&input);
		if(input >= 1 && input <= 4)
		{
	  	  printf("����������������:>");
		  scanf("%d%d",&x,&y);
		  int ret = pfarr[input](x,y);
		  printf("%d\n",ret);
		}
		else if(input == 0)
		{
		  printf("�˳�\n");
		}
		else
		{
		  printf("ѡ�����\n");
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
		printf("��ѡ��:>");
		scanf("%d",&input);
		printf("����������������:>");
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
		  printf("�˳�\n");
		  break;
		default:
		  printf("ѡ�����\n");  
          break;
		}
	}while (input);
	return 0;
}
*/






/*
char* my_strcpy(char* dest,const char* str)
//1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//2.дһ������ָ������pfarr���ܹ����4��my_strcpy�����ĵ�ַ
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
   int* arr[5];//ָ������
   //��Ҫһ�����飬���������Դ��4�������ĵ�ַ��������ָ������顪����ź����ĵ�ַ
   int(*pa)(int ,int) = Add;
   int(*parr[4])(int ,int) = {Add,Sub,Mul,Div};//����ָ������飻
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
   printf("%d\n",(*pa)(2,3));//*û��̫��ļ�ֵ�����Բ���д�����ǲ������ű��У����ȼ�������
   printf("%d\n",(**pa)(2,3));
   printf("%d\n",(***pa)(2,3));
   return 0;
}
*/





/*
{
   //signal��һ����������
  //signal�����Ĳ�����2������һ����int �ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������Viod
	//signa1 �����ķ�������Ҳ�Ǻ���ָ�룬�ú���ָ��ָ�����Ĳ�����int����������Ϊvoid
   void (*signal(int , void(*)(int)))(int);
	return 0;
}
*/