#include <iostream>

using namespace std;

int main() {
	int n, m;
    int num;
    
    cin >> n >> m;
    
    int array[n][m];
    int arrayB[n][m];
    int arraySum[n][m];
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> array[i][j];
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arrayB[i][j];
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            arraySum[i][j] = array[i][j] + arrayB[i][j];
            cout << arraySum[i][j] << " ";
        }
        cout << endl;
    }
    

	return 0;
}