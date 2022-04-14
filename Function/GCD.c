int gcd(int a, int b) // uoc chung lon nhat great common divisor
{
	if (b == 0) return a;
	return gcd(b, a%b);
}
