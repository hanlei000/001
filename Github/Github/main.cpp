/*#include<stdio.h>
long long int r(long m, long n)
{


	long long int  c;


	while (n != 0)
	{
		c = m % n; m = n; n = c;
	}
	return m;
}
int main()
{
	long int i, j;
	if (i <= 0 || j <= 0)
		printf("Input Error");
	scanf_s("%ld %ld", &i, &j);
	printf("%lld %lld", r(i, j), (i * j) / r(i, j));

	return 0;
}*/