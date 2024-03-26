#include <iostream>

using namespace std;

int main() {
    // 시험장의 수
    int n;
    cin >> n;

    // 강의실 별 학생 수 배열로 동적할당
    int *a;
    a = new int[n];

    // 총감독관이 감시할 수 있는 수
    int b;

    // 부감독관이 감시할 수 있는 수
    int c;

    // 총 필요한 감독관의 수
    long count = 0;


    // 각 강의실 별 학생수 입력 받기
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // 총감독관, 부감독관이 감시할 수 있는 학생 수 입력 받기
    cin >> b >> c;

    // 감독관의 수 구하는 반복문
    for(int i = 0; i < n; i++) {
        count++; // 강의실 별 최소 1명이상의 총 감독관 배정
        a[i] = a[i] - b; // 총 감독관이 감시할 수 있는 수 빼기
        if(a[i] > 0) {
            count += a[i] / c; // 부감독관 배정하기 위한 나누기
            a[i] = a[i] % c; // 남은 학생 수
            if(a[i] > 0) { // 만약 학생수가 남아있다면
                count++; // 부감독관 추가로 1명 배정
            }
        }
        
        
    }

    cout << count;
    return 0;
}