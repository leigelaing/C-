#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

/*
//goto���
int main()
{

	printf("hello  world\n");
	goto again;
	printf("ɵ��\n");
again:
	printf("���\n");

	return 0;
}

*/





/*
//��������Ϸ
//1.���Ի�����һ�������
//2������
void game()
{
	//1.����һ�������
	int ret = 0;
	int guess = 0;
	//��ʱ����������������������ʼ��
	//time_t time(time_t* time)�⺯��  
	
	//ʱ���
	//��ǰ�����ʱ�� - ���������ʼʱ�䣨1970.1.1.0��0��0�� = ��*****����
	ret = rand()%100+1;//%100+1 Ϊ�����ɵ�������0-100֮�������
	//rand�⺯��  �������������
	printf("%d\n", ret);
	//2.������
	while (1)
	{
		printf("�������>:");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���,�������޸�����\n");
		}
		else if (guess < ret)
		{
			printf("��С�ˣ��벻��Ȣ������\n");
		}
		else
		{
			printf("�¶��ˣ������Ȣ��������\n");
		}

	}
}
void menu()
{
	printf("*********************************\n");
	printf("***   1.paly      2.exit     ****\n");
	printf("*********************************\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>:");
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
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}
*/