#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>



/*



//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��0��N��  ����ʹ�ñ������в���Ԫ��
//���裺1 2 3
//      4 5 6
//      7 8 9
  //1 2 3
  //4 5 6
  //3 4 5
//��������������ƴ˺�����
int FindNun(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;//������������С�Ķ�����һ���Ѿ�������̭��
		}
		else if (arr[x][y] < k)
		{
			x++;//�����������Ķ�Ŀ�껹С��������һ���Ѿ�û����
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	//�Ҳ���
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
	//�����Ͳ���
	int ret = FindNun(arr, k, &x, &y);
	if (ret == 1)
	{
		pritnf("�ҵ���\n");
		printf("�±��ǣ�%d %d\n", x, y);
	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}



*/

/*
//����һ 
int FindNun(int arr[3][3], int k, int row, int col)
{
	int x = 0;
	int y = col - 1;
	while (x <= row - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;//������������С�Ķ�����һ���Ѿ�������̭��
		}
		else if (arr[x][y] < k)
		{
			x++;//�����������Ķ�Ŀ�껹С��������һ���Ѿ�û����
		}
		else
		{
			return 1;
		}
	}
	//�Ҳ���
	return 0;
}
int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { , 7, 8, 9 }, };
	int k = 7;
	int ret = FindNun(arr, k, 3, 3);
	if (ret == 1)
	{
		pritnf("�ҵ���\n");
	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}

*/


/*
//���������abcedfabcdef  �Ͱ��������п��ܳ��ֵ����  ������һ�����бȽ�
int is_left_move(char* str1,char* str2)
{
	//����ַ������ȸ�����������⻹���ҵ��Ӵ�������
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
	{
		return 0;
	}
	
	//1.��str1�ַ�������׷��һ��str1�ַ���
	//ʹ��strcat�⺯����������ʹ�ò����Լ����Լ�׷�ӣ�
	//ԭ����  ��׷�ӹ����������ҵ��Լ���\0 Ȼ���Լ���һ��Ԫ�ط���\0��λ�ã�����ֹͣʱ����Ҫ\0ֹͣ����ʱ�Ѿ�\0�����ˣ��޷�ֹͣ��  
	//����strncat �⺯����������ԣ�
	//strcat(str1,str1);���������
	strncat(str1, str1, 6);  //�������ֹͣ ��ԭ���Ǹ��ݸ�������ֹͣ��ѹ������\0��Ϊֹͣ��־ �����Լ�׷���Լ���Ӱ��
	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
	//strstr�������Ӵ���
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




//strcat�⺯��ѧϰ
int main()
{
	char arr1[30] = "abc";
	char arr2[] = "def";
	strcat(arr1,arr2);
	printf("%s\n", arr1);
	return 0;
}
*/

