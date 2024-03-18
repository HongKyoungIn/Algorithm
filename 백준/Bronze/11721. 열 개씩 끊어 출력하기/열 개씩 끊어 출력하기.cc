#include <iostream>

using namespace std;

int main() {
    string str;

    cin >> str;

    if(str.length() < 10) {
        cout << str;
    }
    else {
        for(int i = 0; i < str.length(); i++) { 
            cout << str[i];
            if(i != 0 && i % 10 == 9) {
                cout << endl;
            }
        }
    }

    return 0;
}