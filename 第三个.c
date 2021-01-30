#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
int main()
{
	int ch = getchar();
	putchar(ch);
	//EOF——end  of  file——文件结束标志——值为-1；
	//ctrl+z  ch 获取到E0F

	printf("%c\n",ch);
	return 0;
}
*/


/*
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			continue;//死循环    continue(继续)
		printf("%d\n", i);
		i++;
	}
	return 0;
}
*/




/*
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d\n",i);
		i++;
	}
	return 0;
}
*/




/*
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("%d   %d\n", m, n);                    //switch语句允许嵌套使用
	return 0;
}
*/


/*
int main()
{
	int day = 0;
	scanf("%d", &day);//没有\n并且带取地址符 
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	}
	return 0;
}
*/




/*
int main()
{
	int day = 0;
	scanf("%d",&day);//没有\n并且带取地址符 
	switch (day)
	{
	case 1:
		printf("星期1\n");
	case 2:
		printf("星期2\n");
	case 3:
		printf("星期3\n");
	case 4:
		printf("星期4\n");
	case 5:
		printf("星期5\n");
	case 6:
		printf("星期6\n");
	case 7:
		printf("星期天\n");
	default:
		printf("赶紧滚！\n");
	}
	return 0;
}
*/




/*
//输出1—100之间的奇数
int main()
{
	int a = 1;
	while (a <= 100)
	{
		if (a % 2 != 0)
		{
			printf("%d\n", a);
		}
		a++;
	}
	return 0;
}
	
*/






/*

//判断一个数是否为奇数
int  main()
{
	int a = 0;
	printf("请输入一个数\n");
	scanf("%d",&a);
	if (a % 2 != 0)
	{
		printf("奇数\n");
	}
	else
	{
		printf("偶数\n");
	}
	return 0;
}
*/



/*
int main()
{
	int num = 4;
	if (num = 5)// = 赋值   ==相等
	{
		printf("呵呵\n");
	}
	return 0;
}
*/




/*
int main()
{
	int a = 0;
	int b = 2;
	if(a == 1)
	   if (b == 2)
		 printf("呵呵\n");
	   else
		 printf("haha\n");
	return 0;
}
*/





/*
int main()
{
	int age = 10;

	int a = 0;
	;  //空语句

	return 0;
}
*/