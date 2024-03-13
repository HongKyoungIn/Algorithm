#include <iostream>

using namespace std;

int main() {
    int t = 0;
    int num[7];

    cin >> t;

    for(int i = 0; i < t; i++) {
        int sum = 0;
        int min = 100;

        for(int j = 0; j < 7; j++) {
            cin >> num[j];

            if(num[j] % 2 == 0) {
                sum = sum + num[j];
                if(num[j] < min) {
                    min = num[j];
                }
            }
        }
        cout << sum << " " << min << endl;
    }
}