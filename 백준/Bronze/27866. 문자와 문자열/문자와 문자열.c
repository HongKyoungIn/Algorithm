#include <stdio.h>
#include <string.h>
int main() {
	char a[1001];
	fgets(a, sizeof(a), stdin); //stdin : 키보드에서 데이터를 입력을 받겠다는 의미.
	int o = 0;
	scanf("%d", &o);

	printf("%c", a[o - 1]);

	return 0;
}