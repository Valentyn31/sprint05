int mx_factorial_rec(int n) {
	int res = 1;

	if (n < 0 || n > 12)
		return 0;
	if (n == 0)
		return 1;
	res *= n;
	n--;
	if (n > 1)		
		res *= mx_factorial_rec(n);
	return res;
}
