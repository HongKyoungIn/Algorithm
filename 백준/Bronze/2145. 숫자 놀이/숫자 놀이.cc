#include <iostream>

using namespace std;

int main() {
    int n;
    int sum;

    while(1) {
        cin >> n;
        sum = n;
        if(n == 0) {
            break;
        }
        else {
            while(sum >= 10) {
                int temp = 0;
                for(int i = 100000; i >= 1; i /= 10) {
                    temp += sum / i;
                    sum = sum % i;
                }
                sum = temp;
            }
            cout << sum << endl;
        }
    }

    return 0;
}