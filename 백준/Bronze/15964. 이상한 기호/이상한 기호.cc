#include <iostream>

using namespace std;

long Hyo(long a, long b) {
    long sum;
    sum = (a + b) * (a - b);
    return sum;
}

int main() {
	long a, b;
    
    cin >> a >> b;
    
    cout << Hyo(a, b);

	return 0;
}