#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>





/*
int  main()
{
	int a = 10;
	int b = 0;
	if (a > 5){
		b = 3;
	}
	else
	{
		b = -3;
	}

	b = ( a> 5? 3: -3);

	return 0;
}

*/




/*
int main() 
{
	int i = 0, a = 0, b = 2, c = 3, d = 4; 
	i = a++ && ++b && d++; 
	//i = a++||++b||d++; 
	printf("a = %d\n    b = %d\n    c = %d\n   d = %d\n", a, b, c, d);
	
	
	int i1 = 0, a1 = 1, b1 = 2, c1 = 3, d1 = 4;
	i = a++ && ++b && d++;  //2  3  3  4
	//i = a++||++b||d++; 
	printf("a = %d\n    b = %d\n    c = %d\n   d = %d\n", a1, b1, c1, d1);
	return 0; 
}
*/




/*
int  main()
{
	int a = 5;
	int b = 3;
	int c = a && b;
	printf("%d\n", c);
	return 0;
}
*/



/*
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));//(2)  //arr������Ԫ�صĵ�ַ
} 
void test2(char ch[])  
{ 
	printf("%d\n", sizeof(ch));//(4) //chΪ��Ԫ�صĵ�ַ
} int main()
{ 
	int arr[10] = {0};
	char ch[10] = {0};
	printf("%d\n", sizeof(arr));//(1)       //40
	printf("%d\n", sizeof(ch));//(3)         //10
	test1(arr);
	test2(ch);
	return 0;
}

*/







/*
int main()
{
	int a = (int)3.14;
	printf("%\n", a);
	return 0;
}
*/



/*
int main()
{
	int a = 10;
	printf("%d\n", ++a);//ǰ��++  ��++  ��ʹ��
	printf("%d\n", a++);//����++  ��ʹ�� ��++
	return 0;
}
*/




/*
int main()
{
	int a = 11;
	int b = 0;
	a = a | (1 << 2);
	printf("%d\n", a);
	//��ԭ
	b = a & (~(1 << 2));
	printf("%d\n", b);
	//11�Ķ�����
	//0000000000000000000000001011
	
	//0000000000000000000000000100//�����ֵĲ���  ������1���Ұ�λ�ƶ���λ
	//0000000000000000000000001111
	//�������ֻ�һ��
	//����������λ��Ϊ1


//	int a = 0;
	//~����2���ƣ�λȡ��
//	printf("%d\n", ~a);
	//000000000000000000��������
	//111111111111111111��������
	//111111111111111110��������
	//100000000000000001����ԭ��
	//ע�����λΪ����λ
	return 0;
}
*/




/*
int main()
{
	short s = 0;
	int a = 10;
	printf("%d\n", sizeof(s = a + 5));//������Ϊ2 ԭ��sΪshort����Ϊ2���ֽ�
	printf("%d\n", s);
	//���Ϊ0  ԭ��ԭ�����Ϊ15 ��ע��sizeof�еļ��㲻����ʵ���㣬s�Ծ�Ϊ0��
	return 0;
}
*/