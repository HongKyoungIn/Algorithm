#include <iostream>
#include <cstring>
using namespace std;

int main() {

	int t = 0, num;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int sum = 0, min = 100;
		for (int j = 0; j < 7; j++)
		{
			cin >> num;
			if (num % 2 == 0)
			{
				sum += num;
				if (num < min)
				{
					min = num;
				}
			}

		}
		cout << sum << " " << min << '\n';
	}

	return 0;
}

