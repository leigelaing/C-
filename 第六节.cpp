#include <stdio.h>
int main()

// EOF 意思是end  of  file   实际值为-1
{
 int ch = 0;
 while((ch = getchar()) != EOF)  //getchar遇到Ctrl+z的时候程序等于EOF程序运行结束
 {
   putchar(ch);
 }
   return 0;
}




/*{
  int ch = getchar();//getchar函数意思是接受一个键盘字符；
  putchar(ch);       // putchar函数为打印出来字符；与printf基本相同
  printf("%d\n",ch);
  return 0;

}*/





/*{  int i = 1;
   while(i<=10)
 { 
	i = i + 1;
    if(i == 5)	
	continue;   //中断continue后面的程序，返回继续执行循环；
    printf("sum = %d\n",i);
 
 }

return 0;
}*/











/*//此代码学习continue意思为“继续”的意思，结果为1,2,3,4但程序并没有结束；
//continue与break之间的区别，break是直接程序跳出，而continue是重新返回往上面循环；

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




//此代码学习了break在循环中的一种使用方法

/*{
	int i = 1;

 while(i<=10)
 {
    if(i == 5)
		break; //在循环过程中，break可以进行循环有条件的进行终止
     printf("sum = %d\n",i);
	 i = i + 1;
 
 }
  return 0;
}*/








/*{
printf("请输入一个数字:\n");
int day = 0;

scanf("%d",&day);   //注意这个scanf位置不要加\n也就是换格

switch (day)
{
 case 1:
 case 2:
 case 3:   //break 为了跳出switch语句；
 case 4:
 case 5:
    printf("工作日\n");
	break;
 case 6:
 case 7:
    printf("休息日\n");
	break;
 default:    //不符合switch语句中的任何一项即可执行default语句，也可不加，最好加上方便处理非法情况  位置没有严格的控制，前后无影响；
	printf("你就是个二货\n");
    break;
}
 return 0;												
}*/












/*{
printf("请输入一个数字:\n");
int day = 0;

scanf("%d",&day);   //注意这个scanf位置不要加\n也就是换格

switch (day)
{
 case 1:
    printf("星期一\n");
	break;
 case 2:
    printf("星期二\n");
	break;
 case 3:
    printf("星期三\n");
	break;                //break 为了跳出switch语句；
 case 4:
    printf("星期四\n");
	break;
 case 5:
    printf("星期五\n");
 case 6:
    printf("星期六\n");
	break;
 case 7:
    printf("星期天\n");
	break;
}
 return 0;												
}
*/




//此程序没有break中断语句，case语句只能确定从哪里开始，结束根据break说了算

/*switch (day)
{
 case 1:
    printf("星期一\n");
 case 2:
    printf("星期二\n");
 case 3:
    printf("星期三\n");
 case 4:
    printf("星期四\n");
 case 5:
    printf("星期五\n");
 case 6:
    printf("星期六\n");
 case 7:
    printf("星期天\n");
}*/				








/*{	printf("请输入一个数字\n");
	int day = 0;
	scanf("%d",&day);
   if(day % 2 != 0)
	   printf("基数\n");
   else 
	   printf("偶数\n");

	return 0;

}
*/






/*{
	printf("请输入一个数字\n");
	int day = 0;
	scanf("%d",&day);
	if(1 == day)
		printf("星期一\n");
	else if(2 == day)
        printf("星期二\n");
    else if(3 == day)
        printf("星期三\n");

    else if(4 == day)
        printf("星期四\n");
    else if(5 == day)
        printf("星期五\n");
    else
        printf("不上学\n"); 



return 0;
}
*/
//以上写法太繁琐，所以switch函数出现






/*{
int  a = 0;
while(a <= 100)
{
if(a%2 == 1)
printf("基数=%d\n",a);   
   a++;

}
return 0;
}
// 输出100以内的基数
*/






/*{
 int num = 1;
 //  后续写代码涉及常量与变量进行比较相等时，将常量放在左侧，变量方在右侧，如：5 == X
 if(num == 5)  //=赋值  == 判断相等   防止BUG
 {
  printf("hehe\n");
 }
 return 0;
}*/







/*{
    //如何解决else与离得最近并且没有匹配的if匹配的问题：加大括号
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
	else      //else一般与离得近并且没有匹配的if进行匹配
		printf("haha\n");
  return 0;
}

*/








/*{  
	int age = 88;
    if(age < 18)
    printf( "未成年\n");
    else
	{
	if(age>=18 && age<=28)
	printf("我操！小鸡鸡被人砍了\n");
    else if(age>=28 && age<=58)
    printf("我操！赶紧滚\n");
    else if(age>=58 && age<=98)
    printf("我操！赶紧去死\n");
    else
    printf("我他妈的\n");

	}
    return 0;
}
*/










/*{
	int age = 25;
    if(age < 18)
    printf( "未成年\n");
     else if(age>=18 && age<=28)//这种写法正确

	//else if( 18<=age <=28)  //这种写法是不对滴，
	printf("我操！小鸡鸡被人砍了\n");
     else if(age>=28 && age<=58)
    printf("我操！赶紧滚\n");
	else  //最后这个else可以省略
	printf("早他妈都不是处了\n");
	return 0;
}*/








/*{
	int age = 20;
    if(age < 18)
    printf( "未成年\n");
	else
	printf("早他妈都不是处了\n");
	return 0;
}
*/








/*{
	int age = 20;
    if(age < 18)
    printf( "未成年\n");
	return 0;
}
*/


/*{
  
	;//空语句学习

  return 0;
}*/