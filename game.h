#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define  ROW 9
#define  COL 9
#define  ROWS ROW+2
#define  COLS COL+2
void InitBoard(char board[ROWS][COLS], int rows, int cols,int set);
void DisplayBoard(char board[ROWS][ROWS],int row,int col);
