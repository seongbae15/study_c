#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;

int main() {
	char c;
	Stack<char> char_stack(10);
	char_stack.Push('A');
	char_stack.Push('B');
	char_stack.Push('A');
	char_stack.Push('D');
	while (!char_stack.Empty()) {
		char_stack.Top(c);
		cout << c << endl;
		char_stack.Pop();
	}

	int i;
	Stack<int> int_stack(10);
	int_stack.Push(10);
	int_stack.Push(20);
	int_stack.Push(30);
	int_stack.Push(10);
	while (!int_stack.Empty()) {
		int_stack.Top(i);
		cout << i << endl;
		int_stack.Pop();
	}

	Queue<char> char_queue(10);
	char_queue.Push('A');
	char_queue.Push('B');
	char_queue.Push('A');
	char_queue.Push('D');
	while (!char_queue.Empty()) {
		char_queue.Front(c);
		cout << c << endl;
		char_queue.Pop();
	}

	Queue<int> int_queue(10);
	int_queue.Push(10);
	int_queue.Push(20);
	int_queue.Push(30);
	int_queue.Push(10);
	while (!int_queue.Empty()) {
		int_queue.Front(i);
		cout << i << endl;
		int_queue.Pop();
	}


	return 0;
}