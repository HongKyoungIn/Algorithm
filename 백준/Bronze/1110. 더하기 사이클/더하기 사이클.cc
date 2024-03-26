#include <iostream>

using namespace std;

int main() {
    int n;
    int num[2];
    int temp;
    int count = 0;

    cin >> n;
    temp = n;

    while(1) {
        count++;

        if(n < 10) {
            num[0] = 0;
            num[1] = n;
        }
        else {
            num[0] = n / 10;
            num[1] = n % 10;
        }

        n = num[1] * 10 + ((num[0] + num[1]) % 10);

        if(n == temp) {
            break;
        }
    }
    cout << count;

    return 0;
}