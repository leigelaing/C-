#include<stdio.h>
#include<string.h>
int main()
{ 
  int arr[] = {1,2,3,4,5,6,7,8,9,10}; 
  int sz = sizeof(arr)/sizeof(arr[0]);
  int i = 0;
  for(i=0;i<sz;i++)
  {
   printf("&arr[%d] = %p\n",i,&arr[i]);

  }
  return 0;
}








/*int main()
/*{
  int i = 0;
  char arr[] = "abcdef" ; //[a][b][c][d][e][f]
  printf("%c\n",arr[3]);
  for(i=0;i<6;i++)  //for(i=0;i<(int)strlen(arr);i++)//ע��ǿ������ת�� 
{
  printf("%c\n",arr[i]);
}
{  int arr[] = {1,2,3,4,5,6,7,8,9,0}; 
  int sz = sizeof(arr)/sizeof(arr[0]);
  int i = 0;
  for(i=0;i<sz;i++)
  {
   printf("%d \n",arr[i]);
  }
  return 0;
}
*/




/*{
	char arr1[] = "abc";            //arr1 =(a b c \0)
	char arr2[] = {'a','b','c'}; //arr2 =(a b c )
	printf("%d\n",sizeof(arr1)); //���4
	printf("%d\n",sizeof(arr2)); //���3
	printf("%d\n",strlen(arr1)); //���3
	printf("%d\n",strlen(arr2)); //û��\0�޷�ȷ��ֹͣ�����Խ��Ϊ���ֵ
  return 0;
}
*/









/*int main()
{
 /* int arr1[10];             //����һ�����顪������͡�10��
  int arr2[10] = {1,2,3};   //����ȫ��ʼ����ʣ�µ�Ԫ��Ϊ��
  char arr3[5] = {'a','b'};
  char arr3[5] = {'a',98}; //����Ҳ���ԣ���98������b 98��ASCIIֵ
  char arr4[5] = "ab";     //���ֳ�ʼ��Ҳ��OK�ģ���������һ�����ص�\0(�����ַ���ʶ)
  char arr5[] = "abcdes";  //û�и���Ԫ�ظ���ʱ��ϵͳ���ݳ�ʼ���ַ���������ȷ��Ԫ�ظ�����ע��\0Ҳ���ڸ�����
  int n = 5;
  
  char arr45[] = "abcdes";
printf("%d\n",sizeof(arr45));  //sizeof��������arr45��ռ�ռ�Ĵ�С����7Ԫ�ء�ÿ��Ԫ����2���ֽ����Խ�����7
printf("%d\n",strlen(arr45));  //strlen�������ַ������ȣ������\0��ǰ���ַ�һ���м�����\0���㣻�������6

//  char ch[n];  //error �����Ǳ���  
  return 0;
}
//
*/