#include <stdio.h>

int main() {
	int a;
	a = 2, 3, 4, 5;
	printf("%d\n", a);
	a = (2, 3, 4, 5);
	printf("%d\n", a);
	return 0;
}