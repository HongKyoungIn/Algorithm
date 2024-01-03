#include <iostream>
#include <string>

using namespace std;

int main() {
    int current_hour;
    int current_min;
    int cookingTime;
    
    cin >> current_hour >> current_min >> cookingTime;
    
    int h = cookingTime / 60;
    int m = cookingTime % 60;
    
    current_hour += h;
    current_min += m;
    
    current_hour = (current_hour + (current_min / 60)) % 24;
    current_min %= 60;
    
    cout << current_hour << " " << current_min << endl;
    
    return 0;
}