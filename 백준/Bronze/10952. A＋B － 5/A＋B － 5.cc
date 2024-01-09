#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b;
    
    while(2) {
        cin >> a >> b;
        if(a + b == 0){
            break;
        }
        cout << a + b << endl;
    }
    
    return 0;
}