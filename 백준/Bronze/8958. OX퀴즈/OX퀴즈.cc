#include <iostream>

using namespace std;

int main() {
    int n;
    string str;
    int* score;
    int addScore = 0;

    cin >> n;

    score = new int[n]();

    for(int i = 0; i < n; i++) {
        addScore = 0;
        cin >> str;
        for(int j = 0; j < str.length(); j++) {
            if(str[j] == 'O') {
                score[i] = score[i] + 1;
                if(j > 0 && str[j - 1] == str[j]) {
                    addScore++;
                    score[i] = score[i] + addScore;
                }
            }

            if(str[j] == 'X') {
                addScore = 0;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << score[i] << endl;
    }
}