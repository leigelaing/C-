#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
void test(int n)
{
	if (n < 10000)
	{
		test(n+1);
	}
}
int main()
{
	test(1);
	return 0;
}

*/








/*
void  Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
		printf("num = %d\n", num);
		Add(&num);
		printf("num = %d\n", num);
		Add(&num);
		printf("num = %d\n", num);
	return 0;
}

*/




//���n�� 쳲��������У������������
//1 1 2 3 5 8 13 21 34 55   
//ǰ��������֮�͵��ڵ�������

/* 
ѭ����ʽ
int   fac(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
*/
/*
�ݹ鷽��
int fac(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return (fac(n - 1) + fac(n - 2));
	}
}
//TDD����������������



int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", n);
	ret = fac(n);
	printf("%d\n", ret);
	return 0;
}
*/









/*
//��n�Ľ׳�
/*�ݹ鷽ʽ�ĺ�����������⣺��n<=1 ʱ �׳�Ϊ1   ��n > 1ʱn*facl(n-1)

int  facl(int n)
{
	if (n > 0 && n <= 1)
	{
		return 1;
	}
	else if (n > 1)
	{
		int ret = n * facl(n - 1);
		return ret;
	}
	else
	{
		return 0;
	}
}

*/



/*   ������ʽ
int facl(int n)
{
	int i = 1;
	int sum = 1;
	for (i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	return sum;
}
*/

/*
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = facl(n);
	printf("%d\n", ret);
	return 0;
}
*/

