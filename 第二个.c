#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("һ��\n");
		break;
	case 2:
		printf("����\n");
		break;
	case 3:
		printf("����\n");
		break;
	}
	return 0;
}







/*
int main()
{
	int a = 0;
	printf("�������֣�");
	scanf("%d",&a);
	switch (a)
	{
	case 1:
		printf("���������\n");
		break;
	case 2:
		printf("�˳���Ϸ��\n");
		break;
	default:
		printf("ѡ�����\n");
		break;
	}
	return 0;

}
*/







/*
void game()
{
	printf("�����֣�");
}
void menu()
{
	printf("*******************************\n");
	printf("******1.play  0.exit     ******\n");
	printf("*******************************\n");
}
int main()
{
	int input = 0;
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	return 0;
}

*/












/*
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
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("��������\n");
			break;
		}
	} while (input);
	return 0;
}
*/