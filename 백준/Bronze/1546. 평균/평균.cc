#include <iostream>

using namespace std;

int main() {
    int n;
    double max = -1;
    double sum = 0.0;

    cin >> n;

    int *array;
    array = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> array[i];
        if(array[i] > max) { // 점수 중 가장 높은 점수를 가진 값 찾는 과정
            max = array[i];
        }
    }

    for(int i = 0; i < n; i++) {
        sum = sum + ((double(array[i]) / max) * 100); // 정수를 double 형으로 변환
    }

    cout << (double)(sum / (double)n) << endl;

    return 0;
}
