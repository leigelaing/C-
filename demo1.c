#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>




/*
int main()
{
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (i = 0; i < 12; i++)//ָ��Խ�����
	{
		printf("hehehe\n");
		arr[i] = 0;
	}
	return 0;
}


*/

/*
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;//���ű��ʽ���һ������Ϊ�������ű��ʽ�Ľ��
	b = a++ + c;
	printf("a = %d  b = %d c = %d ", a, b, c);
	return 0;
}
*/










/*
int i ;//ȫ�ֱ�����������ʼ������Ĭ��Ϊ0
int main()
{
	i--;
	//-1
	//10000000000000000000000000001
	//11111111111111111111111111110
	//11111111111111111111111111111
	if (i > sizeof(i))//sizeof()-�������/������ռ�ڴ�Ĵ�С���������ԶΪ���ڵ���0���޷�������
	
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}


*/






/*
int main()
{
	int a = 0x11223344;
	char* pc = (char*)&a;//ÿ�η���һ���ֽ�
   //int��4���ֽ�   11223300;
	*pc = 0;
	printf("%x\n", a);
	return 0;
}
*/






/*
//���Ϊ0 0 3 4 5��
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	//arr����Ԫ�ص�ַ��ԭ����Ϊint���͵����飬
	//���ڽ�int�͵�����ת��Ϊshort�ͣ�ÿ��ֻ�ܷ��������ֽڣ�
	//ѭ����һ������int��ʱ��ǰ�����ֽ�
	short* p = (short*)arr;
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		//
		*(p + i) = 0;//ÿ�ο������ֽ�
	}
	//�������ӡ����
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/









/*
//������������Ԫ��
int main()
{
	int arr1[] = { 1, 3, 5, 7, 9 };
	int arr2[] = { 2, 4, 6, 8, 10 };
	int tmp = 0;
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);//�������鳤��һ��������˭�󳤶ȶ���Ok��
	for (i = 0; i < sz; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
		printf("%d  ", arr1[i]);
		printf("%d  ", arr2[i]);

	}

	

}
*/








/*
//����һ��������
void  Reverse(int arr[],int sz)
{
    int left = 0;
	int right = sz - 1;
	
	while(left < right)
	{
	int tmp = arr[left];
	arr[left] = arr[right];
	arr[right] = tmp;
	left++;
	right--;
	
	}
	

}

*/





/*
//��ӡ���麯��
void  print(int arr[],int sz)
{
	int  i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
}

*/

/*

//�ֲ�������ȫ�ֱ���������
int main()
{
	{
		int a = 0;
	}
	printf("%d\n", a);
	return 0;
}

*/
