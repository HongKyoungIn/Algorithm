#include <iostream>

using namespace std;

int main(void) {
    int n;

    cin >> n;

    int *array;
    array = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(array[i] > array[j]) {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << array[i] << endl;
    }

    return 0;
}