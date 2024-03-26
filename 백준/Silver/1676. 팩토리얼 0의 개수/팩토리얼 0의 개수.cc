#include <iostream>

using namespace std;

int main() {
    int n;
    int count = 0;

    cin >> n;

    for(int i = 5; n >= 1; i) {
        count += n / 5;
        n = n / 5;
    }

    cout << count;

    return 0;
}