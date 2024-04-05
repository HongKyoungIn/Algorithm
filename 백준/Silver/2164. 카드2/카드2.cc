#include <iostream>
#include <cstring>

#define MAX_SIZE 500000

using namespace std;

template <typename T>
class Queue {
private:
	int rear; // 다음에 저장될 큐의 위치
	int front; // 가장 먼저 들어온 데이터의 위치
	bool empty = true; // 큐가 비어있는지 확인하기 위한 변수
	int Array[MAX_SIZE] = {'\0',}; // 큐 선언

public:
	Queue() { // 생성자 선언
		rear = 0; // 큐의 위치 초기화
		front = 0; // 큐의 위치 초기화
	}
	~Queue() {

	}

	void Enqueue(T inputdata) { // 큐에 데이터를 넣기 위한 함수
		// cout << inputdata << "를 넣습니다." << endl;
		Array[rear] = inputdata; // 현재 rear 위치에 데이터를 넣는다.
		rear = (rear + 1) % MAX_SIZE; // rear가 가리키는 위치를 1 증가시킨다.
		empty = false; // 큐에 데이터가 있으므로 empty 변수를 false로 변경한다.
	}

	void Dequeue() { // 큐에 데이터를 삭제하기 위한 함수
		if(empty == false) { // 만약 큐가 비어있지 않다면 동작합니다.
			// cout << Array[front] << "를 뺍니다." << endl;
			front = (front + 1) % MAX_SIZE;
			Enqueue(Array[front]);
			front = (front + 1) % MAX_SIZE;
			if(front == rear) { // 만약 Dequeue를 실행한 후 front가 가리키는 값이 rear와 같다면 큐가 비어있다는 뜻이 된다.
				empty == true; // empty 변수를 true로 변경.
			}
		}
		else {
			cout << "큐가 비어있습니다." << endl;
		}
	}

	int Size() { // 큐의 사이즈를 알려주는 함수
		if(abs(rear - front) == 0 && empty == false) { // 만약 front와 rear가 가리키는 위치가 같지만 비어있지 않다면
			return MAX_SIZE; // 큐가 가득 찼다는 뜻이므로 MAX_SIZE를 반환한다.
		}
		else { // 가리키는 위치가 다르다면
			return abs(rear - front); // 큐의 크기를 반환
		}
	}

	void PrintQueue() {
		cout << Array[front] << endl;
	}
};

int main(void) {
	int num;
	Queue<int> queue;

	cin >> num;

	for(int i = 0; i < num; i++) {
		queue.Enqueue(i + 1);
	}

	for(int i = 0; i < num - 1; i++) {
		queue.Dequeue();
	}

	queue.PrintQueue();


	return 0;
}
