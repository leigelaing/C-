#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
int main()
{
	int ch = getchar();
	putchar(ch);
	//EOF����end  of  file�����ļ�������־����ֵΪ-1��
	//ctrl+z  ch ��ȡ��E0F

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
			continue;//��ѭ��    continue(����)
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
	printf("%d   %d\n", m, n);                    //switch�������Ƕ��ʹ��
	return 0;
}
*/


/*
int main()
{
	int day = 0;
	scanf("%d", &day);//û��\n���Ҵ�ȡ��ַ�� 
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	}
	return 0;
}
*/




/*
int main()
{
	int day = 0;
	scanf("%d",&day);//û��\n���Ҵ�ȡ��ַ�� 
	switch (day)
	{
	case 1:
		printf("����1\n");
	case 2:
		printf("����2\n");
	case 3:
		printf("����3\n");
	case 4:
		printf("����4\n");
	case 5:
		printf("����5\n");
	case 6:
		printf("����6\n");
	case 7:
		printf("������\n");
	default:
		printf("�Ͻ�����\n");
	}
	return 0;
}
*/




/*
//���1��100֮�������
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

//�ж�һ�����Ƿ�Ϊ����
int  main()
{
	int a = 0;
	printf("������һ����\n");
	scanf("%d",&a);
	if (a % 2 != 0)
	{
		printf("����\n");
	}
	else
	{
		printf("ż��\n");
	}
	return 0;
}
*/



/*
int main()
{
	int num = 4;
	if (num = 5)// = ��ֵ   ==���
	{
		printf("�Ǻ�\n");
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
		 printf("�Ǻ�\n");
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
	;  //�����

	return 0;
}
*/