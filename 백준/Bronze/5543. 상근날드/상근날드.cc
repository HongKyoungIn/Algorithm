#include <iostream>

using namespace std;

int main() {

	int b[3], c[2], t[6];
	int k = 0, min = 4000;
	cin >> b[0] >> b[1] >> b[2] >> c[0] >> c[1];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			t[k] = b[i] + c[j] - 50;
			k++;
		}
	}

	for (int i = 0; i < 6; i++)
	{
		if (t[i] < min)
		{
			min = t[i];
		}
	}
	cout << min;
	return 0;
}

