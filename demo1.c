#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//计算一个数的每位之和（）递归实现
//写一个函数 DigitSum（n）；输入一个非负数，返回组成它的数字之和
int main()
{

	return 0;
}





/*
//字符串逆序（递归实现）
// 编写函数：reverse_string(char* string)(递归实现)
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
方法一
void reverse_string(char arr[])
{
	int left = 0;
	int right = my_strlen(arr) - 1;//找到最后一个元素
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}


//方法二：递归方法
//这个代码没看懂
void reverse_string(char arr[])
{
	char tmp = arr[0];//将arr[0]放入tmp
	int len = my_strlen(arr);//计算arr数组元素个数，放入len
	arr[0] = arr[len - 1];//第一个元素与最后一个元素交换
		arr[len - 1] = '\0';//将最后一个元素放入 \0
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
//乘法表打印
void print_table(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		//一行
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
//编写一段代码说明1-1000之间一共出现多少个九
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
//判断一个数是否为素数  （相除法：2——i-1之间的数字相除）
//方法二 ：i= a * b   a或者b中至少有一个数字 <= 开平方i
int main()
{
	//aqrt ——开平方库函数
	//
	return 0;
}

*/

/*
//给两个数求最大公约数
//辗转相除法

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
	printf("请输入三个数字\n");
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
	static int b = 3;//b为静态的局部变量
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
//程序运行，你的电脑在一分钟后关机，如果输入 ：王李阳是傻逼，就不关 哈哈！
int main()
{
	char  input[20] = { 0 };//存储数据
	//关机
	//在dos  窗口输入  shutdown -s -t 300
	//在dos  窗口输入  shutdown -a    ——取消关机
	//system()库函数  ——专门用来执行系统命令的
	system("shutdown -s -t 300");//关机
again:
	printf("你的电脑在一分钟后关机，如果输入 ：王李阳是傻逼，就不关 哈哈！\n");
	scanf("%s", input);//%s——字符串
	if (strcmp(input, "王李阳是傻逼") == 0)//判断input中放的是不是  "王李阳是傻逼"  _strcmp_string compare
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
//给定一个非空整型数组，除了某个元素只出现一次以外，其余元素每个元素均出现两次，找出那个只出现一次的元素
int  main()
{
	//3^3  结果为  0   自己去算  a^a = 0
	//3^3^5 == 5
	//3^5^3 == 5   异或满足交换律
	//1^1^2^2^3^3^4^4^5 == 5
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
	//找出单身狗
	int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		ret = ret^arr[i];//将所有元素全部异或，结果就是 答案
	}

	return 0;
}
*/





/*
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
	//找出单身狗
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		//统计arr[i]在arr数组中出现过几次
		int count = 0;//注意count的位置
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
	//整型溢出
	int a = 10;
	int b = 20;
	a = (a + b);
	b = a - b;
	a = a - b;

	a = a^b; //按位（2进制位）异或  相同为0  相异为1
	b = a^b;
	a = a^b;

	return 0;
}

*/




/*


//给定秒数seconds（0<seconds<1000000000）把秒转换为小时，分钟

int main()
{
	int seconds = 0;
	scanf("%d", &seconds);
	int h = seconds / 60 / 60;//时
	int m = seconds / 60 % 60;//分
	int s = seconds % 60;//秒
	printf("%d %d %d\n", h, m, s);
	return 0;
}
*/