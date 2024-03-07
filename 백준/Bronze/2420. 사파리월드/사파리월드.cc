#include <iostream>

using namespace std;

int main() {
    long n, m;
    long sum;
    
    cin >> n >> m;
    
    if(n > m) {
        sum = abs(n - m);
    }
    else if (m >= n) {
        sum = abs(m - n);
    }
    
    cout << sum << endl;

	return 0;
}