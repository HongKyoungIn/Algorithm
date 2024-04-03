#include <iostream>

using namespace std;

class Queue {
private:
    int _top;
    int Array[10000] = {-1,};
    int bottom = 0;

public:
    Queue() {
        _top = -1;
    }
    ~Queue() {

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
            cout << Array[bottom] << endl;
            Array[bottom] = -1;
            bottom++;
        }
    }


    int size() {
        return (_top - bottom) + 1;
    }

    int empty() {
        return size() == 0 ? 1 : 0;
    }

    int front() {
        if(empty())
            return -1;
        else
            return Array[bottom];
    }

    int back() {
        if(empty())
            return -1;
        else
            return Array[_top];
    }
};

int main(void) {
    int n;
    cin >> n;

    Queue queue;

    string str;
    int value;

    for(int i = 0; i < n; i++) {
        cin >> str;

        if(str == "push") {
            cin >> value;
            queue.push(value);
        }
        else if(str == "pop") {
            queue.pop();
        }
        else if(str == "size") {
            cout << queue.size() << endl;
        }
        else if(str == "empty") {
            cout << queue.empty() << endl;
        }
        else if(str == "front") {
            cout << queue.front() << endl;
        }
        else if(str == "back") {
            cout << queue.back() << endl;
        }

    }

    return 0;
}