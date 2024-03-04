#include <iostream>

using namespace std;

int main() {

	string s;
    int count = -1;

	cin >> s;
    
    for (char i = 'a'; i <= 'z'; i++) {
		cout << (int)s.find(i) << ' ';
	}


	return 0;
}