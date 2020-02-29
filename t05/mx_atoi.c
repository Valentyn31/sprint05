_Bool mx_isdigit(int c);
_Bool mx_isspace(char c);

int mx_atoi(const char *str) {
	int i = 0;
	int res = 0;
	int flag = 0;

	while (mx_isspace(str[i]))
		i++;
	if (str[i] == '-') 
		flag++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	for ( ; mx_isdigit(str[i] - 48); i++) {
		res += str[i] - 48;
		if (str[i + 1] != '\0')
			res *= 10;
	}
	return flag == 0 ? res : -res;
}
