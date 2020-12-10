#include "stdio.h"



bool isPalindrome(int x){
	if (x < 0)
	{
		return false;
	}
	else if (x < 10)
	{
		return true;
	}
	else
	{
		long num = 0;
		int c = x;
		while (x != 0)
		{
			num = num * 10 + x % 10;
			x = x / 10;
		}
		printf("%d w %d\n", num, c);
		if (num == c)
		{
			return true;
		}
		return false;
	}
}

int main(int argc, char const *argv[])
{
	long x = 121;
	int res = isPalindrome(x);

}

