#include <iostream>

using namespace std;

int main() {
    int o, w;
    int level;
    char behavior;
    int count = 0;
    bool die = 0;

    cin >> o >> w;

    while(1) {
        cin >> behavior >> level;
        if(behavior == '#' && level == 0) {
            count++;
            if(die != 1) {
                if(w > o * 0.5 && w < o * 2) {
                    cout << count << " :-)" << endl;
                }
                else {
                    cout << count << " :-(" << endl;
                }
            }
            else {
                cout << count << " RIP" << endl;
                die = 0;
            }
            o = 0;
            w = 0;
            cin >> o >> w;
            if(o == 0 && w == 0) {
                break;
            }
        }
        if(behavior == 'F') {
            w += level;
        }
        else if(behavior == 'E') {
            w -= level;
        }
        else if(behavior == '0' && level == 0) {
            break;
        }

        if(w <= 0) {
            die = 1;
        }
    }

    return 0;
}