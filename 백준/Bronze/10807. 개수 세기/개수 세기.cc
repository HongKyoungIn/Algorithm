#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int v;
    int check = 0;
    
    cin >> n;
    
    int *array;
    array = new int [n];
    
    for(int i = 0; i<n; i++){
        cin >> array[i];
    }
    
    cin >> v;
    
    for(int i = 0; i < n; i++){
        if(array[i] == v){
            check += 1;
        }
    }
    
    cout << check << endl;
    
    return 0;
}