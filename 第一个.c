#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/*
//得到一个整数的每一位
int main()
{
	int num = 0;
	int a = 0;
	scanf("%d", &num);
	while (num)
	{
		a = num % 10;
		if (a != 0)
		{
			printf("%d   ", a);
		}
		num = num / 10;
	}
	return 0;
}

*/





/*
//编写代码实现：求一个整数存储在内存中的二进制中1的个数
//方法二：
//方案：将原数与1进行按位与，不断右移，
int  main()
{
	int  num = 0;
	int count = 0;
	scanf("%d", &num);
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
			count++;
	}
	printf("%d\n", count);
	return 0;
}
*/


/*（方法一）
//负数会出现问题，所以本代码不好
int  main()
{
	int  num = 0;
	int count = 0;
	scanf("%d", &num);
	//统计num的补码中有几个1
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}
	printf("%d\n", count);
	return 0;
}
*/









/*

//(面试题)不能创建临时变量（第三个变量），实现两个数的交换
//方法一：(加减法)
int main()
{
	int a = 3;
	int b = 5;
	//缺陷相加过程会出现溢出
	a = a + b; //a == 8；
	b = a - b; //b == 3；
	a = a - b;//a == 5；
	printf("%d %d\n",a, b);
	return 0;
}
//方法二（异或的方法:方法好不会产生溢出）
int main()
{
	int a = 3;
	int b = 5;
	a = a ^ b; // a = 6  
	b = a ^ b; // b = 3
	a = a ^ b; // a = 5
	printf("%d %d\n", a, b);
	return 0;
}
*/




/*
int main()
{
	//整数原码，反码，补码一样的，
	//负数原码，反码，补码要进行计算，
	//不论正负数都是以补码形式输出

	//& ——按二进制与
	int a = 3;
	int b = 5;
	int c = a & b;
	//注意按位与将所有32位二进制都写出来
	printf("%d\n", c);//注意是补码进行运算

	//  |——按位或
	int a = 3;
	int b = 5;
	int c = a | b;
	printf("%d\n", c);
	// ^ ——按2进制位异或
	//规则：相同为0，相异为1
	int a = 3;
	int b = 5;
	int c = a ^ b;
	printf("%d\n", c);
	return 0;
}
*/





/*
int main()
{
	int a = 5 / 2; //都为整数执行，整数除法，其中一个 为小数执行小数除法
	printf("%lf\n", a);
	int b = 5 % 2;//取模操作符都为整数
	printf("%d\n", b);
	int a1 = 5;
	int b1 = a1 << 1;
	printf("%d\n", b1);//左边丢弃，右边补0
	int a2 = 5;
	int b2 = a2 >> 1;
	/*算术右移（基本见到的是算术移位）
     右移一位有除2 的效果；
     右边丢弃，左边补原符号位（0为正数  1为负数）；
     逻辑右移
     右边丢弃，左边补0；
	
	printf("%d\n", b2);
	return 0;
}
*/