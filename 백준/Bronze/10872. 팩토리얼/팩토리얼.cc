#include <iostream>

using namespace std;

int main() {
	int n;
    int p = 1;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        p = p * i;
    }
    
    cout << p;

	return 0;
}