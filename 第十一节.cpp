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
	if(n == 3)  //���Ե�����쳲����������ظ�����Ĵ���
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
  scanf("%d",&n);   //ADD����������������
  ret = fib(n);
  printf("%d\n",ret);
  return 0;

  return 0;
}
*/
//쳲���������ֵ




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
  return n*Fac2(n-1);//��������ã�������ʹ���˵ݹ�
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
//��n�Ľ׳�  ʹ����һ�㷽����ݹ鷽��
*/