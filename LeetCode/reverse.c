/* 整数反转 */

#include "stdio.h"

int reverse(int x)
{
	long long int res = 0;
	while (x != 0)
	{
		res = (res * 10) + (x % 10);
		x = x / 10;
	}
	return -2147483648>res||res>2147483647?0:res;

}

int main()
{
	long int res, x = 1534236469;
	res = reverse(x);
	printf("%ld \n", res);
	return 0;
}
