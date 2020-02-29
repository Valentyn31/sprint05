#include <stdio.h>
#define MIN_INT 2147483647 

int mx_lcm(int a, int b) {
	long int c = a > 0 ? a : -a;
	long int d = b > 0 ? b : -b;
	long int f = c;
	long int g = d;

	for ( ; f <= MIN_INT || g <= MIN_INT; ) {
		if (f < g)
			f += c;
		else if (g < f)
			g += d;
		else 
			return g | f;
	}
	return -1;

}

int main(void) {
	printf("%d\n", mx_lcm(1, 2147483647));
	return 0;
}
