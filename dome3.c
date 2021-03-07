#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>



/*



//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在
//要求：时间复杂度小于0（N）  不能使用遍历进行查找元素
//假设：1 2 3
//      4 5 6
//      7 8 9
  //1 2 3
  //4 5 6
  //3 4 5
//方法二（重新设计此函数）
int FindNun(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;//从列来看，最小的都大，这一列已经可以淘汰了
		}
		else if (arr[x][y] < k)
		{
			x++;//从行来看最大的都目标还小，所以哪一行已经没用了
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	//找不到
	*px = -1;
	*py = -1;
	return 0;
}
int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { , 7, 8, 9 }, };
	int k = 7;
	int x = 3;
	int y = 3;
	//返回型参数
	int ret = FindNun(arr, k, &x, &y);
	if (ret == 1)
	{
		pritnf("找到了\n");
		printf("下标是：%d %d\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}



*/

/*
//方法一 
int FindNun(int arr[3][3], int k, int row, int col)
{
	int x = 0;
	int y = col - 1;
	while (x <= row - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;//从列来看，最小的都大，这一列已经可以淘汰了
		}
		else if (arr[x][y] < k)
		{
			x++;//从行来看最大的都目标还小，所以哪一行已经没用了
		}
		else
		{
			return 1;
		}
	}
	//找不到
	return 0;
}
int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { , 7, 8, 9 }, };
	int k = 7;
	int ret = FindNun(arr, k, 3, 3);
	if (ret == 1)
	{
		pritnf("找到了\n");
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}

*/


/*
//这个方法：abcedfabcdef  就包含了所有可能出现的情况  进而进一步进行比较
int is_left_move(char* str1,char* str2)
{
	//规避字符串长度根本不相等问题还能找到子串的问题
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
	{
		return 0;
	}
	
	//1.在str1字符串后面追加一个str1字符串
	//使用strcat库函数（本函数使用不能自己给自己追加，
	//原因是  在追加过程中首先找到自己的\0 然后将自己第一个元素放在\0的位置，但是停止时又需要\0停止，此时已经\0被换了，无法停止）  
	//或者strncat 库函数（这个可以）
	//strcat(str1,str1);这个不能用
	strncat(str1, str1, 6);  //这个函数停止 的原理是根据个数进行停止，压根不用\0作为停止标志 所以自己追加自己不影响
	//2.判断str2指向的字符串是否是str1指向的字符串的子串
	//strstr——找子串的
	   char* ret = strstr(str1,str2);
	   if (ret == NULL)
	   {
		   return 0;
	   }
	   else
	   {
		   return 1;
	   }
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}




//strcat库函数学习
int main()
{
	char arr1[30] = "abc";
	char arr2[] = "def";
	strcat(arr1,arr2);
	printf("%s\n", arr1);
	return 0;
}
*/

