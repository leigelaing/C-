/*#include <stdio.h>
#include <math.h>                //
int main()
{
	int arr[10] = {0};  //10个整型元素的数组
	//10*sizeof(int)=40；
	printf("%d\n",sizeof(arr));
	//计算数组元素的个数；
	//个数=数组总大小/每个元素的大小
	sizeof(arr)/sizeof(arr[0)
 int  a = 10;
 int  b = -a;
 int  c = +a;  //正号可以省略
 printf("%d\n",a);
 printf("%d\n",!a);   //！  将真变为假，假变真；
 printf("%d\n",sizeof(a));  //sizeof计算的是变量/类型所占空间的大小，单位字节； 
 printf("%d\n",sizeof(int));//与上一行代码等价 
 printf("%d\n",sizeof a);   //与上一行代码相同
 printf("%d\n",sizeof int);//这种写法是错误的
return 0；
}






/*{
  int a = 10;
      a = 20;   //   =  赋值     ==   判断相等
	  a = a + 10; //
	  a += 10;    //与 a = a + 10等价
      a = a - 20; //
	  a -= 10;   
// 注意复合赋值符   ：  
  return 0;
}*/












/*{
    int a1 = 3;  //3的二进制为011 
	int b1 = 5;  //5的二进制为101
	int c1 = a1&b1;//按位与   011与101    真为1  假为0   同真为真   结果为001   十进制1 
printf("%d\n",c1);

    int a2 = 3;  //3的二进制为011
	int b2 = 5;  //5的二进制为101
	int c2 = a2|b2;//按位与或  011与101    真为1  假为0   同假为假   结果为111   十进制7
printf("%d\n",c2);

    int a3 = 3;  //3的二进制为011
 	int b3 = 5;  //5的二进制为101
	int c3 = a3^b3;//按位与或  011与101   异或的计算规律： 对应的二进制相同则为0   对应的二进制相异则为1   结果为110   十进制6
printf("%d\n",c3);

	return 0;
}*/












/*{
int  a = 1;
int  b = a << 2;     //此代码学习左移右移的移位运算符，其中注意移位运算符是一定对应数据的二进制数；
printf("%d\n",b);
return 0;
}
*/











/*{
int  a = 0;
int  b = 0;
int  c = 0;
printf("请输入两个数:>");

scanf("%d  %d",&a,&b);
     c = a + b;
	 printf("%d\n",c);
return 0;

}
*/







/*{
printf("加入C语言阵营\n");
int gantama = 0;
while(gantama <= 50)
{
    printf("滚去敲代码\n") ;
	gantama++;
	
}
 if (gantama >30)
 printf("迎娶十个女的干死她们\n");
 return 0;



}*/




/*int Add(int x, int y) {
 ? ?return x+y; }
/*C语言风格注释
int Sub(int x, int y)
{
 ? ?return x-y;
}

int main()
{
 ? ?       //C++注释风格
 ? ?      //int a = 10;
 ? ?     //调用Add函数，完成加法
 ? ?printf("%d\n", Add(1, 2));
 ? ?return 0; }*/