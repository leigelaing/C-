#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
int MAX(int x,int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int max = 0;
	max = MAX(num1, num2);
	printf("sum = %d\n",max);
	return 0;
}
*/





/*
int f(int x, int y)
{
	int k = 0;
	if (x > y){
		k = x;
	}
	else
	{
		k = y;
	}
	return k;
}
int main()
{
	printf("%d\n",f(20,30));
	return 0;
}

*/




/*
int   main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数！\n");
	scanf("%d %d",&a,&b);
	if (a > b)
	{
		printf("%d\n", a);
	}
	else
	{ 
		printf("%d\n",b);
	}

	return 0;
}
*/


/*
int  main()
{
	//字符串的结束标志为“\0”
	//"abcde"——字符（隐藏一个\0）
	//'\0'——转义字符  对应的ASCII值为0
	//0——数字零
	//'0'——字符零   对应的ASCII值为48
	//EOF ——end  of   file——文件结束标志（ASCII值为-1）
	return 0;

}
*/


/*
int  main()
{
	int arr[] = {0};
	printf("%d\n", sizeof(arr));
	//计算数组的元素个数？
	//个数 = 数组总大小/每个元素的大小；
	int s = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", s);
	//sizeof计算的是变量/类型所占空间的大小，单位为字节；
	int a = 0;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));//不可以省略括号
	printf("%d\n", sizeof a);  //可以省略括号
	return 0;
}
*/


/*
int main()
{  
	int a = -1;
	int b = +2;//正号通常省略不写；
	int a = 10;
	printf("%d\n"!a);
	int b = 0;
	printf("%d\n",!b);  // b 结果等于 1
	return 0;
}

*/


/*
int main()
{
	//位操作（2进制）
	//&  按位与
	//|  按位或
	//^  按位异或
	//异或的运算规则：
	//对应二进制为相同，则为0；
	//对应二进制为相异，则为1；
	int a = 3;
	int b = 5;
	int c = a & b;
	//011
	//101
	//001(按位与结果)
	printf("%d\n",c);
	int d = a | b;
	//011
	//101
	//111(按位与结果)
	printf("%d\n", d);
	int a = 3;
	int b = 5;
	int k = a ^ b;
	printf("%d\n", k);
	return 0;
}

*/



/*
int main()
{    //移位操作符（）2进制
	//<<  >>(左移与右移)
	int a = 1;
	//整型1占4个字节——32个bit位
	//左移右移原数不变
	//左移为左边丢弃右边补零
	//右移
	int b = a << 1;//左移一位
	int c = a << 2;//左移两位
	return 0;
}
*/


/*
int main()
{
	//int arr[10];//定义一个存放10个整数数字的数组
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
	//char arr1[20];
	//float arr2[30];
	//printf("%d\n",arr[5]);//用下标访问元素
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		  i++;
	}
		return 0;
}
*/



/*
int Add(int x, int y)
{
	int sum = 0;
	sum = x + y;
	return(sum);
}
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
    sum = Add(a,b);
	printf("%d\n",sum);
	return 0;
}

*/

/*

int  main()
{
	int a = 3;
	printf("加入比特\n");
	printf("你要好好学习吗！请输入0/1！ \n");
	scanf("%d",&a);
	if (a == 1){
		printf("牛逼！");
	}
	else{
		printf("赶紧滚！");
	}
	return 0;
}
*/