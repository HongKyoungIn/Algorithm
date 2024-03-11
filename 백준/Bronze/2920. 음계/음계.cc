#include <iostream>
using namespace std;

int main() {
    int num[8];
    bool isAscending = true;
    bool isDescending = true;

    for(int i = 0; i < 8; i++) {
        cin >> num[i];
    }

    for(int i = 0; i < 7; i++) { // 연속된 두 음을 비교하기 때문에 배열의 마지막 전까지만 반복
        if(num[i] < num[i+1]) {
            isDescending = false; // 하나라도 오름차순이면 내림차순이 아님
        } else if(num[i] > num[i+1]) {
            isAscending = false; // 하나라도 내림차순이면 오름차순이 아님
        }
    }

    if(isAscending) {
        cout << "ascending" << endl;
    } else if(isDescending) {
        cout << "descending" << endl;
    } else {
        cout << "mixed" << endl;
    }

    return 0;
}
