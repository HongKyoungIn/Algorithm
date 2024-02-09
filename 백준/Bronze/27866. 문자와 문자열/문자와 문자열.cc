#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int num;

    getline(cin, str);
    cin >> num;

    cout << str[num - 1] << endl;

    return 0;
}