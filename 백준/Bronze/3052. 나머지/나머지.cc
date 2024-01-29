#include <iostream>
#include <string>

using namespace std;

int main() {
    int n = 10;
    int mod[42] = {0, };
    int temp = 0;
    int count = 0;
    
    int *array;
    array = new int [n];
    
    for(int i = 0; i < n; i++){
        cin >> array[i];
        temp = array[i] % 42;
        mod[temp] = mod[temp] + 1;
    }
    
    for(int i = 0; i < 42; i++) {
        if(mod[i] != 0) {
            count++;
        }
    }
        
    cout << count << endl;
        
    return 0;
}