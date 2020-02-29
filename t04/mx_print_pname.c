#define NULL ((void*)0)

void mx_printstr(const char *s);
char *mx_strchr(const char *s, int c);
void mx_printchar(char c);

int main(int argc, char *argv[]) {
	char *res = argv[0];

	if (argc > 0) {
		while (mx_strchr(res, 47) != NULL) {
			res = mx_strchr(res + 1, 47) + 1;
		}
		mx_printstr(res);
		mx_printchar('\n');
	}
	return 0;
}
