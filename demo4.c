#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>







/*
int main()
{
	//二维数组
	int a[3][4] = { 0 }; 
	printf("%d\n", sizeof(a));//  48
	printf("%d\n", sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0])); //16
	//将二维数组看成一维数组  a[0] a[1]  a[2]    一行的大小  4个*4个字节 == 16 
   //a[0]相当于第一行作为一维数组的数组名，sizeof（arr[0]）把数组名单独放在sizeof（）内部，计算第一行的大小
	printf("%d\n", sizeof(a[0] + 1)); //4/8
	//a[0]相当于第一行作为一维数组的数组名，数组名此时是代表首元素地址 +1  还是地址（地址是第一行第二个元素地址）
	printf("%d\n", sizeof(*(a[0] + 1)));//4
	//与上面有联系，是第一行第二个元素  大小为 4个字节
	printf("%d\n", sizeof(a + 1));//4
	//a是二维数组的数组名，没有sizeof（数组名）也没有&数组名  所以a是首元素地址，
	//a+1  就是第二行的地址
	//而把二维数组看成一维数组时，二维数组的首元素是它的第一行，a就是第一行（首元素）的地址
	printf("%d\n", sizeof(*(a + 1)));//16
	//第二行的地址数组解引用
	printf("%d\n", sizeof(&a[0] + 1));//4
	//第二行的地址
	printf("%d\n", sizeof(*(&a[0] + 1)));//16
	//第二行的地址解引用  一共4个元素  16个字节大小
	printf("%d\n", sizeof(*a));//16
	//a是首元素地址，就是第一行的地址 *a就是第一行  sizeof(*a)计算第一行的大小
	printf("%d\n", sizeof(a[3]));//16字节
	//sizeof  在计算过程中不会访问对应数组括号中的东西不参与真是运算，所以实际是否存在无关紧要。
	//所以假设默认有第四行，照常计算即可 
	return 0;
}

*/




/*
int main()
{
	char* p = "abcdef";//常量字符串  将a的地址给p
	//a b c d e f \0

	printf("%d\n", strlen(p));//6   从a往后数
	printf("%d\n", strlen(p + 1));// 从b往后数
	printf("%d\n", strlen(*p));//
	//a传入 读出为97 非法访问空间
	printf("%d\n", strlen(p[0]));//同上
	printf("%d\n", strlen(&p));//随机值
	//&p  是取出p的地址开始往后数，鬼知道数的是什么
	printf("%d\n", strlen(&p + 1));//
	//同上
	printf("%d\n", strlen(&p[0] + 1));//
	//从b 开始数，数出来的是5
	






	printf("%d\n", sizeof(p));//4/8
	//p是指针变量  计算指针变量p的大小
	printf("%d\n", sizeof(p + 1));// 4/8  p+1得到的是字符b的地址
	
	printf("%d\n", sizeof(*p));//1  *p就是字符串第一个字符  ‘a’
	
	printf("%d\n", sizeof(p[0]));//1   int arr[10]  arr[0] ==  *(arr + 0)   p[0] ==  *(p+0) == 'a'
	
	printf("%d\n", sizeof(&p));//得到的是p的地址
	
	printf("%d\n", sizeof(&p + 1));//  4/8    直接跳过整个p的地址  不过还是地址
	
	printf("%d\n", sizeof(&p[0] + 1));//4/8     p[0] == "a"  取出a的地址，再加1 是b的地址
	return 0;
}
*/







/*
int main()
{
	char arr[] = "abcdef";   //a b c d e f \0
	printf("%d\n", strlen(arr));//6  不数    \0

	printf("%d\n", strlen(arr + 0));// 6  arr（首元素地址） + 0  依据为首元素地址     
	
	printf("%d\n", strlen(*arr));// 这个有问题编译不过去  
	//*arr  对首元素地址进行解引用操作，传入的是   a 的ASCII值为 97 被读出
	
	printf("%d\n", strlen(arr[1]));//
	//传入b字符  ASCII值被读出 98 依旧有问题
	printf("%d\n", strlen(&arr));//  6  不影响结果，但有警告
	//&arr  取的是数组的地址，应该存入数组指针  char（*p）[7] = &arr;
	printf("%d\n", strlen(&arr + 1));//随机值
	//&arr + 1与上面同理
	printf("%d\n", strlen(&arr[0] + 1));//从b的位置继续往后数




	printf("%d\n", sizeof(arr));//表示整个数组   7*1 = 7   sizeof计算数组大小——单位字节

	printf("%d\n", sizeof(arr + 0));//arr + 0 代表首元素地址，计算的是地址   不是 4 就是 8
	
	printf("%d\n", sizeof(*arr));//1  *arr  表示首原素大小为1个字节
	
	printf("%d\n", sizeof(arr[1]));//1  arr[1]表示第二个元素，sizeof（arr[1]）计算的是第二个元素的大小
	
	printf("%d\n", sizeof(&arr)); //4 / 8  &arr虽然是数组的地址，也是地址只有4个或者8个字节
	
	printf("%d\n", sizeof(&arr + 1));//4/8 取地址&arr + 1是跳过整个数组后的地址，但也是地址
	
	printf("%d\n", sizeof(&arr[0] +1));//4 / 8 &arr[0] +1第二个元素的地址  
	return 0;
}

*/

