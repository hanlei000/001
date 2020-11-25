/*#include <stdio.h>
void q()
{
	int i, j, n = 0, a, b = 0;
	for (a = 1; a <= 3000; a++)
	{
		for (i = 1; i < a; i++)
		{
			if (a % i == 0)
				b = b + i;


		}
		if (b <= 3000 && b > a)
		{
			for (j = 1; j < b; j++)
			{
				if (b % j == 0)
					n = n + j;
			}

		}
		if (a == n)
			printf("(%d,%d)", a, b);
		n = 0, b = 0;

	}
}
	int main()
	{
		q();
		return 0;
	}*/