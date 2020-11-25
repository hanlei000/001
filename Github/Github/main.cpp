/*#include<stdio.h>

int main()

{
	int A = 3, B = 4;

	printf("%d,%d", (A, B), (B, A));

	return 0;

}*/
#include<stdio.h>
int main()
{

	int i = 1, j = 2, k = 3;

	if (i++ == 1 && (++j == 3 || k++ == 3))

		printf("%d %d %d\n", i, j, k);
	return 0;

}
