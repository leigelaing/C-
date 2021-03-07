#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>










/*
//strstr 库函数学习——查找字符串
//NULL——空指针   NUL/Nul  ——\0   
//strstr函数  是从开始的那个地址开始一致往后打印  假设 abcdefign 中找def   但打印出来的是defign  
//abcdefign 中找defh   这个是找不到的
//abcdefabcdef   这种情况下返回的是defabcdef   是从第一个开始算起

//模拟实现
char*  my_strstr(const char* p1,const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = (char*)p1;//将const 修饰的指针赋给不受保护的指针会有警告 所以需要强制类型转换一下
	if (*p2 == '\0')
	{
		return (char*)p1;//当 p2为空字符串时直接返回p1
		
	}
	while (*cur) //cur放的是p1的首元素地址，如果为0 那就不用进入循环了，直接返回找不到
	{
		s1 = cur; //p1的首元素地址给s1
		s2 = (char*)p2;   //p2的首元素地址给s2
		//开始对比
		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
			//首元素地址不能等于0  并且两个都还要相等
		{
			s1++;
			s2++;
		}
		//对比到s2指向\0  
		if (*s2 == '\0')
		{
			return cur;//找到子串
		}
		if (*s1 == '\0')
		{
		return cur;//找到子串
		}
		     cur++; //循环条件有一个不能满足，重新开始
	}
	       return NULL;//找不到子串
}



int main()
{
	char* p1 = "abcdefjjjjj";
	char* p2 = "def";
	char* ret = my_strstr(p1, p2);//在p1中找p2字符串 
	if (ret == NULL)
	{
		printf("子串不存在\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}

*/





/*
int main()
{
    //strncmp _字符串比较
	const char* p1 = "abcdef";
	const char* p2 = "abcqwer";
	int ret1 = strcmp(p1, p2);
	int ret2 = strncmp(p1, p2,3);//p2的前4个字符串与p1进行比较
	printf("%d\n",ret1);
	printf("%d\n", ret2);
	return 0;
}
*/





/*
//strncat库函数的学习 
//追加过程 有三种情况  追加的个数 大于arr2（如果大于arr2不论后面是什么情况只追加完成arr2中的内容然后再添\0就OK） 
//小于arr2  等于arr2（这两种情况一致，追加完需要实际需要后，最后再添\0,OK）    
int main()
{
	char arr1[30] = "hellow\0xxxxxxxxxx";
	char arr2[] = "word";
	strncat(arr1, arr2, 8);  //将arr2中的内容追加在arr1的后面，一共追加arr2中8个字符
	printf("%s\n", arr1);
	return 0;
}

*/







/*

//strcpy库函数学习  是 将arr2中的内容拷贝在arr1中，拷贝是覆盖。这个函数有问题在于，空间不够也可以完成拷贝
int main()
{
	char arr1[5] = "abc";//arr1空间只有3个字节
	char arr2[] = "hellow  bit";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}
*/


/*
//strncpy库函数的学习（有空模拟实现）
int main()
{
	char arr1[10] = "abc";//arr1空间只有3个字节
	char arr2[] = "hellow  bit";
	strncpy(arr1, arr2,4);//将arr2中前4个字符拷贝在arr1中
	//如果拷贝的arr1中的字符串够用，没有\0  
	char arr1[10] = "abc";//
	char arr2[] = " bit";
	strncpy(arr1, arr2, 4);
	//将arr2中前4个字符拷贝在arr1中，此时注意arr2中只有3个字符，要拷贝4个后面的利用\0补够要求
	printf("%s\n", arr1);
	return 0;
}
*/
