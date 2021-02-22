#define  _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, int set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][ROWS], int row, int col)
{
	int i = 0;
	int j = 0;
	//´òÓ¡ÁÐºÅ
	for (i = 1; i <= row; i++)
	{

	}
	for (i = 0; i <= row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%c ",board[row][col]);
		}
		printf("\n");
	}
}