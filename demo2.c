#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int DigitSun(unsigned int num)
{
	if (num > 9)
	{
		return DigitSun(num / 10) + num % 10;
	}
}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	int ret = DigitSun(num);
	printf("ret = %d\n", ret);
}






/*
//A 想获取某年某月有多少天，输入年份和月份，计算这一年这个月有多少天
int main()
{
	int y = 0;
	int m = 0;
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	while (~scanf("%d %d", &y, &m))
	{
		int day = days[m - 1];
		if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		{
			if (m == 2)
			{
				day++;
			}
			printf("%d\n", day);
		}

	}
	return 0;
}
*/