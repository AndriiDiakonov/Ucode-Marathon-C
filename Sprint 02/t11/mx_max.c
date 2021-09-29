int mx_max(int, int, int);

int mx_max(int a, int b, int c) {
	if ((a > b && a > c) || (a > b && a == c) || (a == b && a > c))
		return a;
	else if ((b > a && b > c) || (b > a && b == c) || (b > c && b == a))
		return b;
	else if ((c > a && c > b )|| (c > a && c == b) || (c > b && c == a))
		return c;
}
