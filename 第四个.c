#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0,k = 0; k = 0;i++,k++)  //�ж�����  k=0   0Ϊ�ٸ�������ѭ��
	{
		k++;
	}
	return 0;
}





/*
//ȥ����ʼ��������������仯�ˣ�
int main()
{
	int a = 0;
	int b = 0;
	for (; a < 10; a++)
	{
		for (; b < 10; b++)//û�г�ʼ������b�޷��ٴγ�ʼ��Ϊ0��
		{
			printf("hehe\n");
		}
	}
	return 0;
}
*/



/*
//��������ַ����������ַ��������
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch >'9')
			continue;
		putchar(ch);
	}
	return 0;
}
*/



/*
int main()
{
	int b[3] = { 0 };
	scanf("%d", b);
	printf("%d\n", b);
    int a = 0;
	scanf("%d",&a);
	printf("%d\n",a);
	return 0;
}
*/

/*
int  main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("���������룡");
	scanf("%s",password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ�ϣ�Y/N����>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ���\n");
	}
	else
	{
		printf("ȷ��ʧ�ܣ�\n");
	}
	return 0;
}
*/