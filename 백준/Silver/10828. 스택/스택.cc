#include <iostream>

using namespace std;

class Stack {
private:
    int _top;
    int Array[10000] = {-1,};

public:
    Stack() {
        _top = -1;
    }
    ~Stack() {

    }

    void push(int inputdata) {
        _top++;
        Array[_top] = inputdata;
    }

    void pop() {
        if(empty() == 1) {
            cout << "-1" << endl;
        }
        else {
            cout << Array[_top] << endl;
            Array[_top] = -1;
            _top--;
        }
    }


    int size() {
        return _top + 1;
    }

    int empty() {
        return size() == 0 ? 1 : 0;
    }

    int top() {
        if(empty())
            return -1;
        else
            return Array[_top];
    }
};

int main(void) {
    int n;
    cin >> n;

    Stack stack;

    string str;
    int value;

    for(int i = 0; i < n; i++) {
        cin >> str;

        if(str == "push") {
            cin >> value;
            stack.push(value);
        }
        else if(str == "pop") {
            stack.pop();
        }
        else if(str == "size") {
            cout << stack.size() << endl;
        }
        else if(str == "empty") {
            cout << stack.empty() << endl;
        }
        else if(str == "top") {
            cout << stack.top() << endl;
        }

    }

    return 0;
}