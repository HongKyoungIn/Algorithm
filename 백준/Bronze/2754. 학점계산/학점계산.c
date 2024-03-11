#include <stdio.h>
#include <string.h>
int main() {
	char a[10];
	fgets(a, sizeof(a), stdin); //stdin : 키보드에서 데이터를 입력을 받겠다는 의미.

	double score =0;
	if (a[0] == 'A')
	{
		score = 4;
	}
	else if (a[0] == 'B')
	{
		score = 3;
	}
	else if (a[0] == 'C')
	{
		score = 2;
	}
	else if (a[0] == 'D')
	{
		score = 1;
	}

	if (a[1] == '+')
	{
		score += 0.3;
	}
	else if (a[1] == '-')
	{
		score -= 0.3;
	}
	printf("%.1f", score);

	return 0;
}