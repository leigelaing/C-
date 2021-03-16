#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
/*
int main()
{
	const int num = 10;
	const int* p = &num;
	int* const p = &num;
	*p = 20;
	//err     const放在指针变量的左边时，修饰的是*p 也就是说，不能通过p来改变*p（num）的值；
	//err     const放在指针变量的右边时，修饰的是指针变量p本身，p不能被改变了
	
	int n = 100;
	p = &n;
	pritnf("%d\n", num);
	return 0;
}

*/





/*
//模拟实现  strcpy
//作用：字符串的拷贝

//高级版本
void my_strcpy3(char* dest,const char* src)
{
    char* ret = dest; 
	assert(dest != NULL);//断言
	assert(src != NULL);
	while (*src == '\0')
	{
		*dest++ = *src++;//先解引用 再后置加加
	}
	*dest = *src;
	return dest;

}
void my_strcpy2(char* dest, char* src)
{
	if (dest != NULL && src != NULL)
	{
		while (*dest++ = *src++)// \0的ASCII值为 0
		{
			;
		}
	}


}


//普通版
void my_strcpy2(char* dest, char* src)
{
	while (*src == '\0')
	{
		*dest = *src;//覆盖字符
		src++;//指向下一个
		dest++;
	}
	*dest = *src;//将\0拷贝进去
}

int main()
{
	char arr1[] = "###############";
	char arr2[] = "bit";
	my_strcpy(arr1,arr2);//将arr2 中的内容放在arr1中包括\0;
	printf("%s\n", arr2);
	printf("%s\n", arr1);
	return 0;
}

*/



/*
int main() 
{
	int i = 0; 
	int sum = 0;//保存最终结果   
	int n = 0; 
	int ret = 1;//保存n的阶乘  
	scanf("%d", &n);  
	for(i=1; i<=n; i++)
	{     
		int j = 0;  
		ret = 1;
		for(j=1; j<=i; j++)  
		{    
			ret *= j;   
		}       
		sum += ret;  
	}   
	printf("%d\n", sum); 
	return 0; 
} 

*/
/*
int main()
{
	{
		int tmp = 0;
		printf("%d\n", tmp);
	}
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
	}
	
	return 0;
}

*/

/*
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	printf("hehe \n");
	int a = 20;
	int b = 30;
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}

*/


/*
int main()
{
	//断点 F9 切换到断点   ：按F5 （跳到执行逻辑上的断点）打上断点就是程序直接到断点出执行，代码执行到断点停下来
	return 0;
}
*/