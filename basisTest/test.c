# include "stdio.h"

/*
	scanf("%f", &weight); 读取用户输入
	\a :警告¨
	strlen : 字符串长度
	string.h : 字符串依赖导入
*/

int main()
{
	// 数组初始化，初始化其中部分元素
	int arr[10] = {5, 6};
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}


/* 实例
#include <windows.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a = 2880;
	system("color 0a");
	while (a >= 0)
	{

		time_t nowtime = time(NULL);
		struct tm *now;
		now = localtime(&nowtime);
		printf("[%04d-%02d-%02d %02d:%02d:%02d]\n", 
		now->tm_year+1900, now->tm_mon+1, now->tm_mday, 
		now->tm_hour, now->tm_min, now->tm_sec);
		Sleep(10000);
		system("cls");
		a = a - 1;
	}
	return 0;
}
*/














