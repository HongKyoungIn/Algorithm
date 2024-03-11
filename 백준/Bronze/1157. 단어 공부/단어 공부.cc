#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int count = 0;
    bool b = false;
    char maxChar;

    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }

    for(int i = 65; i <= 90; i++) {
        char ch = i;
        int temp = 0;

        for(int j = 0; j < str.length(); j++) {
            if(str[j] == ch) {
                temp++;
            }
        }

        if(temp > count) {
            count = temp;
            maxChar = ch;
            b = false;
        }
        else if(temp == count) {
            maxChar = '?';
        }
    }

    cout << maxChar;
}