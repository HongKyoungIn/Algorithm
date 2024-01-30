#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int m;
    int a, b, c;

    cin >> n >> m;
    
    int *array;
    array = new int [n];
    
    for(int i = 0; i < m; i++){
        cin >> a >> b >> c;
        for(; a <= b; a++) {
            array[a-1] = c;
        }
    }
    
    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    
    return 0;
}