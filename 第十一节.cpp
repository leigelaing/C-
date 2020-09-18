#include<stdio.h>
void test(int n)
{
    if(n<10000)
	{
     test(n+1);
	}
}
int main()
{
  test(1);
  return 0;
}




/*int fib(int n)
{
  int a = 1;
  int b = 1;
  int c = 0;
 while(n>2)
 {
  c = a + b;
  a = b;
  b = c;
  n--;
 }
 return c;
}


/*int count = 0; 
int fib(int n)
{
	if(n == 3)  //测试第三个斐波那契数被重复计算的次数
	{
		count++;
	}
  if(n<=2)
	  return 1;
  else
	  return fib(n-1)+fib(n-2);
}
int main()
{
 int  n = 0;
  int ret = 0;
  scanf("%d",&n);   //ADD——测试驱动开发
  ret = fib(n);
  printf("%d\n",ret);
  return 0;

  return 0;
}
*/
//斐波那契数求值




/*int Fac1(int n)
{
    int i = 0;
	int ret = 1;
	for(i=1;i<=n;i++)
	{
	ret = ret * i;   //ret *= i; 
	}
	return ret;
}
int Fac2(int n)
{
  if(n<=1)
  return 1;
  else
  return n*Fac2(n-1);//这个方法好，厉害，使用了递归
}
int main()
{
  int  n = 0;
  int ret = 0;
  scanf("%d",&n);
  ret = Fac2(n);
  printf("%d\n",ret);
  return 0;
}
//求n的阶乘  使用了一般方法与递归方法
*/