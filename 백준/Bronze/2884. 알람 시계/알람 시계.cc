#include <iostream>

using namespace std;

int main(){
    int h,m;
    cin >> h >> m;
    if (m >= 45){
        cout << h << " " << m - 45 << endl;
    }
    else{
        cout << (h + 23) % 24 << " " << 60 + (m - 45) << endl;
    }
    
    return 0;
}