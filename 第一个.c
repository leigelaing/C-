#define  _CRT_SECURE_NO_WARNINGS 1

/*
# include <stdio.h>
//��������Ϸ��
//1.���Ի�����һ�������
//2.������
void game()
{
	printf("�����֣�\n");
}
void menu()
{
	printf("************************************\n");
	printf("*****1.��ʼ��Ϸ�� 2.������Ϸ��******\n");
	printf("************************************\n");
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("�������֣�");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
		case 2:
			printf("�˳���Ϸ��\n");
		default:
			printf("��������\n");
		}
	} while (input);
	   return 0;
}

*/











/*
int  main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	for (a = 1; a < 10; a++)
	{
		for (b = 1; b <= a; b++)
		{
			c = a * b;
			printf("%d * %d = %-2d  ", a, b, c);//%-2d��ӡ���ֵΪ��λ
			if (a == b)
				printf("\n");
		}
	}
	return 0;
}

*/





/*
//��10�����������ֵ
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int max = arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz;i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}

*/






/*
//1/1 - 1/2 + 1/3 -1/4      +1/100 ������
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum = sum + flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}
*/



/*
//1/1 - 1/2 + 1/3 -1/4      +1/100
int  main()
{
	int  i = 0;
    double  sum = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 != 0)
		{
			sum = sum + (1.0 / i);
		}
	    else if (i % 2 == 0)
		{
			sum = sum - (1.0 / i);
		}
	}
	printf("%lf\n", sum);
	return 0;
}
*/




/**
//1-100֮��һ�������˶��ٵ�9
int main()
{
	int count = 0;
	for (int i = 1; i <= 100;i++)
	{
		if (i % 10 == 9)
			count++;
	    if (i / 10 == 9)
			count++;
	}
	printf("%d\n", count);
	return 0;
}
*/