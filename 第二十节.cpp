#include<stdio.h>
int main()
//ָ�����顪���顪���ָ�������
//����ָ�롪ָ�롪
{
   int a = 10;
   int b = 20;
   int c = 30;
   //int* pa = &a;
   //int* pb = &b;
   //int* pc = &c;
   //�������顪�������
   //�ַ����顪����ַ�
   //ָ�����顪���ָ��
   int* arr2[3] = {&a,&b,&c};//ָ������
   int i = 0;
   for(i = 0;i < 3;i++)
   {
   printf("%d\n",arr2[i]);
   }
   return 0;
}





/*
{
    int a = 10;
    int* pa = &a;//һ��ָ��
	int* * ppa = &pa;//����ָ��
	int* * * pppa = &ppa;//����ָ��
	return 0;
}
*/






/*
{
	int arr[10] = {0};
	printf("%d\n",arr);//��ַ����Ԫ�صĵ�ַ
	printf("%d\n",arr + 1);
	printf("%d\n",&arr[0]);
    printf("%d\n",&arr[0] + 1);
	printf("%d\n",&arr);//������Ԫ�صĵ�ַ
	printf("%d\n",&arr + 1);
	return 0;
}
//�ھ������arr������������Ԫ�صĵ�ַ
//�����������arr������Ԫ�صĵ�ַ
//1.&arr��&����������������������Ԫ�صĵ�ַ��������ʾ�������顪&����������ȡ���ĵ�ַ����������ĵ�ַ
//2.sizeof(arr)_sizeof(������)����������ʾ�������顪sizeof����������������������Ĵ�С
*/








/*
int my_shrlen(char* str)
{
  char* start = str;
  char* end = str;
  while(*end != '\0')
  {
     end++;
  }
  return end - start;
}

int main()
{
   //strlen_���ַ������ȣ�
	//�ݹ顪ģ��ʵ����strlen���������ķ�ʽ1���ݹ�ķ�ʽ2��
	//
	char arr[] = "bit";
	int len = my_shrlen(arr);
	printf("%d\n",len);
	return 0;
}
*/





/*{
	char ch[5] = {0};
    int arr[10] = {0,1,2,3,4,5,6,7,8,9,10};
	printf("%d\n",&arr[9] - &arr[0]);//ָ���ȥָ��õ������м�Ԫ�صĸ�����
    printf("%d\n",&arr[9] - &arr[0]);//���-9��
	printf("%d\n",&arr[9] - &ch[0]);//����Ϊͬһ���ռ��ַ�����Ǵ���д����
	return 0;
}
*/