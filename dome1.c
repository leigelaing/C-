#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
int main()
{
	int aa[2][5] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int* ptr1 = (int*)(&aa + 1);
	//&aa+1��������������ά���飬
	
	int* ptr2 = (int*)(*(aa + 1));
	//aa + 1  aa�����һ�е������ַ����1  ָ��ڶ��е���Ԫ�أ�*(aa+1) =aa[1]
	
	pritnf("%d %d", *(ptr1 - 1), *(ptr2 - 1));
	//���߻���һ��int�ľ���
	return 0;
}
*/








/*
int main()
{
	int a[5] = { 5, 4, 3, 2, 1 };

	//5 4 3 2 1 
	int* ptr = (int*)(&a + 1); // &a + 1  ����ĵ�ַ�� 1 ������������   
	//ǿ������int* ת�� ����ptrָ�����һ��Ԫ�غ���ĵ�ַ��
	printf("%d %d", *(a + 1), *(ptr - 1));
	//��������һ��int*  ��ָ��ָ��1
    //�𰸣���4,1
	return 0;
}
*/





/*
int  main()
{

   int (*       (*p)[10]    )(int*)


   int (*     (*F)(int,int)     )(int)
   
   int (*F)(int,int)
   

   int(*(*F)(int,int))_err
   
   
   *(*F)(int,int)(int)_err

	int *fun(int a, int b);//��������

	int (*)fun(int a, int b);//err
	
	int( *fun)(int a, int b);//����ָ��
	
	(int *) fun (int a, int b);////��������
	return 0;
}

*/



/*
int  main()
{
	//����ռ�
	int* p = (int*)malloc(10 * sizeof(int));
	
	//ʹ�ÿռ�
	//********
	
	//�ͷſռ�
	free(p);
	return 0;
}

*/



/*
��ˮ���� 
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{

					}
				}
			}
		}
	}
	return 0;
}
*/

