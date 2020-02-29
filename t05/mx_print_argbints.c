int mx_atoi(const char *str);
void mx_printint(int n);
void mx_printchar(char c);

static void reverse(int c, int *buf) {
	int i = 0;
	int flag = c > 0 ? 1 : -1; 
	int n = (c == 1 || c == -1) ? 0 : 1;

	for (i = 31; (c / 2) * flag > 1; 
		 i--, c /= 2)
		buf[i] = (c % 2) * flag;
	buf[i] = (c % 2) * flag;
	buf[i - 1] = n == 1 ? 1 : 0; 
	if (flag == -1) {
		for (i = 0; i < 32; i++)
			buf[i] = (buf[i] - 1) * -1;
		for (i = 31; i >= 0; i--) 
			if (buf[i] != 0)
				buf[i] = 0;
			else {
				buf[i] = 1;
				break;
		}
	}
}

int main(int argc, char *argv[]) {
	int i = 0;
	int buf[32];
	int j = 0;

	for (i = 1; i < argc; i++) {
		for (j = 0; j < 32; j++) 
			buf[j] = 0;
		j = mx_atoi(argv[i]);
		if (j == 0 && argv[i][0] != 48)
			continue;
		if (j != 0)
			reverse(j, buf);
		for (j = 0; j < 32; j++)
			mx_printint(buf[j]);
		mx_printchar('\n');
	}
	return 0;
}
