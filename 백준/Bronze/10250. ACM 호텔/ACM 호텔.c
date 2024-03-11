#include <stdio.h>
#include <string.h>
int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int h, w, n;
		scanf("%d %d %d", &h, &w, &n);

		if (n <= h)
		{
			printf("%d%02d\n", n, 1);
		}
		else if (n % h == 0)
		{
			printf("%d%02d\n", h , n / h);
		}
		else
		{
			printf("%d%02d\n", n% h, n / h + 1);
		}
	}
	return 0;
}