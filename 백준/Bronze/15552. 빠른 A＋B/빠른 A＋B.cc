#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    int a, b;
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> num;
    
    for(int i = 0; i < num; i++) {
        cin >> a >> b;
        cout << a + b << "\n";
    }
    
    return 0;
}