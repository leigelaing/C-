#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}







/*
int main()
{
	double d = 1E10;
	printf("%lf\n", d);
	return 0;
 }


 */



/*
unsigned char i = 0;//char类型无符号数范围0 - 255  for循环条件恒成立  无限死循环
int main()
{
	for (i = 0; i <= 255; i++) 
	{
		printf("hello world\n");
	}
	return 0;
}
*/