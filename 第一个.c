#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//дһ��������ÿ����һ������������ͻὫnum��1


int main()
{
	return 0;
}











/*
#include<string.h>
/*
   ���ֲ��ң�
   ��һ�����������в��Ҿ����ĳ����
   ����ҵ������±꣬���û���ҵ�����-1

int binary_search(int arr[],int k,int sz)//������arr��һ��ָ��
{
	int left = 0;
	int right = sz - 1;
	while (left<= right) //���ʱ�������һ��Ԫ����Ҫ�Ƚ�
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	         return -1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr)/sizeof(arr[0]);//����Ԫ�ظ���
	int ret = binary_search(arr,k,sz);//arr���ݹ�ȥ����arr������Ԫ�صĵ�ַ��
	if (ret == -1)
	{
		printf("�Ҳ�����\n");
	}
	else
	{
		printf("�±�Ϊ��%d\n", ret);
	}
	return 0;
}
*/







/*
int is_leap_year(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (1 == is_leap_year(year))
			printf("%d  ", year);
	}
	return 0;
}

*/






/*
//����ʵ���ж�����
int is_prime(int n)
{
	int a = 0;
	for (a = 2; a < n; a++)//	for (a = 2; a <= sqrt(n); a++)
	{
		if (n % a == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200;i++)
	{
		if (is_prime(i) == 1)
			printf("%d\n", i);
	}
	return 0;
}


*/







/*
int  get_max(int x, int y)//�βγ��˺����ͻ��Զ�����
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	int c = get_max(a, b);
	int d = get_max(a, get_max(a, b));//�������ú���
	int e = get_max(100, 300 + 1);
	printf("%d\n", c);

	return 0;
}

*/






/*
//�޷�ʵ���������ֵĸ���
��ʵ�δ����βε�ʱ���β�ʵ����Ϊʵ�ε�һ����ʱ����
���βε��޸Ĳ���ʵ�ε�ֵ
void Swap(int x, int y)
{
	int tem = 0;
	tem = x;
	x = y;
	y = tem;
}
int  main()
{
	int a = 10;
	int b = 20;
	Swap(a, b);
	printf("a = %d  b = %d\n", a, b);
	return 0;
}
*/





/*
//����ʵ���������ֵĸ���
void Swap(int* x, int* y)
{
	int tem = 0;
	tem = *x;
	*x = *y;
	*y = tem;
}
int  main()
{
	int a = 10;
	int b = 20;
	Swap(&a,&b);
	printf("a = %d  b = %d\n", a, b);
	return 0;
}
*/




/*
int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);//��arr������ǰ5������Ϊ  *  
	printf("%s\n", arr);
	return 0;
}
//memset
//memory�����ڴ�   set��������
*/