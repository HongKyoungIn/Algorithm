#include <iostream>
using namespace std;

int main() {
    int N, K;
    int num = 2;
    int kNum = 0;
    int count = 0;

    cin >> N >> K;

    int *array;
    array = new int[N - 1];

    for(int i = 0; i < N - 1; i++) {
        array[i] = i + 2;
    }

    for(int i = 0; i < N - 1; i++) {
        if(array[i] % num == 0) {
            count++;
            if(count == K) {
                kNum = array[i];
                break;
            }
            array[i] = 1;
        }

        if(i == N - 2) {
            i = 0;
            num++;
            continue;
        }
    }
    
    cout << kNum;

    return 0;
}