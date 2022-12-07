#define  _CRT_SECURE_NO_WARNINGS 1
#include"day4.h"
void juzhen() 
{
	int n;
	scanf("%d", &n);
	int a[30][30];
	int x = 1;
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++) 
		{
			a[i][j] = x;
			x++;
		}
	}
	printf("%d ", a);
}