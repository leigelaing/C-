#define  _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void menu()
{
	printf("********************************\n");
	printf("*****  1.add    2.del      *****\n");
	printf("*****  3.search  4.modify ******\n");
	printf("********5.show   6.sort    *****\n");
	printf("********* 0.exit            ****\n");
	printf("********************************\n");

}
int main()
{
	//����ͨѶ¼
	struct Contact con;//con����ͨѶ¼�����������1000��Ԫ�غ�size��
	//��ʼ��ͨѶ¼
	InitContast(&con);
	int input = 0;
	do
	{
		menu();
		printf("������>:");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContast(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SesrchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("�˳�ͨѶ¼��\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}