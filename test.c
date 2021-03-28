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
	//创建通讯录
	struct Contact con;//con就是通讯录，里面包含：1000个元素和size；
	//初始化通讯录
	InitContast(&con);
	int input = 0;
	do
	{
		menu();
		printf("请输入>:");
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
			printf("退出通讯录！\n");
			break;
		default:
			printf("选择错误！\n");
			break;
		}
	} while (input);
	return 0;
}