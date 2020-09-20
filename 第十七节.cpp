#include<stdio.h>
int main()
{
  int a = 10;
  char c = 'r';
  char* p = &c;
  int arr[10] = {0};
//sizeof 计算的变量所占内存空间的大小，单位是字节 
   printf("%d\n",sizeof(a));//4
   printf("%d\n",sizeof(int));

   printf("%d\n",sizeof(c));//1
   printf("%d\n",sizeof(char));



   printf("%d\n",sizeof(p));//4(32位的机器)
   printf("%d\n",sizeof(char*));


   printf("%d\n",sizeof(arr));
   printf("%d\n",sizeof(int[10]));//40  //去掉数组名剩下的就是数组的类型int[10]
  return 0;
}



{
   int a = 10；
    printf("%d\n",!a);//a ==10;10为真，！a将真变成假，输出结果为0（假）1为（真）
    if(!a)
	{
   	printf("hehe"); 
	
	int* p = &a;//取地址操作符
	   *p = 20;  //解引用操作符
   return 0;
}






/*{
 int a = 10;
 a = a + 2;
 a += 2;
 
 a = a >> 1;
  a >>= 1;

 a = a & 1;
 a &= 1;

 return 0;

}
*/







/*{
    int num = 0;
    int count = 0;
  scanf("%d",&num);
  int i = 0;
  for(i=0;i<32;i++)
  {
  if(1 == ((num>>i) & 1))
	  count++;
  }
  printf("%d\n",count);
  return 0;
}
*/





/*{  int num = 0;
  int count = 0;
  scanf("%d",&num);

   //统计num的补码中有几个1
  while (num)
  {
    if(num%2 == 1)
		count++;
	  num = num/2;
  }
  printf("%d\n",count);
  return 0;
}
//求一个整数存储在内存中的二进制中1的个数(此方法无法计算负数)
*/






/*{ 
   int a = 3;
   int b = 5;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf(" a = %d\n b = %d\n",a,b);
   return 0;
}
//不使用第三个变量，更换两个数的位置；方法一：异或法
*/




/*{
  int a = 3;
  int b = 5;
  a = a + b;
  b = a - b;
  a = a - b;

  printf(" a = %d\n b = %d\n",a,b);
  return 0;
}
//不使用第三个变量，更换两个数的位置；方法一：加减法(可会溢出：如果数字过大)
*/






/*{
	// ^ -- 按二进制位异或；
	//相同为0，相异为1；
    int a = 3;
	int b = 5;
	int c = a ^ b;
	//内存中存储的都是补码
	//000000000000000000000011 ——3
	//000000000000000000000101 ——5
    //000000000000000000000110 ——（相同为0，相异为1）
	printf("%d\n",c);
    return 0;
}
*/








/*{
	// | -- 按二进制位或
    int a = 3;
	int b = 5;
	int c = a|b;
	//内存中存储的都是补码
	//000000000000000000000011 ——3
	//000000000000000000000101 ——5
    //000000000000000000000111 ——（单1就1）
	printf("%d\n",c);
    return 0;
}
*/




/*{
   // &--按二进制位与
	int a = 3;
	int b = 5;
	int c = a&b;
	//内存中存储的都是补码
	//000000000000000000000011 ——3
	//000000000000000000000101 ——5
	//000000000000000000000001 ——按位于结果（同1则1）
	printf("%d\n",c);
  return 0;
}
*/






/*{
  int a = -1;
  //
  //正数的二进制表示有：原码，反码，补码
  //存储在内存中的是补码
  //正整数的原码，补码，反码都是一样的
  //负整数有所区别
  //以-1为例：
  //100000000000000000000001——原码
  //111111111111111111111110——符号位不变其他位按位取反， 反码
  //111111111111111111111111——反码加1得    补码   
  int b = a >> 1;
  printf("%d\n",b);
 return 0;
}
*/



/*{
	int  a = -1;
	 int b = 0;
 //>>  --右移操作符移位的是二进制数，
	//

    int b = a >> 1; 

 printf("%d\n",b);

  return 0;
}
*/


/*{
  int a = 5 / 2 ; //商2余1
  //两个整数的除法商为整数，如果其中一个为浮点数，才能打印出来小数；
  //
  printf("a = %d\n",a);
  return 0;
}
*/