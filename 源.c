#include<stdio.h>
int MaxSubsequenceSum( const int A[], int n)
{
	int ThisSum, MaxSum, i, j, k;
	MaxSum = 0;
	for (i = 0; i < n; i++)
		for (j = i; j < n; j++)
		{
			ThisSum = 0;
			for (k = i; k<= j; k++)
				ThisSum += A[k];
			if (ThisSum > MaxSum)
				MaxSum = ThisSum;
		}
	return MaxSum;
}
int main()
{

	int n = 5;
	int a[5] = { -1,0,1,2,-3 };
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n%d\n", MaxSubsequenceSum(a, 5));
	return 0;
}

	