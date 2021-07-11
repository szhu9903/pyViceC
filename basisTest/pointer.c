/* // 指针基础
 int main()
 {
 	// 定义无符号整数
 	unsigned int i = 5;
 	// 定义存放 整数i的内存地址的指针，指向i的内存id
 	// int * 为定义指针， 参数前加&符号获取内存地址
 	unsigned int *p = &i;
 	// 定义空指针, 空指针不能使用*p 不存在， 可通过if(p)方式检测指针
 	unsigned int *q = NULL;
 	printf("num %d\n", &i);
 	if (p)
 	{
 		printf("p存放num的地址：%d, p的地址:%d, 通过指针访问num的值%d \n", p, &p, *p);		
 	}

 	// 指针运算 ,不改变指针存储实际值的情况下移动指针, 指针移动的字节数取决于指针指向变量数据的字节数
 	printf("new proint %d\n", p++);

 	return 0;
 }
*/
// const int MAX = 3;

/* 指针操作数组
void prtdata(int arr[], int m)
{
	int i, *ptr;
	// 指针指向数组第一个数据地址， 默认指向第一个地址 可写作 ptr = arr;
	ptr = &arr[0];
	// 指针遍历数组，实际应该是没有任何卵用，
	for (ptr; ptr <= &arr[m - 1]; ptr++)
	{
		printf("获取数据arr[%d]:%d \n", ptr, *ptr);
	}
}

int main()
{
	int arr[] = {10, 100, 1000};
	// 数组长度，arr[m]: 数组最大内存位置
	int m = sizeof(arr)/sizeof(arr[0]);
	// 这里先计算出数组长度是因数组传递到函数中实际是传递的指针，函数内使用sizeof计算的是指针的长度
	prtdata(arr, m);
	return 0;

}
*/
/* 指针数组
#include <stdio.h>

int main()
{
	char *point_array[5] = {
		"JAVA",
		"Python",
		"C",
		"C++",
		"GO"
	};
	printf("test data %s", point_array[0]);
	for(int i = 0; i < 5; i++)
	{
		printf("data %s \n", point_array[i]);
	}
	return 0;
}
*/


/* 数组指针
#include <stdio.h>

int main()
{
	int tmp[5] = {1, 2, 3, 4, 5};
	int (*targer)[5] = &tmp;
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("test data %d \n", *(*targer + i));
	}
	return 0;
}
	
*/


// #include <stdio.h>

// int main()
// {
// 	int num = 1222;
// 	int *pn = &num;
// 	char *pc = "szhu";
// 	void *vp;

// 	vp = pn;
// 	printf("pn: %p , vp: %p\n", pn, vp);
// 	printf("num %d \n", *(int *)vp);
// 	vp = pc;
// 	printf("pc: %p, vp:%p \n", pc, vp);
// 	printf("vp %s \n", (char *)vp);
// 	return 0;
// }


/* 指针的指针
#include <stdio.h>

int main()
{
	char *tmp[6] = {
		"java",
		"Python",
		"C",
		"C++",
		"VUE",
		"Flask"
	};
	char **mylike;
	char **alltest[5];
	mylike = &tmp[1]; //指向指针的地址，指向指针的指针
	alltest[0] = &tmp[0];
	alltest[1] = &tmp[2];
	alltest[2] = &tmp[3];
	alltest[3] = &tmp[4];
	alltest[4] = &tmp[5];
	printf("my like %s \n", *mylike);
	printf("all test %s  \n", *alltest[1]);
	return 0;
}
*/


#include <stdio.h>

int sum(int);

int sum(int num)
{
	if (num > 0)
	{
		return (num + 1) * (num / 2);
	}
	return 0;
}

int main()
{
	int num;
	printf("请输入无符号数字：");
	scanf("%d", &num);
	printf("计算结果 %d \n", sum(num));
	return 0;
}

































