#include <stdio.h>
#define PI 3.1415926
#define S(a,b) a+b
//#define test
extern int exc(int x,int y);
int main()
{
	printf("PI=%lf\n",PI);
	#undef PI
	double PI=0;
	printf("PI=%lf\n",PI);
	int a=5,b=6;
	int exx=exc(a,b);
	printf("%d,%d\n",exx,b);
	int e;
	e=S(a,b);
	printf("%d\n",e);
	#ifdef test
	printf("a test\n");
	#else
	printf("no test\n");
	#endif
	
	 #ifndef test
	printf("no test\n");
	#else
	printf("a test\n");
	#endif
	
	 #if 1
	printf("真\n");
	#else
	printf("假\n");
	#endif
	return 0;
}