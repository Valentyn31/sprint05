#include <stdbool.h>

bool mx_isspace(char c) {
	if(c < 9 || (c > 13 && c != 32))
		return false;
	else
		return true;
}
