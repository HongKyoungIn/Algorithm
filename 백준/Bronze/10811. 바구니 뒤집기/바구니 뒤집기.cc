#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int m;
    int a;
    int b;
    int temp;

    cin >> n >> m;
    
    int *array;
    array = new int [n];
    
    for(int i = 0; i < n; i++){
        array[i] = i + 1;
    }
    
    while(cin >> a >> b) {
        reverse(array + a - 1, array + b);
    }
    
    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    return 0;
}