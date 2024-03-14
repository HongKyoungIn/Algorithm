#include <iostream>

using namespace std;

int main() {
    int t = 0;
    int num[7];
    bool odd = false;
    int sum = 0;
    int min = 100;

    for(int j = 0; j < 7; j++) {
        cin >> num[j];

        if(num[j] % 2 != 0) {
            odd = true;
            sum = sum + num[j];
            if(num[j] < min) {
                min = num[j];
            }
        }
    }

    if(odd == false) {
            cout << -1 << endl;
        }
    else {
        cout << sum << endl;
        cout << min << endl;
    }
}