#include <stdio.h>

int add(int, int);
int sub(int, int);
int cale(int (*)(int, int), int, int);
int (*select(char))(int, int);

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}

// 获取结果
int cale(int (*fp)(int, int), int num1, int num2)
{
	return (*fp)(num1, num2);
}

// 根据算式获取对应的函数, 返回一个函数指针：(*)(int, int),  
int (*select(char op))(int, int)
{
	switch(op)
	{
		case '+': return add;
		case '-': return sub;
		default: return add;
	}
}


int main()
{
	int num1, num2;
	char op;
	int (*fp)(int, int);
	printf("请输入算式：");
	scanf("%d%c%d", &num1, &op, &num2);
	fp = select(op);
	printf("结果是 %d \n", cale(fp, num1, num2));
	return 0;
}
