#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
/*
#include<ctype.h>
int main()
{
	char ch = 'W';
	int ret1 = islower(ch);//�˿⺯���ж��ַ�����Сд�����ط���ֵ�����Ǵ�д��������ֵ��
	int ret2 = isdisit(ch);//�ж��Ƿ�Ϊ�����ַ�  ��  �����ط���ֵ��  �񣨷�����ֵ��
	printf("%d\n", ret1);
	char ch = tolower('Q');//�˺��������ã���д��ĸתСд��ĸ   ���������Сд�Ͳ�����
	putchar(ch);//putchar�Ǵ�ӡ�ַ�
	

	//���Ǿ仰�еĴ�д��ĸȫ��תΪСд
	char arr[] = "I Am A Student";
	int i = 0;
	while (arr[i])
	{
		if (issupper(arr[i]))//
		{
			arr[i] = tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);
	return 0;
}

*/




/*
//strerror�⺯��ѧϰ
//���ã���C�����еĴ����룬����Ϊ��Ӧ�Ĵ�����Ϣ
int main()
{
	//������      ������Ϣ
	//0     ����  No error
	//1     ����  Operation not permitted
	//2     ����  No such file or directory
	//����������������
	
	
	//ʹ�ú���һ��Ҫ����ͷ�ļ�
	//ͷ�ļ�  errno ����˼��һ��ȫ�ֵĴ�����ı���
	//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����� ��ֵ��errno ��
	char* str = strerror(errno);
	printf("%s\n", str);
	//���ļ�
	//
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		printf("open file success\n");
	}
	return 0;
}

*/





/*

//strtok�⺯��ѧϰ  ���� ���ָ����ַ���  
//192.168.31.121
//192 168 31 121 ����strtok
//zpw@bitedu.tech
//zpw bitedu tech
int main()
{
	char arr[] = "zpw@bitedu.tech";
	char* p = "@.";
	//zpw@bitedu.tech
	char buf[1024] = { 0 };
	strcpy(buf, arr);
	//�и�buf�е��ַ���
	
	char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	//�������Ҫ���� Ҫ���μ�
	
	{
		printf("%s\n", ret);
	}
	
	
	
	
	//д����
	char* ret = strtok(arr, p);
	printf("%s\n", ret);
	ret = strtok(NULL, p);
	printf("%s\n", ret);
	ret = strtok(NULL, p);
	printf("%s\n", ret);

	return 0;
}

*/
