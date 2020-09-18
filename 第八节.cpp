#include<stdio.h>
int main()
{


  return 0;
}
//猜数字游戏：1.电脑会生成一个随机数；2.猜数字






/*{
	int i = 0;
  double sum = 0;
    int flag = 1;
  for(i=1;i<=100;i++)
  {
  sum += flag*1.0/i;  
   flag = -flag;
  }
  printf("%lf\n",sum);
  return 0;

}
//计算1/1-1/2+1/3-1/4.............+1/99-1/100的值，打印出结果
*/








/*{
  int i = 0;
  double sum = 0;
  for(i=1;i<=100;i++)
  {
  sum += 1.0/i;  //sum = sum + 1.0/i;
  }
  printf("%lf\n",sum);
  return 0;

}
//计算1/1+1/2+1/3+1/4.............+1/99+1/100的值，打印出结果

  
	*/










/*{
   int i = 0;
   int count = 0;
   for(i=0;i<=100;i++)
   {
   if(i%10 == 9)
       count++;
   if(i/10 == 9)
	   count++;
   }
   printf("count=%d\n",count);
	return 0;
}
//编写程序数一下1到100的所有整数中出现多少个数字9

*/




/*
{ 
int i = 0;
for(i=100;i<=200;i++)
{
 int j = 0;
 for(j=2;j<i;j++)
 {
  if(i%j == 0)
  {
  break;
  }
 }
 if(j == i)
 {
 printf("%d \n" ,i);
 }

}
 return 0;
}
//判断是否为素数的方法：

//1.试除法
//素数求解的n种境界，这个去看看
*/






/*{
  int year = 0;
  for (year=1000;year<=2000;year++)
  {
  if(year%4 == 0 && year%100 != 0)
  {
   printf("%d ",year); 
  }
  else if(year%400 == 0)
  {
    printf("%d ",year);
  }
  }
  return 0;
}
//此代码判断1000到2000之间的闰年
//闰年判断方法：
//1.能被4整除并且不能被100整除的是闰年；
//2.能被400整除是整除；

*/



/*{
  int m = 0;
  int n = 0;
  int r = 0;
  scanf("%d %d",&m,&n);
  while(m%n)
  {
     r = m%n;
	 m = n;
	 n = r;
  
  }
 printf("%d\n",n);

  return 0;
}
//辗转相除法，求两个数的最大公约数


*/








/*{
  int i = 0;
  for(i=0;i<100;i++)//这个地方没有“；”
  {
	  if(i%3 == 0)
	    printf("%d  ",i);//printf不加空格就要加入\n 不然所有数字就挨在一起无法辨认
  }
  return 0; 
}
*/
// 此代码是求出能被3整除的数，全部打印出来







/*{
	int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d",&a,&b,&c);//注意输出结果时每个数字中间必须加上空格，不然电脑无法确认是否数字输入完成
	scanf("%d#%d#%d",&a,&b,&c);//此位置加入任何值，在输入数值是也要同样加上，
	if(a<b)
	{
	int tmp = a;
	      a = b;
	     b = tmp;
	}
    if(a<c)
	{
	int tmp = a;
	      a = c;
	    c = tmp;
	}
	if(b<c)
	{
	int tmp = b;
	      b = c;
	    c = tmp;
	}
    printf("%d %d %d\n",a,b,c);

  return 0;
}*/
//此代码输入三个数，从大到小排列