#include <iostream>

using namespace std;

int main() {
    int case_num;

    cin >> case_num;

    for(int i = 0; i < case_num; i++) {
        int student;
        int sum = 0;
        int avg = 0;
        int count = 0;

        cin >> student;

        int *score;
        score = new int[student]();

        for(int j = 0; j < student; j++) {
            cin >> score[j];
            sum += score[j];
        }
        avg = sum / student;

        for(int j = 0; j < student; j++) {
            if(score[j] > avg) {
                count++;
            }
        }
        printf("%.3f%%\n", (count / (double)student) * 100);

    }

    return 0;
}