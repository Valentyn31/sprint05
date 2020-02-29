void mx_printchar(char c);
void mx_printint(int c);
int mx_atoi(const char *str);
_Bool mx_isdigit(int c);

static void print_table(int f, int s, int r) {
	for (int i = r; i <= s; i++) {
		mx_printint(f * i);
		if (i != s)
			mx_printchar('\t');
	}
	mx_printchar('\n');
	if (f < s) {
		f++;
		print_table(f, s, r);
	}
}

int main(int argc, char *argv[]) {
	int f = 0;
	int s = 0;
	int r = 0;

	if (argc != 3)
		return 0;
	f = mx_atoi(argv[1]);
	s = mx_atoi(argv[2]);
	if (!mx_isdigit(f) || !mx_isdigit(s))
		return 0;
	r = f > s ? s : f;
	if (f > s) 
		print_table(s, f, r);
	else 
		print_table(f, s, r);
	return 0;
}
