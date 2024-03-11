#include <stdio.h>
#include <string.h>
int main() {
	int t = 0;
	scanf("%d", &t);
	
	getchar();

	for (int i = 0; i < t; i++)
	{
		char a[1001] = { 0 };
		fgets(a, sizeof(a), stdin);

		printf("%c%c\n", a[0], a[strlen(a) - 2]);
	}
	

	return 0;
}