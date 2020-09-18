#include<stdio.h>
#include<string.h>
int main()
{ 
  int arr[] = {1,2,3,4,5,6,7,8,9,10}; 
  int sz = sizeof(arr)/sizeof(arr[0]);
  int i = 0;
  for(i=0;i<sz;i++)
  {
   printf("&arr[%d] = %p\n",i,&arr[i]);

  }
  return 0;
}








/*int main()
/*{
  int i = 0;
  char arr[] = "abcdef" ; //[a][b][c][d][e][f]
  printf("%c\n",arr[3]);
  for(i=0;i<6;i++)  //for(i=0;i<(int)strlen(arr);i++)//注意强制类型转换 
{
  printf("%c\n",arr[i]);
}
{  int arr[] = {1,2,3,4,5,6,7,8,9,0}; 
  int sz = sizeof(arr)/sizeof(arr[0]);
  int i = 0;
  for(i=0;i<sz;i++)
  {
   printf("%d \n",arr[i]);
  }
  return 0;
}
*/




/*{
	char arr1[] = "abc";            //arr1 =(a b c \0)
	char arr2[] = {'a','b','c'}; //arr2 =(a b c )
	printf("%d\n",sizeof(arr1)); //结果4
	printf("%d\n",sizeof(arr2)); //结果3
	printf("%d\n",strlen(arr1)); //解果3
	printf("%d\n",strlen(arr2)); //没有\0无法确认停止，所以结果为随机值
  return 0;
}
*/









/*int main()
{
 /* int arr1[10];             //创建一个数组—存放整型—10个
  int arr2[10] = {1,2,3};   //不完全初始化，剩下的元素为零
  char arr3[5] = {'a','b'};
  char arr3[5] = {'a',98}; //这种也可以，将98解析成b 98是ASCII值
  char arr4[5] = "ab";     //这种初始化也是OK的，最后面多了一个隐藏的\0(结束字符标识)
  char arr5[] = "abcdes";  //没有给定元素个数时，系统根据初始化字符个数自行确定元素个数，注意\0也算在个数内
  int n = 5;
  
  char arr45[] = "abcdes";
printf("%d\n",sizeof(arr45));  //sizeof函数计算arr45所占空间的大小——7元素—每个元素是2个字节所以结果输出7
printf("%d\n",strlen(arr45));  //strlen函数求字符串长度，求的是\0以前的字符一共有几个，\0不算；所以输出6

//  char ch[n];  //error 不能是变量  
  return 0;
}
//
*/