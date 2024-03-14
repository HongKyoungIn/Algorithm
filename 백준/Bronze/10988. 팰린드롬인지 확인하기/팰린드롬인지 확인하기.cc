#include <iostream>

using namespace std;

int main() {
	string str;
    int pel = 0;
    
    cin >> str;
    
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == str[str.length() - 1 - i]) {
            pel = 1;
        }
        else {
            pel = 0;
            break;
        }
    }
    
    cout << pel;

	return 0;
}