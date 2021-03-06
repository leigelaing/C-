#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//打印杨辉三角
//1
//1 1
//1 2 1 
//1 3 3 1
//1 4 6 4 1
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10;i++)
	{
		for (j = 0; j < 10;j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;//列为0  行不断增加  打印 1
			}
			if (i == j)
			{
				arr[i][j] = 1; // 对角线  全部变为 1
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	//打印
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)//j <= i为了打印为三角形
		{
			printf("%d ",arr[i][j]);
		}
	    	printf("\n");
	}
	return 0;
}






/*
int main()
{
	//-128 - 127
	char a[1000] = { 0 };
	int i = 0;
	for (i = 0; i < 1000; i++)
	{
		a[i] = -1 - i;
	}
	//-1     -2    -128    127   126   125    3   2  1  0 
	printf("%d\n",strlen(a));//找 \0 跟找0是一样的
	return 0;
}
*/




/*

//在32为大端模式处理器上变量b等于多少 
int main()
{
	unsigned int a = 0x1234;
	unsigned char b = *(unsigned char*)&a;
	printf("%d\n", b);//结果为 0x00
	return 0;
}
*/



/*
结果：300  44  
int main()
{
	unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;
	//unsigned char 1个字节  8个bit位
	//   char    -128 - 127
	//unsigned char  0 - 255
	c = a + b;
	//有符号位整型提升符号位 
	//00000000 00000000 00000000 11001000 ——a
	//00000000 00000000 00000000 01100100——b
	//00000000 00000000 00000001 00101100——a+b——不往c中存储——补码
	//a + b会发生整型提升
	//00101100——c——存入c中的结果

	//00000000 00000000 00000000 11001000
	//11001000 ——a
	//00000000 00000000 00000000 01100100
	//01100100——b
	printf("%d %d",a+b,c);//发生整型提升 
	return 0;
}

*/








/*
//将数组中将所有偶数换在前面
//1.从左边开始找一个偶数
//2.从右边开始找一个奇数
//把他们交换
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//从左边找偶数
		while ((left < right) && arr[left] % 2 == 1)//左边找偶数，奇数就跳过
		{
			left++;
		}
		//从右边找奇数
		while ((left < right) && arr[right] % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
	
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);
	return 0;
}

*/




/*
//喝汽水，1瓶汽水1元  2个空瓶可以换1瓶汽水，给20元  一共可以有多少瓶汽水
int main()
{
	int money = 0;//出的钱数
	int total = 0;//瓶子数
	int empty = 0;//换的瓶子数
	scanf("%d ", &money);
	//方法二
	if (money == 0)
	{
		total = 0;
	}
	else
	{
		total = 2 * money - 1;
	}
	
	
	//方法一
	//买回来的汽水喝掉
	total = money;
	empty = money;
	//换回来的汽水数
	while (empty >= 2)
	{
		total += empty / 2;//兑换后瓶子总数
		empty = empty / 2 + empty % 2;//喝完以后再次兑换

	}
	printf("瓶子总数  %d\n", total);

	return 0;
}
*/


