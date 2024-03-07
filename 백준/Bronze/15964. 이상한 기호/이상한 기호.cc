#include <iostream>

using namespace std;

int Hyo(int a, int b) {
    int sum;
    sum = (a + b) * (a - b);
    return sum;
}

int main() {
	int a, b;
    
    cin >> a >> b;
    
    cout << Hyo(a, b);

	return 0;
}