int mx_gcd(int a, int b) {
	long int c = a;
	long int d = b;

	if (c < 0)
		c *= -1;
	if (d < 0)
		d *= -1;
	if (a == 0 || b == 0)
		return -1;
	while (c != d) {
		if (c > d)
			c -= d;
		else 
			d -= c;
	}
	return c | d;	
}
