#include <iostream>

using namespace std;

int main() {
    char a[10001] = {'\0', }; // 10000자리수 a를 입력 받기 위한 캐릭터 배열 선언
    char b[10001] = {'\0', }; // 10000자리수 b를 입력 받기 위한 캐릭터 배열 선언

    cin >> a;
    cin >> b;

    long sum = 0;

    for(int i = 0; i < 10000; i++) {
        if(a[i] != '\0') { // a배열에 저장되어 있는 데이터가 널이 아니라면
            for(int j = 0; j < 10000; j++) {
                if(b[j] != '\0') { // b배열에 저장되어 있는 데이터가 널이 아니라면
                    sum += (long)(a[i] - '0') * (long)(b[j] - '0'); // 각 자리수마다 계산하여 정수형으로 저장
                }
                else {
                    break; // null 만나면 브레이크
                }
            }
        }
        else {
            break; // null 만나면 브레이크
        }
    }

    cout << sum;

    return 0;
}