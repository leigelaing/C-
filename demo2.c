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
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;
//给struct Stu  重新命名为   Stu






//struct 结构体关键字   Stu  ——结构体标签   struct Stu——结构体类型
struct Stu
{
   //成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1,s2,s3;// s1,s2,s3全部为全局变量
//创建类型不占用空间

int main()
{
	struct Stu s;//创建变量才开辟空间    s为局部变量
	struct Stu s1 = {"张三",20,"15814613413","男"};//结构体变量的初始化
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
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
void print(int n)
{
	int i = 0;
	printf("奇数位\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	printf("偶数位\n");
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
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个二进制位不同

int get_diff_bit(int m, int n)
{
	int tmp = m^n;//异或相同为0 不同为1
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
	//1101——13
	//1100——12
	//n = n & (n-1)
	//1100  n = 12
	//1011——11
	//n = n & (n-1)
	//1000—— 
	//依次按位与
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}





//统计二进制中1 的个数
//写一个函数求a的二进制（补码）表示有几个1
int count_bit2(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if ((n >> i) & 1 == 1)//n的二进制位每一位与1进行按位与  结果等于1 确认n的二进制为1
		{
			count++;
		}
	}
	return count;
}




int count_bit1(unsigned int n)//-1无法通过  所以改为unsigned int
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
	//system("pause");//system库函数   执行系统命令  pause（暂停）
}
*/