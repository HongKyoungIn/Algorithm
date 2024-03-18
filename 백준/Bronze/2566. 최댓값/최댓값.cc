#include <iostream>

using namespace std;

int main() {
	int array[9][9];
    int max = 0;
    int row, col;
    
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cin >> array[i][j];
            if(array[i][j] >= max) {
                max = array[i][j];
                row = i;
                col = j;
            }
        }
    }
    
    cout << max << endl;
    cout << row + 1 << " " << col + 1;

	return 0;
}