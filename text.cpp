//������������Ϸ
#include"game.h"
void menu()
{
  printf("***********************************\n");
  printf("******* 1.play   0.exit     *******\n");
  printf("***********************************\n");
}
//����������ʽ




//��Ϸ������ʵ��
void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};  //ȫ���ո�ʲô��û���£�     //�������������Ե���Ϸ��Ϣ 
    //��ʼ�����̣����飩
	Initboard(board,ROW,COL);
	//��ӡ����
	Displayboard(board,ROW,COL);
	//����
	while(1)
	{
	    //����ȿ�ʼ
		Playetmove(board,ROW,COL);
		Displayboard(board,ROW,COL);
        //�ж�����Ƿ�Ӯ
        ret = Iswin(board,ROW,COL);
		if(ret != 'c')
		{
		  break;
		}
		//���Դ�֮
		Computemove(board,ROW,COL);
		Displayboard(board,ROW,COL);
       //�жϵ����Ƿ�Ӯ
        ret = Iswin(board,ROW,COL);
		if(ret != 'c')
		{
		  break;
		}
	}
    if(ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret = '#')
	{
	    printf("����Ӯ\n");
	}
    else
	 {
	    printf("ƽ��\n");
	 }
}

void  test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
     do
	 {
		 menu();
		 printf("��ѡ��:>");
		 scanf("%d",&input);
		 switch(input)
		 {
		 case 1:
			 game();
			 break;
		 case 0:
			 printf("�˳���Ϸ\n");
			 break;
		 default:
			 printf("ѡ�����������ѡ��\n");
			 break;
		 }
	 }
	 while(input);
}

int main()
{
	test();
    return 0;
}