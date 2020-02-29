#include <stdio.h>

int mx_factorial_iter(int n) {
	int res = 1;

	if (n < 0 || n > 12) 
		return 0;
	if (n == 0)
		return 1;
	for ( ; n > 1; n--)
		res *= n;
	return res;
}

int main(void) {
	printf("%d\n", mx_factorial_iter(5));
	return 0;
}
