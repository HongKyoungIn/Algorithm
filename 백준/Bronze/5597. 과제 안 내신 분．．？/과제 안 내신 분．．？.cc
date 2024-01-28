#include <iostream>
#include <string>

using namespace std;

int main() {
    int n = 30; // 학생 수

    int *array;
    array = new int[n](); // 학생 수 만큼의 크기를 가진 배열

    int student;

    while(cin >> student) {
        array[student - 1] = student;
    }

    for(int i = 0; i < n; i++) {
        if(array[i] == 0) {
            cout << i + 1 << endl;
        }
    }

    return 0;
}