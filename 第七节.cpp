#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
//�û���������ֻ��ѭ��3��
{
  int i = 0;
  char password[20] = {0};
  for(i=0;i<=3;i++)
  {
    printf("����������:>");
	scanf("%s",password);
	if(strcmp(password , "123456") == 0)   //��==�����������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯������strcmp
	{
	printf("��¼�ɹ�\n");
	break;
	}
	else
	{
	printf("�������\n");
	}

  }
  if(i == 3)
  {
	  printf("������������˳�����\n");
  }
	  return 0;
}






/*#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
 char arr1[] = "welcome to bir!!!!!!";
 char arr2[] = "####################";
 int left = 0;   //��������±�
 int right = strlen (arr1) - 1;
//strlen�������þ������ַ����ĳ��ȣ�����\n��ֱ��ֹͣ�ˣ���������ĳ��Ȳ�����\n��������ʵ�����鳤��һ����
while(left <= right)
{
 arr2[left] = arr1[left];
 arr2[right] = arr1[right];
 printf("%s\n",arr2);
    Sleep(100);//����������Ϣ1000����   ע��S��д
    system("cls");//ִ��ϵͳ���������cls�������Ļ 
	left++;
	 right--;
}
 printf("%s\n",arr2);
  return 0;
}

*/





/*
ѧϰ������������Դ�\n   
 char arr1[] = "welcome to bir!!!!!!"
 char arr2[] = "####################"
 int left = 0;//��������±�
 int right = sizeof(arr1)/sizeof(arr1[0])-2 //���������ĸ���������������������±꣬��ʱע���±겻�Ǹ�����1����Ϊ�������һ��Ĭ��Ϊ\n,��ʵ�ʿ�����Ԫ�ظ�����һ�����Ҫ��ʵ�ʵ�Ԫ���±��Ҫ��2
*/







/*
//�۰�����㷨���߽ж��ֲ����㷨����Ӧ����
{
int arr[] = {1,2,3,4,5,6,7,8,9,10};
int k = 7;
int left = 0;//���±�
int sz = sizeof(arr)/sizeof(arr[0]);//�����������
int right = sz - 1;//���±�
while(left <= right)
{
int mid = (left + right)/2;
if (arr[mid] > 7)
{
   right = mid - 1;
}
else if(arr[mid] < 7)
{
    left = mid + 1;
}
else 
{
   printf("������ҵ��ˣ������˽���ǣ�%d\n",mid);
   break;
}
}
if(left > right)
{
printf("�Ҳ�����\n");
}
 return 0; 
}

*/






/*{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	//дһ�����룬��arr���飨����ģ����ҵ�7��
	int i = 0;
	int sh = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<=sh;i++)
	{
		if (arr[i] == k)
		{
		printf("�ҵ��ˣ��±��ǣ�%d\n",i);
		break;
		}
		if(i== sh)
		
		{
			printf("�Ҳ���/n");
		}
	}
  return 0;
}
*/
//�۰�����㷨���߽ж��ֲ����㷨��







/*{   int n = 0;
	int ret = 1;
    int sum = 0;
	for(n=1;n<=3;n++)
	{
	ret = ret * n;
	sum = sum + ret;
	}
printf("%d\n",sum);
	return 0;
}
*/





/*{
int i = 0;
int n = 0; 
int ert = 1;
int sum = 0;
for(n=1;n<=3;n++)
{
ert = 1;   //���λ����Ҫ��������
for(i=1;i<=n;i++)
{
 ert = ert * i; 
}
 sum = sum + ert; 
}
printf("%d\n",sum);
 return 0;
}

//���ϴ�����1��3�׳˵ĺͣ�ע�����ֲ�Ҫ̫�󣬷�ֹ���
*/





/*{
int i = 0;
int n = 0;
printf("����������\n");
scanf("%d",&n);  //�ٴ�ע���λ�ò����л���\n �ַ�������ļ�ס
int ert = 1; //�����ʼֵ����Ϊ0��
for(i=1;i<=n;i++)
{
 ert =ert * i; 
}
printf("%d\n",ert);
 return 0;
}
//�˴������N�Ľ׳ˣ�

*/





/*{
  int i = 1;
do
{
   if(i == 5)
   continue;
   printf("%d\n",i);
   i++;
}
 while(i <= 10);
 
 return 0;
}
//  ���ϳ���1,2,3,4 ��ѭ��
*/






/*{
  int i = 1;
do
{
   if(i == 5)
      break;
   printf("%d\n",i);
    i++;
}
 while(i <= 10);
 
 return 0;
}
//���ϳ������н��Ϊ1,2,3,4��
*/




/*    //���1-10������
{
int i = 1;
do
{
printf("%d\n",i);
    i++;
}
while(i <= 10);
  return 0;
}
*/






/*{
	int i = 0;
	int j = 0;
	for(;i<10;i++)
	{
	for(;j<10;j++)
	{
	printf("hehe\n");
	}
	}
return 0;
}

//���ϴ�����10��hehe
*/





/*
{
	int i = 0;
	for(i=0;i<10;i++)
	{
	int j = 0;
	for(j=0;j<10;j++)
	{
	printf("hehe\n");
	}
	}
return 0;
}
//������100��hehe
*/





/*{
for(;;)   //forѭ����������������ʡ�ԣ�����forѭ�����жϲ��֣��ڶ����֣���ʡ�ԣ�C����Ĭ��forѭ����Ϊ�棬
           //��ȻҲ����ʡ�����������е�����һ��
{
  printf("hehe\n");
}
  return 0;
}
*/









/*{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	for(i=0;i<=9;i++)//����д������
	//for(i=0;i<10;i++)//i<10,i=0 ������˵��ǰ���Ǳ����䣬�����ǿ�����    IF  i<=9 Ϊǰ�պ�����䣬û�д�������
	//10��ѭ��
	//10�δ�ӡ
	//10��Ԫ��
	{
		printf("%d\n",arr[i]);
	}

  return 0;
}*/






/*{
   int i = 0;
   for(i=1;i<=10;i++)
   {
  
   if(i = 5)   //i���ĳ�5�������ж��Ƿ����5
       printf("haha\n");
	   printf("hehe\n");
   }
  return 0;
}
*/
//���ϳ�������ѭ������Ϊ��������Ϊ��Ϊ5,10��ԶС��5��������ѭ��




/*//break��continue������forѭ����ʹ�ã�

{
	int i = 0;
    for(i = 1;i<=10;i++)
	{
		//if(i == 5)
		//break;
		if(i == 5)
		continue;  //��Ϊִ�����̲�ͬ���ԣ���for�в�����ѭ����
	printf("%d\n",i);
	}
    return 0;
}
*/





/*{   
	int ch = 0;
	int ret = 0;
	char password[20] = {0};
	printf("����������:>");
	scanf("%s",password);//�������룬������password������
	//��������ʣ��һ��\n
	//��ǰ��ȡ\n
	//Ϊʲô���һ��\n?��Ϊ������������˻س������س�����Ӧ��ASCIIΪ10������scanfֻ���ȡ��������\n;
	while ((ch = getchar()) != '\n');  //��getchar�����������ǰ��ȡ\n
	printf("��ȷ��(Y/N):>");
	ret = getchar();
	if(ret == 'Y')
	{
	printf("ȷ�ϳɹ�\n");
	}
    else
	{
		printf("����ȷ��\n");
	}
  return 0;
}
//���ϴ�����������Ϊ123456 ABC�����������Ϊscanfֻ����ո�ǰ�������
*/