// 头文件
# include "stdio.h"
// 定义不可变常量
# define NAMES "定义不可改变常量消息头信息"

int main(int argc, char const *argv[])
{
	double money = 13.2;
	double cost = 12.1;
	printf("%s BODY %s\n", NAMES, money >= cost ? "YES" : "NO");
	
	int num = 10;
	do
	{
		printf("%s-%d\n", "szhu", num);
		num -= 1;
	}while (num >= 0);
	return 0;
}