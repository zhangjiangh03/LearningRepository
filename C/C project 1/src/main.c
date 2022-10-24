#include <stdio.h>
#include "sumxy.h"
extern int max(int x, int y);
extern int min(int x, int y);
int main()
{	int numMax,numMin;
	int a, b;
	printf("请输入\n");
	scanf("%d %d", &a, &b);
	numMax = max(a, b);
	printf("最大值为%d\n", numMax);
	numMin = min(a, b);
	printf("最小值为%d\n", numMin);
	int sum;
	sum=sumxy(a,b);
	printf("和为%d\n", sum);
	return 0;
}