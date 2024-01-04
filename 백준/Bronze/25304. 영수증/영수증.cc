#include <iostream>
#include <string>

using namespace std;

int main() {
    int total_price;
    int type_num;
    int price;
    int num;
    int temp_price = 0;
    
    cin >> total_price;
    cin >> type_num;
    
    for(int i = 1; i <= type_num; i++) {
        cin >> price >> num;
        temp_price += price * num;
    }
    
    if(temp_price == total_price) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    
    return 0;
}