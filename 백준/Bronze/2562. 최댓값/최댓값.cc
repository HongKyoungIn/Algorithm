#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr;
    int temp;
    int max = 0;
    int current_num = 0;
    int arr_num = 0;

    while(cin >> temp) {
        arr.push_back(temp);
        current_num++;
        if(temp > max) {
            max = temp;
            arr_num = current_num;
        }
    }
    
    cout << max << endl;
    cout << arr_num << endl;

    return 0;
}
