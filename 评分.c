#define  _CRT_SECURE_NO_WARNINGS 1
#include"day4.h"
void pingfen() 
{
	int a[20];
	double fave=0,lave,count=0;
	int num = 20;
	for (int i = 0; i < 20; i++) 
	{
		scanf("%d", &a[i]);
		fave = fave + a[i];
	}
	lave = fave;
	fave = fave / 20;
	printf("������ίƽ���֣�%.3f��.\n", fave);
	printf("���ϸ�÷֣�");
	for (int i = 0; i < 20; i++) 
	{
		if (a[i] - fave > 10 || fave - a[i] > 10) 
		{
			printf("%d ", a[i]);
			count++;
			lave = lave - a[i];
			num--;
		}
	}
	printf(".\n");
	if (count == 20) 
	{
		printf("�޺ϸ���.\n");
	}
	else 
	{
		printf("���÷֣�%.3f��.\n", lave/num);
	}
	
}