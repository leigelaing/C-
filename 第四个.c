#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	printf("%d\n", strlen("c:\test\328\test.c")); //  \328  8������û��8 �������Ӧ�ñ���
	printf("%c\n", '\x61');
	return 0;
}





/*
int main()
{
	printf("%c\n", '\132');
	printf("%c\n",'\32');
	printf("%d\n",strlen("c:\test\32\test.c"));//ע�ⲻ��""˫���ţ�
	//c   :  \t e s t \32 \t e s t . c   һ��13��
	//  \32����32��2��8��������
	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ���
	//32ת��Ϊʮ���ƣ�3*8^1+2*8^0 = 26;  26��ΪASCII��ֵ������ַ�
	return 0;
}
*/



/*
//��ӡ·��
int  main()
{
	printf("%d\n",'\'');//��ӡ" '"
	printf("%d\n"\"");//��ӡ�� " ��
	printf("c:\test\32\test.c");     \t ת��Ϊˮƽ�Ʊ����
	return 0;
}
*/



/*
int main()
{
	printf("abc\n")//  \nת���ַ������С�
	return 0;
}
*/



/*
int main()
{
	char  arr[] = "abc";//����
	char  arr1[] = { 'a', 'b', 'c' };
	printf("%d\n", strlen(arr));//strlen _string  length  //���������ַ�������
	printf("%d\n", strlen(arr1));
	return 0;
}
*/






/*
int  main()
{
	char  arr[] = "abc";//����
	char  arr1[] = { 'a', 'b', 'c' };
	char  arr2[] = { 'a', 'b', 'c' ,0};//  \0(�ַ����Ľ�����־)   \0 = 0;
	printf("%s\n",arr);
	printf("%s\n",arr1);
	printf("%s\n", arr2);
	return 0;
}

*/
/*
//4.ö�ٳ�����ö�٣�һһ�о٣�
//ö�ٹؼ��֣�enum
enum  color
{
	red,//0
	yellow,//1
	blue//2

};
//ö�ٳ������ܸģ�
int main()
{
	enum color s = red;
	s = yellow;
	return 0;
}

*/


/*
enum  sex
{
	male,
	female,
	secret

};//ע��ֺ�
//male,female,secret����ö�ٳ�������ֵ�Ҳ��ɸı䣩
int main()
{
	enum sex s = female;
	printf("%d\n", male);//0
	printf("%d\n", female);//1
	printf("%d\n", secret);//2
	return 0;
}
*/






/*
#define MAX 10//��ʶ��������ע����治��Ҫ�ֺ�
int  main()
{
	int arr[MAX] = { 0 };
	ptinf("%d\n"MAX);
	return 0;
}
*/












/*

int main()
{
	const int n = 10;
	int  arr[n] = { 0 };//���������ǳ��������ǻᱨ��
	int n = 10;
	int  arr[n] = { 0 };//���������Ǳ������ʽ



	//const  (������)
	const int num1 = 4;//const���εĳ��������������г��������ԣ����ܽ��и���
	int num1 = 8;
	printf("%d\n", num1);//�ᱨ���
	int num = 4;
	num = 8;
	printf("%d\n",num);
	return 0;
}
*/