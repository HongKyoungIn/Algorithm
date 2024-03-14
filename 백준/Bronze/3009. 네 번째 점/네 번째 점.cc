#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int x[3];
    int y[3];
    int minX;
    int minY;
    
    for(int i = 0; i < 3; i++) {
        cin >> x[i] >> y[i];
    }
    
    sort(x, x+3);
    sort(y, y+3);
    
    if(count(x, x+3, x[0]) < count(x, x+3, x[2])) {
        minX = x[0];
    }
    else{
        minX = x[2];
    }
    
    if(count(y, y+3, y[0]) < count(y, y+3, y[2])) {
        minY = y[0];
    }
    else{
        minY = y[2];
    }
    
    cout << minX << " " << minY;
    

	return 0;
}