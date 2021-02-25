#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[5] = { 0 };
	arr[1] = 4;
//	int arr[5] = {1,2,3,4,5};
	for (int i = 0; i < 5; i++){
		printf("%d\n", arr[i]);
	}
	return 0;
}
