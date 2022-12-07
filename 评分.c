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
	printf("所有评委平均分：%.3f分.\n", fave);
	printf("不合格得分：");
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
		printf("无合格打分.\n");
	}
	else 
	{
		printf("最后得分：%.3f分.\n", lave/num);
	}
	
}