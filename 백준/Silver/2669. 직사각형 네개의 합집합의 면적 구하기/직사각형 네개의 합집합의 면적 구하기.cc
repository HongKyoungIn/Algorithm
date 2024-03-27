#include <iostream>

using namespace std;

int main() {
    int xy[100][100] = {0,};
    int x1, y1;
    int x2, y2;
    int count = 0;

    for(int i = 0; i < 4; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j = x1; j < x2; j++) {
            for(int k = y1; k < y2; k++) {
                xy[j][k] = 1;
            }
        }
    }

    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            if(xy[i][j] == 1) {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}