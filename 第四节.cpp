#include  <stdio.h>
int  main()
{
char ch = 'W';
char* pc = &ch;//ָ����pc
*pc = 'a';
printf("%c\n",ch);
printf("%d\n",sizeof(pc));
return 0;
}







/*int  main()
{
int  a = 10;//4���ֽ�
int* p = &a;//ȡ��ַ
printf("%p\n",&a);
*p = 20;//*���������ò�����
return 0;
}
//��һ�ֱ�����������ŵ�ַ�����ֱ�������ָ�����

*/




/*#define MAX(X,Y) (X>Y?X:Y)         //���Զ���ꡪ��������
int  main()
{
int a = 10;
int b = 20;
int max = 0;
//��ķ�ʽ���������еĽϴ�ֵ
max = MAX(a,b);
printf("max = %d\n",max);
return 0;
}
*/







/*#define MAX 100  //������һ����ʶ������MAX������ֵΪ100
int  main()
{
int  a = MAX;
printf("a = %d\n",a);
return 0;
}*/





/*extern  int Add(int,int);  //�����ⲿ����   
//extern �������ⲿ���ŵ�

int main()
{
 int a = 10;
 int b = 20;
 int sum = Add(a,b);
 printf("sum = %d\n",sum);
return 0;
}
*/






/*void test()
{
 static  int a = 1;//a��һ����̬�ֲ�����//�ڶ�����������
	// int a = 1; //aΪ�ֲ�����
  a++;
  printf("a = %d\n",a);//ÿ��aִ����ϣ�����
}
int main()
{
 int i = 0;
 while (i < 5)
 {
  test();
  i++;
 }
 return 0;
}*/







/*{
    register  int = a;  //����a�Ž��Ĵ��������У�
	  auto int a = 10; //�ֲ�����Ҳ���Զ�����  �ֲ�����ǰ�涼Ӧ����auto���Զ���������ֻ��ʡ�ԣ�
    int a = 10;
	a = -2;
	//int ����ı������з��ŵ�
    //signed  int      signed��ʡ��
	//unsigned  int   num = 10    unsigned   �޷�����
	//struct���ṹ��ؼ���
	//union�������壨�����壩
	//������������ؼ�����ͬ
	//typedef �����Ͷ��塪�����ض���
	typedef unsigned int u-int; //��unsigned int���¶���Ϊ u-int���á�Ч��һ��
	unsigned  int  num = 20;
    u-int   num2 = 20; 
	return 0;
}*/





/*int Add( int x,int y)
{
   int z = 0;
    z = x + y;
	return z;

}
int  main()
{
	//int arr[10] = {0};
//	arr[4];�����±����ò�����
	int  a = 10;
    int  b = 20;
    int sum =0;
	sum = Add(a,b);    //Բ����  �к������ò�����
    printf("sum = %d\n",sum);
	return 0;
}*/










/*{
  int a = 10;
  int b = 20;
  int max = 0;
  
  //max(a > b?   a : b);  //a����b��   �������ʽ��ȷ���a��ֵ���������ȷ���b��ֵ
  
  if(a > b)
   max = a;
  else
   max = b;
  printf("max = %d\n",max);
	return 0;

}*/









/*{
    int a = 0;
	int b = 0;
	int c = a||b;          //a��b��Ϊ�ٵ�ʱ���Ϊ��    ����жϷ�ʽ���߼���һ�£�
	printf("c = %d\n",c);
	return 0;
}
//������Ϊ 0 ���٣�      �߼���ע��ͬ�ٲż�
*/




/*{
    int a = 0;
	int b = 5;
	int c = a||b;          //a��b��Ϊ�ٵ�ʱ���Ϊ��    ����жϷ�ʽ���߼���һ�£�
	printf("c = %d\n",c);
	return 0;
}

//������Ϊ 1  ���棩      �߼���ע��ͬ�ٲż�
*/




/*{
	int a = 0;
    int b = 5;
    int c = a && b;  //aΪ�沢��bΪ��
    printf("c = %d\n",c); 
	return 0;
}
//������Ϊ 0���٣�
*/




/*{
 int a = 3;
 int b = 5;
 int c = a && b;  //aΪ�沢��bΪ��
 printf("c = %d\n",c);   //0��ʾ��  ��0Ϊ�棨����1��ʾ��   �����Ǹ����ֲ�Ϊ�������
  return 0;
}
//������Ϊ 1 ���棩

*/





/*{

   int a = (int) 3.14;   //ǿ������ת��
  
   return 0;
}
*/





/*{
int a = 10;
int b = a++;    //����++  b��ʹ���ٸ�a�Ӽ�
int b1 = ++a;  //ǰ��++  �ȸ�a�Ӽ��ٸ�b1ʹ��
int c = a--;    //����--  c��ʹ���ٸ�a�Ӽ�
int c1 = --a;  //ǰ��--  �ȸ�a�Ӽ��ٸ�c1ʹ��
printf("a = %d\n b = %d\n ",a,b);
 return 0;
}*/







/*{
   int a = 0;//����ռ���ĸ��ֽڣ�32bitλ
   int b = ~a;//b���з��ŵ�����   ���λΪ����λ  1��ʾ��   0��ʾ��
    //��~����λȡ�������������ƣ���0���䡰1�� ��1���䡰0�� 
   //00000000000000000000000000000000
   //11111111111111111111111111111111
  printf("%d\n",b);//  ʹ�õģ���ӡ�����������ԭ��
    return 0;
}
//���ϴ����ǽ��Ϊ  -1  Ϊʲô��
//ԭ�롢 ���롢 ���롢
//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ��룻
//11111111111111111111111111111111   ��������
//11111111111111111111111111111110  ����1�� ����
//10000000000000000000000000000001  ��ȡ��������λ���䣩�� ԭ��    ���Ϊ-1

*/





/*int Max(int x,int y)
{
if(x > y)
   return x;
else
   return y;

}

int  main()
{
  int num1 = 10;
  int num2 = 20;
  int max  = 0;
  max = Max(num1,num2);
  printf("max = %d\n",max);

	return 0;
}*/





/*int  main()
{
  int num1 = 10;
  int num2 = 20;
  int max  = 0;
  if(num1>num2)
  printf("max = %d\n",num1);
  else
  printf("max = %d\n",num2);
  return 0;
}
*/











/*int Max(int x,int y)
{
if(x > y)
   return x;
else
   return y;

}

int  mian()
{
  int num1 = 10;
  int num2 = 20;
  int max  = 0;
  max = Max(num1,num2);
  printf("max = %d\n",max);

	return 0;
}*/