#include <unistd.h>

void mx_printint(int n) {
	if (n != 0) {
		char num[20];
		int i = 0;
		long number = n;
		if (number < 0) {
			write(1, "-", 1);
			number = -number;
		}
		while (number != 0) {
			 num[i++] = number % 10 + '0';
			 number /= 10;
		}
		for (int j = i - 1; j >= 0; j--)
			write(1, &num[j], 1);
	} else write(1, "0", 1);
}
