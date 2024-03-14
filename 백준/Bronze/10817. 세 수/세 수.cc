#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int num[3];//세수 배열
	for (int i = 0; i < 3; i++)
	{
		cin >> num[i];
	}

	sort(num, num+3);

	cout << num[1];//두번째수 출력
	
	return 0;
}