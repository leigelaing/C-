#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//����һ������ÿλ֮�ͣ����ݹ�ʵ��
//дһ������ DigitSum��n��������һ���Ǹ��������������������֮��
int main()
{

	return 0;
}





/*
//�ַ������򣨵ݹ�ʵ�֣�
// ��д������reverse_string(char* string)(�ݹ�ʵ��)
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

/*
����һ
void reverse_string(char arr[])
{
	int left = 0;
	int right = my_strlen(arr) - 1;//�ҵ����һ��Ԫ��
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}


//���������ݹ鷽��
//�������û����
void reverse_string(char arr[])
{
	char tmp = arr[0];//��arr[0]����tmp
	int len = my_strlen(arr);//����arr����Ԫ�ظ���������len
	arr[0] = arr[len - 1];//��һ��Ԫ�������һ��Ԫ�ؽ���
		arr[len - 1] = '\0';//�����һ��Ԫ�ط��� \0
		if (my_strlen(arr + 1) >= 2)//
			reverse_string(arr + 1);
		arr[len - 1] = tmp;
}

int main()
{
	char arr[] = "abcdef";//fedcba
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}
*/








/*
//�˷����ӡ
void print_table(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		//һ��
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d * %d = %-3d", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print_table(n);
	return 0;
}

*/


/*
int main()
{
	double sun = 0;
	int i = 0;
	int flag = 1;
	   for (i = 1; i <= 100; i++)
	   {
		   sun += flag*1.0 / i;
		   flag = -flag;
	   }
	   printf("%lf\n", sun);
	return 0;
}

*/



/*
//��дһ�δ���˵��1-1000֮��һ�����ֶ��ٸ���
int main()
{
	int i = 0;
	int count = 0;
	for (i = 0; i <= 1000; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)
		{
			count++;
		}
		if (i / 100 == 9)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}

*/


/*
//�ж�һ�����Ƿ�Ϊ����  ���������2����i-1֮������������
//������ ��i= a * b   a����b��������һ������ <= ��ƽ��i
int main()
{
	//aqrt ������ƽ���⺯��
	//
	return 0;
}

*/

/*
//�������������Լ��
//շת�����

int main()
{
	int a = 24;
	int b = 18;
	int r = 0;
	scanf("%d %d", &a, &b);
	while (a > b)
	{
		 r = a % b;
		if (r == 0)
		{
			printf("%d\n", b);
			break;
		}
		a = b;
		b = r;
	}
	while (b > a)
	{
		 r = b % a;
		if (r == 0)
		{
			printf("%d\n", a);
			break;
		}
		b = a;
		a = r;
	}
	
	return 0;
}
*/





/*
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("��������������\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		int tmp = 0;
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = 0;
		tmp = a;
		a = c;
		c = tmp;
	}
		
	if (b < c)
	{
		int tmp = 0;
		tmp = b;
		b = c;
		c = tmp;
	}
		
	printf("%d %d %d", a, b, c);
	return 0;
}
*/






/*
int sum(int a)
{
	int c = 0;
	static int b = 3;//bΪ��̬�ľֲ�����
	c += 1;
	b += 2;
	return(a + b + c);
}
int main()
{
	int i = 0;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", sum(a));
	}
	return 0;
}

*/





/*
//�������У���ĵ�����һ���Ӻ�ػ���������� ����������ɵ�ƣ��Ͳ��� ������
int main()
{
	char  input[20] = { 0 };//�洢����
	//�ػ�
	//��dos  ��������  shutdown -s -t 300
	//��dos  ��������  shutdown -a    ����ȡ���ػ�
	//system()�⺯��  ����ר������ִ��ϵͳ�����
	system("shutdown -s -t 300");//�ػ�
again:
	printf("��ĵ�����һ���Ӻ�ػ���������� ����������ɵ�ƣ��Ͳ��� ������\n");
	scanf("%s", input);//%s�����ַ���
	if (strcmp(input, "��������ɵ��") == 0)//�ж�input�зŵ��ǲ���  "��������ɵ��"  _strcmp_string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
		return 0;
}

*/




/*
//����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬����Ԫ��ÿ��Ԫ�ؾ��������Σ��ҳ��Ǹ�ֻ����һ�ε�Ԫ��
int  main()
{
	//3^3  ���Ϊ  0   �Լ�ȥ��  a^a = 0
	//3^3^5 == 5
	//3^5^3 == 5   ������㽻����
	//1^1^2^2^3^3^4^4^5 == 5
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
	//�ҳ�����
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		ret = ret^arr[i];//������Ԫ��ȫ����򣬽������ ��
	}

	return 0;
}
*/





/*
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
	//�ҳ�����
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		//ͳ��arr[i]��arr�����г��ֹ�����
		int count = 0;//ע��count��λ��
		int j = 0;
		for (j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("  %d\n", arr[i]);
			break;
		}
	}
	return 0;
}

*/



/*
int main()
{
	INT_MAX;
	//�������
	int a = 10;
	int b = 20;
	a = (a + b);
	b = a - b;
	a = a - b;

	a = a^b; //��λ��2����λ�����  ��ͬΪ0  ����Ϊ1
	b = a^b;
	a = a^b;

	return 0;
}

*/




/*


//��������seconds��0<seconds<1000000000������ת��ΪСʱ������

int main()
{
	int seconds = 0;
	scanf("%d", &seconds);
	int h = seconds / 60 / 60;//ʱ
	int m = seconds / 60 % 60;//��
	int s = seconds % 60;//��
	printf("%d %d %d\n", h, m, s);
	return 0;
}
*/