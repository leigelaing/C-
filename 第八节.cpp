#include<stdio.h>
int main()
{


  return 0;
}
//��������Ϸ��1.���Ի�����һ���������2.������






/*{
	int i = 0;
  double sum = 0;
    int flag = 1;
  for(i=1;i<=100;i++)
  {
  sum += flag*1.0/i;  
   flag = -flag;
  }
  printf("%lf\n",sum);
  return 0;

}
//����1/1-1/2+1/3-1/4.............+1/99-1/100��ֵ����ӡ�����
*/








/*{
  int i = 0;
  double sum = 0;
  for(i=1;i<=100;i++)
  {
  sum += 1.0/i;  //sum = sum + 1.0/i;
  }
  printf("%lf\n",sum);
  return 0;

}
//����1/1+1/2+1/3+1/4.............+1/99+1/100��ֵ����ӡ�����

  
	*/










/*{
   int i = 0;
   int count = 0;
   for(i=0;i<=100;i++)
   {
   if(i%10 == 9)
       count++;
   if(i/10 == 9)
	   count++;
   }
   printf("count=%d\n",count);
	return 0;
}
//��д������һ��1��100�����������г��ֶ��ٸ�����9

*/




/*
{ 
int i = 0;
for(i=100;i<=200;i++)
{
 int j = 0;
 for(j=2;j<i;j++)
 {
  if(i%j == 0)
  {
  break;
  }
 }
 if(j == i)
 {
 printf("%d \n" ,i);
 }

}
 return 0;
}
//�ж��Ƿ�Ϊ�����ķ�����

//1.�Գ���
//��������n�־��磬���ȥ����
*/






/*{
  int year = 0;
  for (year=1000;year<=2000;year++)
  {
  if(year%4 == 0 && year%100 != 0)
  {
   printf("%d ",year); 
  }
  else if(year%400 == 0)
  {
    printf("%d ",year);
  }
  }
  return 0;
}
//�˴����ж�1000��2000֮�������
//�����жϷ�����
//1.�ܱ�4�������Ҳ��ܱ�100�����������ꣻ
//2.�ܱ�400������������

*/



/*{
  int m = 0;
  int n = 0;
  int r = 0;
  scanf("%d %d",&m,&n);
  while(m%n)
  {
     r = m%n;
	 m = n;
	 n = r;
  
  }
 printf("%d\n",n);

  return 0;
}
//շת��������������������Լ��


*/








/*{
  int i = 0;
  for(i=0;i<100;i++)//����ط�û�С�����
  {
	  if(i%3 == 0)
	    printf("%d  ",i);//printf���ӿո��Ҫ����\n ��Ȼ�������־Ͱ���һ���޷�����
  }
  return 0; 
}
*/
// �˴���������ܱ�3����������ȫ����ӡ����







/*{
	int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d",&a,&b,&c);//ע��������ʱÿ�������м������Ͽո񣬲�Ȼ�����޷�ȷ���Ƿ������������
	scanf("%d#%d#%d",&a,&b,&c);//��λ�ü����κ�ֵ����������ֵ��ҲҪͬ�����ϣ�
	if(a<b)
	{
	int tmp = a;
	      a = b;
	     b = tmp;
	}
    if(a<c)
	{
	int tmp = a;
	      a = c;
	    c = tmp;
	}
	if(b<c)
	{
	int tmp = b;
	      b = c;
	    c = tmp;
	}
    printf("%d %d %d\n",a,b,c);

  return 0;
}*/
//�˴����������������Ӵ�С����