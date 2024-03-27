#include <iostream>

using namespace std;

int main() {
    // 좌표평면을 나타내는 2차원 배열
    int xy[100][100] = {0,};

    // 입력받을 x좌표와 y좌표
    int x1, y1;
    int x2, y2;

    int n, m;

    // 면적을 계산할 변수
    int count = 0;

    cin >> n >> m;

    // x, y좌표를 입력받아 면적을 계산하는 반복문
    for(int i = 0; i < n; i++) { // 4번을 입력받기 위한 4번 돌아가는 반복문
        cin >> x1 >> y1 >> x2 >> y2; // 각각의 좌표를 입력 받는다.
        for(int j = x1 - 1; j < x2; j++) { // 입력한 2개의 x좌표만큼 반복
            for(int k = y1 - 1; k < y2; k++) { // 입력한 2개의 y좌표만큼 반복
                xy[j][k] += 1; // 해당하는 좌표를 1로 바꾸어 면적을 계산
            }
        }
    }

    // 2차원 배열에서 1의 개수를 세기 위한 반복문
    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            if(xy[i][j] > m) { // 만약 2차원 배열의 값이 1이면
                count++; // 면적을 1 증가
            }
        }
    }

    cout << count;

    return 0;
}