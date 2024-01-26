#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int min;
    int max;

    cin >> n;
    
    int *array;
    array = new int [n];
    
    for(int i = 0; i < n; i++){
        cin >> array[i];
        if(i == 0) {
            min = array[i];
            max = array[i];
        }
        else {
            if(array[i] < min) {
                min = array[i];
            }
            else if(array[i] > max) {
                max = array[i];
            }
        }
    }
    
    cout << min << " " << max << endl;
    
    return 0;
}