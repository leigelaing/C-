#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0,k = 0; k = 0;i++,k++)  //判断条件  k=0   0为假根本不进循环
	{
		k++;
	}
	return 0;
}





/*
//去掉初始条件，结果发生变化了；
int main()
{
	int a = 0;
	int b = 0;
	for (; a < 10; a++)
	{
		for (; b < 10; b++)//没有初始条件，b无法再次初始化为0；
		{
			printf("hehe\n");
		}
	}
	return 0;
}
*/



/*
//输出数字字符，非数字字符不会输出
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch >'9')
			continue;
		putchar(ch);
	}
	return 0;
}
*/



/*
int main()
{
	int b[3] = { 0 };
	scanf("%d", b);
	printf("%d\n", b);
    int a = 0;
	scanf("%d",&a);
	printf("%d\n",a);
	return 0;
}
*/

/*
int  main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码！");
	scanf("%s",password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认（Y/N）：>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功！\n");
	}
	else
	{
		printf("确认失败！\n");
	}
	return 0;
}
*/