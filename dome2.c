#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
/*
//写一个函数，判断一个字符串是否为另一个字符串旋转之后的字符串
//abcdef
//bcdefa
//cdefab
//defabc
//efabcd
//fabcde
int is_left_move(char* s1, char* s2)
{
	int len = strlen(s1);//求出s1的长度
	int i = 0;
	for (i = 0; i < len; i++)//开始旋转，从一个开始一直每个都旋转一次
	{

		left_move(s1, 1);//自己定义的函数  使用即可
		int ret = strcmp(s1, s2);//库函数：作用比较两个字符串
		if (ret == 0)
			return 1;
	}
        	return 0;//所有情况都比较完才能确认，不是
}

*/


/*

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

*/










/*
//题目内容：实现一个函数，可以左旋字符串的K个字符
//例如：abcd 左旋一个字符 bcda
//      abcd 左旋两个字符 cdab



//三步翻转法
//abcdef
//ba fedc
//cdefab
//逆序字符串函数
void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k<=len);
	reverse(arr, arr + k - 1);//逆序左边
	reverse(arr + k, arr + len - 1);//逆序右边
	reverse(arr, arr + len - 1);//逆序整体
}

/*
//暴力求解法（方法一）
void left_move(char arr[], int k)//void left_move(char* arr, int k)一样的
{
    assear(arr!=NULL);
	int i = 0;
	int len = strlen(arr);//求数组的元素个数
	for (i = 0; i < k; i++)//左旋几个元素就循环几次
	{
		//左旋一个字符
		//1
		char tmp = *arr;  //拿出第一个元素
		int j = 0;
		for (j = 0; j < len - 1; j++) //每个元素拿出来往前循环
		{
			*(arr + j) = *(arr + j + 1);
		}
		//3
		*(arr + len - 1) = tmp;  //将第一个元素放在 最后一个位置
	}

}
*/
/*
int main()
{
	char arr[] = "abcdef";
	left_move(arr, 2);
	printf("%s\n", arr);
	return 0;
}
*/


