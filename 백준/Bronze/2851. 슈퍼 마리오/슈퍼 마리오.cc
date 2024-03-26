#include <iostream>

using namespace std;

int main() {
    // 버섯 점수를 저장할 배열
    int score[10];

    // 획득한 버섯 점수를 더하여 저장할 변수
    int sum = 0;

    // 버섯 점수 입력 받기
    for(int i = 0; i < 10; i++) {
        cin >> score[i];
    }

    // 100에 가까운 수 찾는 반복분
    for(int i = 0; i < 10; i++) { // score배열 순차적으로 탐색
        if(abs(100 - sum) >= abs(100 - (sum + score[i]))) { // 만약 현재 sum값과 현재 배열의 값을 더한 값 중 어느게 더 100에 근사한지
            sum += score[i];
        }
        else { // 만약 현재 값이 100과의 차이가 더 작다면 break;
            break;
        }
    }

    cout << sum; // 출력

    return 0;
}