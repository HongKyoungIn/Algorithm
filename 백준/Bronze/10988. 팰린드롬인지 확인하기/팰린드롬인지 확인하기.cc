#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char word[101];
	cin >> word;

	int end = strlen(word);

	for (int i = 0; i < end; i++)
	{
		if (word[i] == word[end - i - 1])
		{
			if (i >= end / 2)
			{
				cout << 1;
				break;
			}
		}
		else
		{
			cout << 0;
			break;
		}
	}
	return 0;
}

