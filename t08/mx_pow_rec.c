#include <stdio.h>

double mx_pow_rec(double n, 
unsigned int pow) {

	if (pow == 0)
		return 1;
	if (pow == 1) 
		return n;
	else 
		return n * (mx_pow_rec(n, pow - 1));
	return n;
}

int main(void) {
	printf("%.2f\n", mx_pow_rec(10, 10));
	return 0;
}
