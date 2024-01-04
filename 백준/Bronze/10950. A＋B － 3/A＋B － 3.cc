#include <iostream>
#include <string>

using namespace std;

int main() {
    int c;
    int a;
    int b;

    cin >> c;

    for(int i = 0; i < c; i++) {
        cin >> a >> b;
        cout << a + b << endl;
    }
    
    return 0;
}