#define  ROW 3
#define  COL 3



#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//º¯ÊýµÄÉùÃ÷
 void Initboard(char board[ROW][COL],int row,int col);
 void Displayboard(char board[ROW][COL],int row,int col);
 void Playetmove(char board[ROW][COL],int row,int col);
 void Computemove(char board[ROW][COL],int row,int col);
 char Iswin(char borad[ROW][COL],int row,int col);