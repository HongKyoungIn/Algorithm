#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
class Stack {
private:
    int top;
    T Array[100] = {'\0',};

public:
    Stack() {
        top = -1;
    }

    ~Stack() {}

    void Push(T inputdata) {
        top++;
        Array[top] = inputdata;
    }

    void Pop() {
        if(!Empty()) {
            Array[top] = '\0';
            top--;
        }
    }

    int Size() {
        return top + 1;
    }

    bool Empty() {
        return Size() == 0;
    }

    T Top() {
        if(!Empty())
            return Array[top];
    }

    void Reset() {
        top = -1;
    }
};

int main(void) {
    int n;
    char str[100];

    Stack<char> stack;

    cin >> n;

    cin.ignore(); // 버퍼 비우기

    for(int i = 0; i < n; i++) {
        int error = 0;
        cin.getline(str, 100); // 한 줄씩 입력받기

        for(int j = 0; j < strlen(str); j++) {
            if(str[j] == '(') {
                stack.Push(str[j]);
            }
            else if(str[j] == ')') {
                if(stack.Empty()) {
                    stack.Push(str[j]);
                    error = 1;
                }
                else if(stack.Top() == '(') {
                    stack.Pop();
                }
            }
        }

        if(stack.Empty() && error == 0) {
            cout << "YES" << endl;
            stack.Reset();
        }
        else {
            cout << "NO" << endl;
            stack.Reset();
        }
    }

    return 0;
}
