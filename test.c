#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
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
unsigned char i = 0;//char�����޷�������Χ0 - 255  forѭ�����������  ������ѭ��
int main()
{
	for (i = 0; i <= 255; i++) 
	{
		printf("hello world\n");
	}
	return 0;
}
*/