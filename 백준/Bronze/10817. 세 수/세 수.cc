#include <iostream>

using namespace std;

int main() {
	int num[3] = {0,0,0};
    int diff[3] = {0,0,0};
    int middle = 0;
    int sum = 0;
    int min = 0;
    int index;
    
    for(int i = 0; i < 3; i++) {
        cin >> num[i];
        sum += num[i];
    }    
    
    middle = sum / 3;
    
    for(int i = 0; i < 3; i++) {
        diff[i] = abs(middle - num[i]);
    }
    
    for(int i = 0; i < 3; i++) {
        if(i == 0) {
            min = diff[i];
            index = i;
        }
        else{
            if(diff[i] <= min) {
                min = diff[i];
                index = i;
            }
        }
    }

    cout << num[index];
	return 0;
}