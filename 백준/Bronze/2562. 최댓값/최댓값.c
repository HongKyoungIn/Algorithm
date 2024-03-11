#include <stdio.h>
#include <string.h>
int main() {
	
	int t = 0, o = 0;

	int a[10] = { 0 };
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] > t)
		{
			t = a[i];
			o = i;
		}
	}
	
	printf("%d\n%d", t, o +1);
	return 0;
}