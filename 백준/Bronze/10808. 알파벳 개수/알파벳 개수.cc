#include <iostream>

using namespace std;

int main() {

	char s[101] = { 0 };
	int num[26] = { 0 };
	cin >> s;


	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (s[i] - 'a' == j)
			{
				num[j]++;
			}
		}
	}

	for (int j = 0; j < 26; j++)
	{
		cout << num[j] << " ";
	}
	return 0;
}

