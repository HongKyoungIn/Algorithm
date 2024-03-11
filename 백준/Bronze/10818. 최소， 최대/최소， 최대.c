#include <stdio.h>
#include <stdio.h>
int main() {
	long long n, min = 1000000, max = -1000000;
	scanf("%lld", &n);

	long long* a = (long long*)malloc(sizeof(long long) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &a[i]);
		if (a[i] > max)
		{
			max = a[i];
		}

		if (a[i] < min)
		{
			min = a[i];
		}
	}
	printf("%lld %lld", min, max);
	free(a);
	return 0;
}