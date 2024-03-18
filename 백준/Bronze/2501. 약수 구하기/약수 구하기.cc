#include <iostream>

using namespace std;

int main() {
	int count = 0;
    int p, n;
    int k = 0;
    
    cin >> p >> n;
    
    for(int i = 1; i <= p; i++) {
        if(p % i == 0){
            count++;
            if(count == n) {
                k = i;
            }
        }
    }
    
    if(count < n){
        cout << '0';
    }
    else{
        cout << k;
    }

	return 0;
}