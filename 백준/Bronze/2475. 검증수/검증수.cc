#include <iostream>

using namespace std;

int KOI(int a) {
    int num = a % 10;
    return num;
}

int main() {
    int a;
    int sum = 0;
    
    for(int i = 0; i < 5; i++) {
        cin >> a;
        sum += a * a;
    }
    
    cout << KOI(sum);
    
	return 0;
}