#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b, c;
    int sum;
    int count = 0;
    string str;

    cin >> a >> b >> c;

    sum = a * b * c;
    str = to_string(sum);

    for(int i = 48; i <= 57; i++) {
        char ch = i;
        for(int j = 0; j < str.length(); j++) {
            if(i == str[j]) {
                count++;
            }
        }
        cout << count << endl;

        count = 0;
    }
}