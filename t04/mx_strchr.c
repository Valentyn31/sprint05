#define NULL ((void*)0)

char *mx_strchr(const char *s, int c) {
	int i = 0;

	while (s[i] && s[i] != c)
		i++;
	return (s[i] == c) ? (char*)s + i : NULL;
}
