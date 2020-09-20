//测试三子棋游戏
#include"game.h"
void menu()
{
  printf("***********************************\n");
  printf("******* 1.play   0.exit     *******\n");
  printf("***********************************\n");
}
//期望棋盘样式




//游戏的整个实现
void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};  //全部空格（什么都没有下）     //数组存放玩家与电脑的游戏信息 
    //初始化棋盘（数组）
	Initboard(board,ROW,COL);
	//打印棋盘
	Displayboard(board,ROW,COL);
	//下棋
	while(1)
	{
	    //玩家先开始
		Playetmove(board,ROW,COL);
		Displayboard(board,ROW,COL);
        //判断玩家是否赢
        ret = Iswin(board,ROW,COL);
		if(ret != 'c')
		{
		  break;
		}
		//电脑次之
		Computemove(board,ROW,COL);
		Displayboard(board,ROW,COL);
       //判断电脑是否赢
        ret = Iswin(board,ROW,COL);
		if(ret != 'c')
		{
		  break;
		}
	}
    if(ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret = '#')
	{
	    printf("电脑赢\n");
	}
    else
	 {
	    printf("平局\n");
	 }
}

void  test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
     do
	 {
		 menu();
		 printf("请选择:>");
		 scanf("%d",&input);
		 switch(input)
		 {
		 case 1:
			 game();
			 break;
		 case 0:
			 printf("退出游戏\n");
			 break;
		 default:
			 printf("选择错误，请重新选择！\n");
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