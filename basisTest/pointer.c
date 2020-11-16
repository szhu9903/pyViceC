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
