#include<stdio.h>
int main()
{
	float p=1.0, r = 0.07;
	int n = 10;
	for (n = 1; n <= 10; n++)
	{
		
		p = (1 + r) * p;
		printf("µÚ%dÄê", n);
		printf("%lf\n", p);
	}
	return 0;
}