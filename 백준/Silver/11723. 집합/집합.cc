#include <iostream>

using namespace std;

class S {
private:
    int array[20] = {0,};

public:
    S() {

    }
    ~S() {

    }

    void add(int inputdata) {
        array[inputdata - 1] = inputdata;
    }

    void remove(int inputdata) {
        array[inputdata - 1] = 0;
    }

    int check(int inputdata) {
        if(array[inputdata - 1] != 0) {
            return 1;
        }
        else {
            return 0;
        }
    }

    void toggle(int inputdata) {
        if(array[inputdata - 1] == 0) {
            array[inputdata - 1] = inputdata;
        }
        else {
            array[inputdata - 1] = 0;
        }
    }

    void all() {
        for(int i = 0; i < 20; i++) {
            array[i] = i + 1;
        }
    }

    void empty() {
        for(int i = 0; i < 20; i++) {
            array[i] = 0;
        }
    }
};

int main(void) {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    S stack;

    string str;

    int value;    
    
    for(int i = 0; i < n; i++) {
        cin >> str;

        if(str == "add") {
            cin >> value;
            stack.add(value);
        }
        else if(str == "remove") {
            cin >> value;
            stack.remove(value);
        }
        else if(str == "check") {
            cin >> value;
            cout << stack.check(value) << "\n";
        }
        else if(str == "toggle") {
            cin >> value;
            stack.toggle(value);
        }
        else if(str == "all") {
            stack.all();
        }
        else if(str == "empty") {
            stack.empty();
        }
    }

    return 0;
}