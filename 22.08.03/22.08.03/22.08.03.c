#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//int input=0 ;
	//printf("调剂到差的专业\n");
	//printf("是否每天努力学习(1/0)\n");
	//scanf("%d", &input);
	//if (input == 1)
	//	printf("成功转专业，甚至保研");
	//else
	//	printf("寄！");
	int day = 0;
	while (day <1000)///这种用括号的语句不用；要用个大括号
	{
		printf("坚持学习的第%d天\n", day);
		day++;
	}
		if (day==1000)
			printf("太牛了我！");
	return 0;



}