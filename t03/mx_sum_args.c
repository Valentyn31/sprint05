int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);
_Bool mx_isdigit(int c);

int main(int argc, char *argv[]) {
	int res = 0;
	int flag = 0;

	for (int i = 1, j = 0; i < argc; i++, j = 0) {
		if (mx_atoi(argv[i]) != 0) {
			if (argv[i][j] == '-' 
				|| argv[i][j] == '+')
				j = 1;
			for (flag = 0; argv[i][j] != '\0'; j++)
				if (!mx_isdigit(argv[i][j] - 48))
					flag++;
			if (flag == 0)
				res += mx_atoi(argv[i]);
		}
	}
	mx_printint(res);
	mx_printchar('\n');
	return 0;
}

