#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
/*
//дһ���������ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ���
//abcdef
//bcdefa
//cdefab
//defabc
//efabcd
//fabcde
int is_left_move(char* s1, char* s2)
{
	int len = strlen(s1);//���s1�ĳ���
	int i = 0;
	for (i = 0; i < len; i++)//��ʼ��ת����һ����ʼһֱÿ������תһ��
	{

		left_move(s1, 1);//�Լ�����ĺ���  ʹ�ü���
		int ret = strcmp(s1, s2);//�⺯�������ñȽ������ַ���
		if (ret == 0)
			return 1;
	}
        	return 0;//����������Ƚ������ȷ�ϣ�����
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
//��Ŀ���ݣ�ʵ��һ�����������������ַ�����K���ַ�
//���磺abcd ����һ���ַ� bcda
//      abcd ���������ַ� cdab



//������ת��
//abcdef
//ba fedc
//cdefab
//�����ַ�������
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
	reverse(arr, arr + k - 1);//�������
	reverse(arr + k, arr + len - 1);//�����ұ�
	reverse(arr, arr + len - 1);//��������
}

/*
//������ⷨ������һ��
void left_move(char arr[], int k)//void left_move(char* arr, int k)һ����
{
    assear(arr!=NULL);
	int i = 0;
	int len = strlen(arr);//�������Ԫ�ظ���
	for (i = 0; i < k; i++)//��������Ԫ�ؾ�ѭ������
	{
		//����һ���ַ�
		//1
		char tmp = *arr;  //�ó���һ��Ԫ��
		int j = 0;
		for (j = 0; j < len - 1; j++) //ÿ��Ԫ���ó�����ǰѭ��
		{
			*(arr + j) = *(arr + j + 1);
		}
		//3
		*(arr + len - 1) = tmp;  //����һ��Ԫ�ط��� ���һ��λ��
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


