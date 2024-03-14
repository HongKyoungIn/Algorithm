#include <iostream>

using namespace std;

int main() {
	int hamburger[3];
    int juice[2];
    int hmin = 2000;
    int jmin = 2000;
    
    for(int i = 0; i < 3; i++) {
        cin >> hamburger[i];
        if(hamburger[i] <= hmin) {
            hmin = hamburger[i];
        }
    }
    
    for(int i = 0; i < 2; i++) {
        cin >> juice[i];
        if(juice[i] <= jmin) {
            jmin = juice[i];
        }
    }
    
    cout << hmin + jmin - 50;

	return 0;
}