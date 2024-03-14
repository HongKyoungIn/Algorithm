#include <iostream>

using namespace std;

int main() {
    int n = 0;
    int score[5] = {0,};
    int max = 0;
    int index;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> n;
            score[i] += n;
        }
    }

    for(int i = 0; i < 5; i++) {
        if(max <= score[i]) {
            max = score[i];
            index = i;
        }
    }

    cout << index + 1 << " " << score[index];

    return 0;
}