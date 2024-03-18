#include <iostream>

using namespace std;

int main() {
	int n;
    int apple, student;
    int mod = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> apple >> student;
        mod += student % apple;
    }
    
    cout << mod;

	return 0;
}