#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>






/*
//��Ŀ����
//��ʹ���ۼƳ˷��Ļ����ϣ�ͨ��λ�����㣨<<��ʵ��2��n�η��ļ���
//�������룬ÿ����������n��0 <= n < 31��
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		printf("%d\n", 1 << n);  //��1���Ƽ�λ���Ǽ���2�η�
	}
	return 0;
}
*/







/*
//��Ŀ����
//����һ�����֣��������ڰ���  �������м�û�зָ���
//����  ��һ��Ϊ������ݣ��ڶ���Ϊ�·ݣ�������Ϊ���ڣ����ʱ����·ݻ�������Ϊ1Ϊʱ���� 
int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	scanf("%4d %2d %2d", &y, &m, &d);
	printf("%d\n", y);
	printf("%02d\n", m);//"%02d\n"  ������0���  ���Ϊ2 
	printf("%02d\n", d);
	return 0;
}

*/





/*
//ת������ASCII���Ӧ���ַ����������
//73,32,99,97,110,32,100,111,32,105,116,33
int main()
{
	char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
	int i = 0;
	for (i = 0; i < 12; i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}

*/




/*
//����һ���ַ������ַ��������ǽ�����
//����1
//     1 
//    1 1
//   1 1 1
int main()
{
	//����
	char n = 0;
	scanf("%c", &n);
	//���
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		//��ӡһ��  �ȴ�ӡ�ո�  �ٴ�ӡ�ַ�
		int j = 0;
		for (j = 0; j <5-1-i ; j++)
		{
			printf(" ");
		}
		//��ӡ1
		for (j = 0; j <= i; j++)
		{
			printf("%c ",n);//ע��%d  �����и��ո�
		}
		printf("\n");
	}
	return 0;
}
*/








/*
//�Ӽ�����������һ���ַ����ж��Ƿ�Ϊ��ĸ
//�������룬ÿ���������һ���ַ�
int main()
{
	int ch = 0;
	//getchar������ȡ�����ַ�ʱ  �������EOF��end  of file ֵΪ -1��  
	while ((ch = getchar()) != EOF)
	{
		//�ж���ĸ
		if ((ch >= "A"&&ch <= "Z") || (ch >= "a"&&ch <= "z"))
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
		//����\n
		getchar();
	}
	return 0;
}

*/





/*
//��������һ��ѧ����ѧ�ţ��Լ����Ƴɼ�
//���������
int main()
{
	int num = 0;
	float a = 0.0;
	float b = 0.0;
	float c = 0.0;
	scanf("%d;%f, %f, %f ",&num,&a, &b, &c);
	printf("%d;%.2f, %.2f, %.2f ", num, a, b, c);// %.2f������Ϊ2λС��
	return 0;
}
*/




/*
//printf�����з���ֵ��д�������Hello world  �ķ���ֵ
//printf��������ֵ�����ͣ����ص����ַ��ĸ���
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//�����  4321


	//������
	printf("\n %d \n", printf("Hello world!"));

	//����һ
   int ret = printf("Hello world!");
   printf("\n");
   printf("%d\n", ret);
   return 0;
}

*/




/*
//дһ��ʮ��������ABCDEF�����ʮ����  ��ռ���Ϊ15
int main()
{
	//��� ��������ǰ���м����ո�2�������һ���ո�
	printf("%d\n", 15);
	printf("%4d\n", 15);
	printf("%15d \n", 0XABCDEF);//ע��16������ǰ���0X
	//printf����ʹ�ø�ʽ���ƴ�"%md" ������Ϊm��ʮ��������
	return 0;
}
*/




/*
//sizeof���� ������
int a = 10��
sizeof��int��
sizeof��a��

int main()
{

	printf("The size of short is %d bytes.\n",sizeof(short));
	printf("The size of int is %d bytes.\n", sizeof(int));
	printf("The size of long is %d bytes.\n", sizeof(long));
	printf("The size of long long is %d bytes.\n", sizeof(long long));
	return 0;
}

*/




/*
int main()
{
//    \t   tab  ˮƽ�Ʊ��     \040 ����\ddd    d��8��������
//��32��ΪASCII��ֵ������ַ�

	printf(" v     v\n  v   v\n    v\n ");

	printf("v     v\n");
	printf("  v   v\n");
	printf("    v\n");
	return 0;
}

*/




/*
�����practice makes perfect!
//����OJ��ʽˢ��
#include<stdio.h>
int main()
{
	printf("practice makes perfect!");
	return 0;
}
*/