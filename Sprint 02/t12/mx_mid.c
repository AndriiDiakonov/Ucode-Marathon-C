int mx_mid(int, int, int);

int mx_mid(int a, int b, int c) {
	if ((a > b &&  a< c) || (a == b && a < c) || (a == b && a > c) || (a == c && a < b) || (a == c && a > b) || (a == c && c == b))
		return a;
	else if ((b > a && b < c)||(b == c && b > a)||(b == c && b < c)||(b == a && b > c) || (b == a && b < c))
		return b;
	else if ((c > a && c < b) || (c == a && c < b) || (c == a & c > b) || (c == b && c < a) || (c == b && c > a))
		return c;
}
