#include<stdio.h>
#include <string.h>
void add(int* p)
{
  (*p)++ ; //һ��Ҫ�ǵø�*p�����ţ���Ϊ���������Ǹ�p++�������������ǣ�*p��++��
}

int main()
{
  int  num = 0; 
  add(&num);
  printf("num = %d\n",num);
  add(&num);
  printf("num = %d\n",num);
  add(&num);
  printf("num = %d\n",num);
 return 0;
}








/* 
int binary_search(int arr[],int k,int sz)  
	 //����ط�����ȥ�Ǹ��βδ��������飬ʵ��Ϊ����arr��Ԫ�صĵ�ַ
	 //ʵ���ϱ�λ��д��arr[],��һ��ָ��
{
  int left = 0;
  int right = sz - 1;

  while(left <= right)
  {
   int mid = (left + right)/2;  //�м�Ԫ���±�
    if(arr[mid] < k)
  {
     left = mid + 1; 
  }
    else if(arr[mid] > k)
  {
     right =mid - 1;
  }
  else
  {
	return mid;
  }

 }
  	return -1;
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int ret = binary_search(arr,k,sz);
	if(ret == -1)
	{
	printf("�Ҳ���\n");
	}
	else
	{
	printf("�ҵ���:%d\n",ret);
	}

  return 0;
}
//���ֲ��ң���һ�����������в��Ҿ����ĳ����
//����ҵ��˷��أ���������±꣬�Ҳ�������-1
*/







/*int   is_leap_year( int y)
{
   if((y%4==0&&y%100!=0) ||(y%400==0))
   {
	   return 1;
   }
   else
   {
       return 0;
   }
}
int main()
{
   int year = 0;
   for(year=1000;year<=2000;year++)
   {
     if(1 == is_leap_year(year))    //����1�����꣬���Ƿ���0��
	 {
	 printf("%d  ",year);
	 }
   }
  return 0;
}

*/







/*is_prime(int n)
{
  int j = 0;
  for(j=2;j<n;j++)//for(j=2;j<=sqrt(n);j++) //�ҵ�2��n-1������ȥ�����������������0�ǾͲ���������
  {
  if(n%j == 0)
  
	  return 0;
  }
   if(j == n)
	  return 1;//����������1��������������0
}
int main()
{
  int i = 0;
  for(i=100;i<=200;i++)
  {
  if(is_prime(i) == 1)
  {
	  printf("%d\n",i);
  }
  }
  return 0;
} 
*/




/*  
 void swap2(int*pa,int*pb)//��������Ҫ�ӷ���ֵ��ǰ���void 
{
    int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
  int a = 10;
  int b = 20;
  printf("a = %d  b = %d\n ",a,b);
  return 0;
}
*/










/*{
int a = 10;
int* pa = &a;//paΪָ�����
*pa = 20;   //�����ò���
printf("%d\n",a); 
return 0;
}
*/



/*{
  char arr1[] = "bit";   //bit ���滹������\0;//\0Ϊ�ַ����Ľ�����־����������ݲ��ٴ�ӡ��
  char arr2[20] = "#########";  //������\0Ҳ�����ˣ�
  strcpy(arr2,arr1);
  printf("%s\n",arr2);
	return 0;

}
//������˼��arr1�е����ݷ���arr2�У�
//strlen - strlen-string  length-�ַ��������й�
//strcpy - string-copy   copy  -�ַ�������  
//memset  -  memory  -�ڴ�    set- ����






/*int add(int x,int y)
{
  int z = 0;
  z = x + y; 
  return z;
}
int main()
{
  int a = 10;
  int b = 20;
  int sum = add(a,b);
  printf("sum = %d\n",sum);


  return 0;
}
*/