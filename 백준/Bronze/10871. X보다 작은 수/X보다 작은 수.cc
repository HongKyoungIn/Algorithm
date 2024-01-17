#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int x;

    cin >> n >> x;
    
    int *array;
    array = new int [n];
    
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    
    for(int i = 0; i < n; i++) {
        if(array[i] < x) {
            cout << array[i] << " ";
        }
    }
    
    return 0;
}