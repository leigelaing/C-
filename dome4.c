#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<assert.h>
/*
//strcat库函数学习
//strcat 见到\0开始追加，追加到另一个\0后停止
//NULL 空指针  为   0
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;//最后要返回结果，过程中有改变，先保存初始地址
	assert(dest != NULL);
	assert(src);
	//1.找到目的字符串的\0
	while (*dest != '\0')
	{
		dest++;
	}
	//追加字符串
	while (*dest++ = *src++)  
		{
		   ;
		 }
	    return ret;
}


int  main()
{
	//这种写法arr1空间已经被固定，不能再往后增加  
	
	char arr1[] = "hellow";//err
	//正确的写法是 
	char arr1[60] = "hellow";//必须给出数组大小
	//这种写法也OK，从\0开始追加  
	char arr1[] = "hellow\0xxxxxxxxxxxxxxx";

	char arr2[] = "word";
	strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
*/





/*
//strcpy库函数学习
//  注意可不能是常量字符串   哪个不可以修改
char* my_strcpy(char* dest, const char* src)
{
	
	assert(dest != NULL);
	assert(src != NULL);
	//\0   ASCII值为 0 
	//while循环的第二种写法
	//while(*dest++ = *src++)  //*dest++ = *src++  先解引用再++    当将\0拷贝进去以后 整体结果为0停止循环
	//{
    //	；
    // }
	
	char* ret = dest; // 保存起始位置的内存空间，因为起始位置在循环中不断变化
	while (*src != '\0')   //将字符串拷贝进去
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src; //  上面拷贝完成后，再将\0 拷贝进去，此时*src 指向的就是\0;
	return ret;//返回起始位置，不论内容是什么都行
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "bit";
	strcpy(arr1, arr2);//arr2中的内容拷贝在arr1中  附带将arr2中的内容全部拷贝在arr1中包括\0
	my_strcpy(arr1, arr2);
	pritnf("%s\n", arr1);//%s  字符串
	return 0;
}

*/










/*
//strlen  函数的学习
//自己实现一共三种方法：（1.计数器的方法，2.递归方法 （不创建临时变量求字符串长度） 3.指针-指针）




//1.计数器的方法
int my_strlen(const char* str)
{
	int  count = 0;
	assert(str != NULL);
	while (*str != '\0')//while(*str)这个也可以，当*str == 0时，为假不进循环
	{
		count++;
		str++;
	}
	    return count;
}

int main()
{
	int len = my_strlen("abcdef");
	//错误示范
	//char arr[]  = {'a','b','c','d','e','f'};
	//int len = my_strlen(arr);


	//输出hehe   还是   haha
	//为什么是hehe结果  因为 库函数的strlen  返回类型为size_t   (size_t 实际对应的类型为unsigned int)
	//而自己写的返回值为int这一点不一样，返回结果当然不一样
	if (strlen("abc") - strlen("abcdef") > 0)
		//      3     -         6       ==    -3    因为-3被当做无符号数来处理所以返回值是大于0的数
	{
		printf("hehe\n");
	}

	else
	{
		printf("haha\n");
	}



	printf("%d\n", len);
}

*/

