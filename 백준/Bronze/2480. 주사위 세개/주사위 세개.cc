#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    int max_num = 0;
    int same_num = 0;
    int price;

    cin >> a >> b >> c;
    max_num = max({a, b, c});

    if(a == b) {
        same_num = a;
    }
    else if(a == c) {
        same_num = a;
    }
    else if(b == c) {
        same_num = b;
    }

    if(same_num == 0) {
        price = max_num * 100;
        cout << price << endl;
    }
    else {
        if(a == b && b == c) {
            price = 10000 + max_num * 1000;
            cout << price << endl;
        }
        else {
            price = 1000 + same_num * 100;
            cout << price << endl;
        }
    }

    return 0;
}