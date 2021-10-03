# include <stdio.h>
#include <math.h>
#define r  0.07
int main()
{
	//int n =1;
	//double p = 1;
	//while (n <11 )
	//{
		
		//p = (1 + r)*p;
		//printf("µÚ%dÄê=%lf\n", n, p);
		// n++;
		
	//};
	float p,  n;
	n = 10;
	p = pow(1 + r, n);
	printf("p=%f\n", p);
	
	return 0;
}