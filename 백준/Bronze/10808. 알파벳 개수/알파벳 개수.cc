#include <iostream>

using namespace std;

int main() {
    int alphabet[26] = {0,};
	string str;
    int count = 0;
    
    cin >> str;
    
    for(int i = 0; i < str.length(); i++) {
        alphabet[str[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		cout << alphabet[i] << " ";
	}    

	return 0;
}