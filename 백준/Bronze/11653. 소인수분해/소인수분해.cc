#include <iostream>

using namespace std;

void primeFactors(int n) {
    // 2부터 시작하여 n의 제곱근까지의 수로 나누어 소인수를 찾음
    for (int i = 2; i * i <= n; i++) {
        // i가 n의 소인수인 경우
        while (n % i == 0) {
            cout << i << endl;
            n /= i;
        }
    }
    // n이 소수인 경우
    if (n > 1) {
        cout << n << endl;
    }
}

int main() {
    int n;
    cin >> n;

    primeFactors(n);

    return 0;
}
