#include <iostream>
#include <string>

using namespace std;

int main() {
    int hour, minute;
    
    cin >> hour >> minute;
    
    if(hour > 0) {
        if(minute >= 45) {
            cout << hour << " " << minute - 45 << endl;
        }
        else {
            cout << hour - 1 << " " << 60 + (minute - 45) << endl;
        }
    }
    else if(hour == 0) {
        if(minute >= 45) {
            cout << hour << " " << minute - 45 << endl;
        }
        else {
            cout << "23" << " " << 60 + (minute - 45) << endl;
        }
    }
    
    return 0;
}