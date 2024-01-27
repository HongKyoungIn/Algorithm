#include <iostream>
#include <string>

using namespace std;

int main() {
    int n; // 배열의 크기
    int m; // 반복할 횟수
    int a; // 바꿀 배열 1
    int b; // 바꿀 배열 2
    int temp; // 배열의 값 임시저장 변수
    
    cin >> n >> m;
    
    int *array;
    array = new int[n];
    
    for(int i = 0; i < n; i++){
        array[i] = i + 1;
    }
    
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        temp = array[a-1];
        array[a-1] = array[b-1];
        array[b-1] = temp;
    }
    
    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    
    return 0;
}