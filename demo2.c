#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
/*
typedef struct Stu
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
//��struct Stu  ��������Ϊ   Stu






//struct �ṹ��ؼ���   Stu  �����ṹ���ǩ   struct Stu�����ṹ������
struct Stu
{
   //��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1,s2,s3;// s1,s2,s3ȫ��Ϊȫ�ֱ���
//�������Ͳ�ռ�ÿռ�

int main()
{
	struct Stu s;//���������ſ��ٿռ�    sΪ�ֲ�����
	struct Stu s1 = {"����",20,"15814613413","��"};//�ṹ������ĳ�ʼ��
	return 0;
}

*/






/*
void print(int* p,int  sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", *(p + i));
	}

}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
  	print(arr, sz);
	return 0;
}


*/


/*
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
void print(int n)
{
	int i = 0;
	printf("����λ\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	printf("ż��λ\n");
	for (i = 31; i >= 1; i-=2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
}

int main()
{
	int m = 0;
	scanf("%d", &m);
	print(m);
	return 0;
}

*/





/*
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�������λ��ͬ

int get_diff_bit(int m, int n)
{
	int tmp = m^n;//�����ͬΪ0 ��ͬΪ1
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int count = get_diff_bit(m, n);
	printf("%d\n", count);
	return 0;
}

*/





/*
int count_bit3(unsigned int n)
{
	//n = 13
	//1101����13
	//1100����12
	//n = n & (n-1)
	//1100  n = 12
	//1011����11
	//n = n & (n-1)
	//1000���� 
	//���ΰ�λ��
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}





//ͳ�ƶ�������1 �ĸ���
//дһ��������a�Ķ����ƣ����룩��ʾ�м���1
int count_bit2(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if ((n >> i) & 1 == 1)//n�Ķ�����λÿһλ��1���а�λ��  �������1 ȷ��n�Ķ�����Ϊ1
		{
			count++;
		}
	}
	return count;
}




int count_bit1(unsigned int n)//-1�޷�ͨ��  ���Ը�Ϊunsigned int
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}

int main()
{
	int a = 0;
	scanf("%d",&a);
	int count1 = count_bit1(a);
	int count2 = count_bit2(a);
	int count3 = count_bit3(a);
	printf("count1 = %d\n", count1);
	printf("count2 = %d\n", count2);
	printf("count3 = %d\n", count3);
	return 0;
	//system("pause");//system�⺯��   ִ��ϵͳ����  pause����ͣ��
}
*/