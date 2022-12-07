#define  _CRT_SECURE_NO_WARNINGS 1
#include"day4.h"
#include<math.h>
long long int zhuan(int a) 
{
	long long int z=0;
	if (a == 2) 
	{
		return 10;
	}
	else
	{
		for (int i = 0; 1 ; i++)
		{
			if (a == 1 || a == 0)
			{
				z = z + a * pow(10, i);
				break;
			}
			if (a % 2 == 0)
			{
				z = 0 * pow(10, i) + z;
				a = a / 2;
			}
			else
			{
				z = 1 * pow(10, i) + z;
				a = a / 2;
			}
		}
		return z;
	}
}
void erjinzhi() 
{
	int a;
	while (scanf("%d", &a)) 
	{
		long long int x=zhuan(a);
		printf("%lld\n", x);
	}
}