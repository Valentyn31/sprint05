void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, 
const char *s2);

int main(int argc, char *argv[]) {
	if (argc < 2)
		return 1;
	char *swap;
	int flag = 1;
	int i = 1;

	while(flag > 0) {
		for (flag = 0, i = 1; i < argc - 1; i++) {
			if (mx_strcmp(argv[i], 
				argv[i + 1]) > 0) {
				swap = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = swap;
			}
		}
		for (i = 1; i < argc - 1; i++)
			if (mx_strcmp(argv[i], 
				argv[i + 1]) > 0)
				flag++;
	}
	for (i = 1; i < argc; i++) {
		mx_printstr(argv[i]);
		mx_printchar('\n');
	}
	return 0;
}
