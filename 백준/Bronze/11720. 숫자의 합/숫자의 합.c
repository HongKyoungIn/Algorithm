#include <stdio.h>
#include <string.h>
int main() {
	
	int n,r=0;
	scanf("%d", &n);

	char a[101] = { 0 };
	scanf("%s", &a);
	for (int i = 0; i < n; i++)
	{
		a[i] -= '0';
		r += a[i];
	}
	printf("%d", r);
	return 0;
}