#include <stdio.h>
#include <string.h>
int main() {
	long a, b, r;
	scanf("%ld %ld", &a, &b);

	r = (a + b) * (a - b);

	printf("%ld", r);
	return 0;
}