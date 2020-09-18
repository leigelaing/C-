#include<stdio.h>
#include<string.h>
 int my_strlen(int str)
 {
  if(*str != '\0')
  
  return 1 + my_strlen(str+1)
  else
  return 0;
 }


int main()
{
 char arr[] = "bit";
 int len = my_strlen(arr);
 return 0; 
}
//用递归的方法求字符串长度




/*int my_strlen(char* str)  //str 存入的是第一个元素的地址，
{
  int count = 0;    //*str存入的是b
  while(*str != '\0')
  {
     count++;
	  str++;
  }
   return count;
}
int main()
{
 char arr[] = "bit";
 int len = my_strlen(arr);//arr数组，数组传参，传过去的不是整个数组而是第一个元素的地址
 printf("%d\n",len);
 return 0;
}
 //以上程序自行编写了一个strlen函数(打印字符串长度)
*/







 //int len = strlen(arr);//求字符串长度
 //printf("%d\n",lem);
 //return 0;
//}






/*
void print(int n)
{
if(n > 9)
{
  print(n/10);
}
}

int main()
{
  unsigned int num = 0;
  scanf("%d",$num);
  print(num);
  return 0;
}
*/






/*{
   printf("hehe\n");
   main();  //main 函数自己调用自己
  
  return 0;   //递归常见错误“stack overflow”栈溢出
}
*/