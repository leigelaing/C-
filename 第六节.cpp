#include <stdio.h>
int main()

// EOF ��˼��end  of  file   ʵ��ֵΪ-1
{
 int ch = 0;
 while((ch = getchar()) != EOF)  //getchar����Ctrl+z��ʱ��������EOF�������н���
 {
   putchar(ch);
 }
   return 0;
}




/*{
  int ch = getchar();//getchar������˼�ǽ���һ�������ַ���
  putchar(ch);       // putchar����Ϊ��ӡ�����ַ�����printf������ͬ
  printf("%d\n",ch);
  return 0;

}*/





/*{  int i = 1;
   while(i<=10)
 { 
	i = i + 1;
    if(i == 5)	
	continue;   //�ж�continue����ĳ��򣬷��ؼ���ִ��ѭ����
    printf("sum = %d\n",i);
 
 }

return 0;
}*/











/*//�˴���ѧϰcontinue��˼Ϊ������������˼�����Ϊ1,2,3,4������û�н�����
//continue��break֮�������break��ֱ�ӳ�����������continue�����·���������ѭ����

{
	int i = 1;

 while(i<=10)
 {
    if(i == 5)
		continue; 
     printf("sum = %d\n",i);
	 i = i + 1;
 
 }
  return 0;
}
*/




//�˴���ѧϰ��break��ѭ���е�һ��ʹ�÷���

/*{
	int i = 1;

 while(i<=10)
 {
    if(i == 5)
		break; //��ѭ�������У�break���Խ���ѭ���������Ľ�����ֹ
     printf("sum = %d\n",i);
	 i = i + 1;
 
 }
  return 0;
}*/








/*{
printf("������һ������:\n");
int day = 0;

scanf("%d",&day);   //ע�����scanfλ�ò�Ҫ��\nҲ���ǻ���

switch (day)
{
 case 1:
 case 2:
 case 3:   //break Ϊ������switch��䣻
 case 4:
 case 5:
    printf("������\n");
	break;
 case 6:
 case 7:
    printf("��Ϣ��\n");
	break;
 default:    //������switch����е��κ�һ���ִ��default��䣬Ҳ�ɲ��ӣ���ü��Ϸ��㴦��Ƿ����  λ��û���ϸ�Ŀ��ƣ�ǰ����Ӱ�죻
	printf("����Ǹ�����\n");
    break;
}
 return 0;												
}*/












/*{
printf("������һ������:\n");
int day = 0;

scanf("%d",&day);   //ע�����scanfλ�ò�Ҫ��\nҲ���ǻ���

switch (day)
{
 case 1:
    printf("����һ\n");
	break;
 case 2:
    printf("���ڶ�\n");
	break;
 case 3:
    printf("������\n");
	break;                //break Ϊ������switch��䣻
 case 4:
    printf("������\n");
	break;
 case 5:
    printf("������\n");
 case 6:
    printf("������\n");
	break;
 case 7:
    printf("������\n");
	break;
}
 return 0;												
}
*/




//�˳���û��break�ж���䣬case���ֻ��ȷ�������￪ʼ����������break˵����

/*switch (day)
{
 case 1:
    printf("����һ\n");
 case 2:
    printf("���ڶ�\n");
 case 3:
    printf("������\n");
 case 4:
    printf("������\n");
 case 5:
    printf("������\n");
 case 6:
    printf("������\n");
 case 7:
    printf("������\n");
}*/				








/*{	printf("������һ������\n");
	int day = 0;
	scanf("%d",&day);
   if(day % 2 != 0)
	   printf("����\n");
   else 
	   printf("ż��\n");

	return 0;

}
*/






/*{
	printf("������һ������\n");
	int day = 0;
	scanf("%d",&day);
	if(1 == day)
		printf("����һ\n");
	else if(2 == day)
        printf("���ڶ�\n");
    else if(3 == day)
        printf("������\n");

    else if(4 == day)
        printf("������\n");
    else if(5 == day)
        printf("������\n");
    else
        printf("����ѧ\n"); 



return 0;
}
*/
//����д��̫����������switch��������






/*{
int  a = 0;
while(a <= 100)
{
if(a%2 == 1)
printf("����=%d\n",a);   
   a++;

}
return 0;
}
// ���100���ڵĻ���
*/






/*{
 int num = 1;
 //  ����д�����漰������������бȽ����ʱ��������������࣬���������Ҳ࣬�磺5 == X
 if(num == 5)  //=��ֵ  == �ж����   ��ֹBUG
 {
  printf("hehe\n");
 }
 return 0;
}*/







/*{
    //��ν��else������������û��ƥ���ifƥ������⣺�Ӵ�����
if(a == 1)
{if(b == 2)
  printf("hehe\n");
}
else     
  printf("haha\n");	
	
	return 0;


}



{
int a = 0;
int b = 2;
if(a == 1)
    if(b == 2)
		printf("hehe\n");
	else      //elseһ������ý�����û��ƥ���if����ƥ��
		printf("haha\n");
  return 0;
}

*/








/*{  
	int age = 88;
    if(age < 18)
    printf( "δ����\n");
    else
	{
	if(age>=18 && age<=28)
	printf("�Ҳ٣�С�������˿���\n");
    else if(age>=28 && age<=58)
    printf("�Ҳ٣��Ͻ���\n");
    else if(age>=58 && age<=98)
    printf("�Ҳ٣��Ͻ�ȥ��\n");
    else
    printf("�������\n");

	}
    return 0;
}
*/










/*{
	int age = 25;
    if(age < 18)
    printf( "δ����\n");
     else if(age>=18 && age<=28)//����д����ȷ

	//else if( 18<=age <=28)  //����д���ǲ��ԵΣ�
	printf("�Ҳ٣�С�������˿���\n");
     else if(age>=28 && age<=58)
    printf("�Ҳ٣��Ͻ���\n");
	else  //������else����ʡ��
	printf("�����趼���Ǵ���\n");
	return 0;
}*/








/*{
	int age = 20;
    if(age < 18)
    printf( "δ����\n");
	else
	printf("�����趼���Ǵ���\n");
	return 0;
}
*/








/*{
	int age = 20;
    if(age < 18)
    printf( "δ����\n");
	return 0;
}
*/


/*{
  
	;//�����ѧϰ

  return 0;
}*/