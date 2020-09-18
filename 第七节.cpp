#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
//用户输入密码只能循环3次
{
  int i = 0;
  char password[20] = {0};
  for(i=0;i<=3;i++)
  {
    printf("请输入密码:>");
	scanf("%s",password);
	if(strcmp(password , "123456") == 0)   //“==”不能用来比较两个字符串是否相等，应该使用一个库函数，—strcmp
	{
	printf("登录成功\n");
	break;
	}
	else
	{
	printf("密码错误\n");
	}

  }
  if(i == 3)
  {
	  printf("三次输入错误，退出程序\n");
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
 int left = 0;   //数组的左下标
 int right = strlen (arr1) - 1;
//strlen函数作用就是求字符串的长度，遇到\n就直接停止了，所以求出的长度不包括\n这样就与实际数组长度一致了
while(left <= right)
{
 arr2[left] = arr1[left];
 arr2[right] = arr1[right];
 printf("%s\n",arr2);
    Sleep(100);//程序运行休息1000毫秒   注意S大写
    system("cls");//执行系统命令函数，“cls”清空屏幕 
	left++;
	 right--;
}
 printf("%s\n",arr2);
  return 0;
}

*/





/*
学习数组个数后面自带\n   
 char arr1[] = "welcome to bir!!!!!!"
 char arr2[] = "####################"
 int left = 0;//数组的左下标
 int right = sizeof(arr1)/sizeof(arr1[0])-2 //先算出数组的个数，接下来计算数组的下标，此时注意下标不是个数减1，因为数组最后一个默认为\n,比实际看到的元素个数多一个因此要求实际的元素下标就要减2
*/







/*
//折半查找算法或者叫二分查找算法；对应代码
{
int arr[] = {1,2,3,4,5,6,7,8,9,10};
int k = 7;
int left = 0;//左下标
int sz = sizeof(arr)/sizeof(arr[0]);//计算数组个数
int right = sz - 1;//右下标
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
   printf("他妈的找到了，烦死了结果是：%d\n",mid);
   break;
}
}
if(left > right)
{
printf("找不到了\n");
}
 return 0; 
}

*/






/*{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	//写一个代码，在arr数组（有序的）中找到7；
	int i = 0;
	int sh = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<=sh;i++)
	{
		if (arr[i] == k)
		{
		printf("找到了，下标是：%d\n",i);
		break;
		}
		if(i== sh)
		
		{
			printf("找不到/n");
		}
	}
  return 0;
}
*/
//折半查找算法或者叫二分查找算法；







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
ert = 1;   //这个位置需要重新试数
for(i=1;i<=n;i++)
{
 ert = ert * i; 
}
 sum = sum + ert; 
}
printf("%d\n",sum);
 return 0;
}

//以上代码结果1到3阶乘的和；注意数字不要太大，防止溢出
*/





/*{
int i = 0;
int n = 0;
printf("请输入数字\n");
scanf("%d",&n);  //再次注意此位置不能有换行\n 字符，他妈的记住
int ert = 1; //这个初始值不能为0；
for(i=1;i<=n;i++)
{
 ert =ert * i; 
}
printf("%d\n",ert);
 return 0;
}
//此代码计算N的阶乘；

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
//  以上程序1,2,3,4 死循环
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
//以上程序运行结果为1,2,3,4；
*/




/*    //输出1-10的数字
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

//以上代码结果10个hehe
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
//代码结果100个hehe
*/





/*{
for(;;)   //for循环三个条件都可以省略，但是for循环的判断部分（第二部分）被省略，C语言默认for循环横为真，
           //当然也可以省略三个条件中的其中一个
{
  printf("hehe\n");
}
  return 0;
}
*/









/*{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	for(i=0;i<=9;i++)//这种写法不好
	//for(i=0;i<10;i++)//i<10,i=0 就是所说的前面是闭区间，后面是开区间    IF  i<=9 为前闭后闭区间，没有错但不建议
	//10次循环
	//10次打印
	//10个元素
	{
		printf("%d\n",arr[i]);
	}

  return 0;
}*/






/*{
   int i = 0;
   for(i=1;i<=10;i++)
   {
  
   if(i = 5)   //i被改成5，并非判断是否等于5
       printf("haha\n");
	   printf("hehe\n");
   }
  return 0;
}
*/
//以上程序发生死循环，因为变量被认为改为5,10永远小于5，所以死循环




/*//break与continue可以在for循环中使用；

{
	int i = 0;
    for(i = 1;i<=10;i++)
	{
		//if(i == 5)
		//break;
		if(i == 5)
		continue;  //因为执行流程不同所以，在for中不会死循环；
	printf("%d\n",i);
	}
    return 0;
}
*/





/*{   
	int ch = 0;
	int ret = 0;
	char password[20] = {0};
	printf("请输入密码:>");
	scanf("%s",password);//输入密码，并放入password数组中
	//缓冲区还剩余一个\n
	//提前读取\n
	//为什么会多一个\n?因为在输入密码后按了回车键，回车键对应的ASCII为10；所以scanf只会读取密码遗留\n;
	while ((ch = getchar()) != '\n');  //加getchar的用意就是提前读取\n
	printf("请确认(Y/N):>");
	ret = getchar();
	if(ret == 'Y')
	{
	printf("确认成功\n");
	}
    else
	{
		printf("放弃确认\n");
	}
  return 0;
}
//以上代码输入密码为123456 ABC会继续出错；因为scanf只会读空格前面的数字
*/