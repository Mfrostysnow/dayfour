#define  _CRT_SECURE_NO_WARNINGS 1
#include"day4.h"
#include<math.h>
int issushu(int x) 
{
	int flag = 0;
	for (int i = 2; i < pow(x,0.5) + 1; i++)
	{
		if (x % i == 0) 
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
		return 1;
	else
		return 0;
}
void fenjie(int x) 
{
	int b[100] = { 2,3,5,7,11,13,17,19,23,29,31,37 };
	printf("%d=", x);
	int count = 0, flag = 0;
	if (issushu(x) != 1) 
	{
		printf("%d\n", x);
	}
	else 
	{
		for (int i = 0; i<101; i++) 
		{
			if (x % b[i] == 0) 
			{
				if (count != 0)
				{
					printf("*");
				}
				printf("%d",b[i]);
				x = x / b[i];
				count++;
				i--;
				if (issushu(x) != 1) 
				{
					printf("*%d\n", x);
					break;
				}
			}
		}
	}
}
void sushu() 
{
	int a;
	do 
	{
		scanf("%d", &a);
		fenjie(a);
	} while (a > 1);
}