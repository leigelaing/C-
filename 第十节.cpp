#include<stdio.h>
#include<string.h>
 int my_strlen(int str)
 {
  if(*str != '\0')
  
  return 1 + my_strlen(str+1)
  else
  return 0;
 }


int main()
{
 char arr[] = "bit";
 int len = my_strlen(arr);
 return 0; 
}
//�õݹ�ķ������ַ�������




/*int my_strlen(char* str)  //str ������ǵ�һ��Ԫ�صĵ�ַ��
{
  int count = 0;    //*str�������b
  while(*str != '\0')
  {
     count++;
	  str++;
  }
   return count;
}
int main()
{
 char arr[] = "bit";
 int len = my_strlen(arr);//arr���飬���鴫�Σ�����ȥ�Ĳ�������������ǵ�һ��Ԫ�صĵ�ַ
 printf("%d\n",len);
 return 0;
}
 //���ϳ������б�д��һ��strlen����(��ӡ�ַ�������)
*/







 //int len = strlen(arr);//���ַ�������
 //printf("%d\n",lem);
 //return 0;
//}






/*
void print(int n)
{
if(n > 9)
{
  print(n/10);
}
}

int main()
{
  unsigned int num = 0;
  scanf("%d",$num);
  print(num);
  return 0;
}
*/






/*{
   printf("hehe\n");
   main();  //main �����Լ������Լ�
  
  return 0;   //�ݹ鳣������stack overflow��ջ���
}
*/