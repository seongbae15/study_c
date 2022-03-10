#pragma once
template <typename T>
class Queue
{
public:

private:
	int front;
	int rear;
	int size;
	int count;
	T* data;

public:
	Queue(int size = 100);
	~Queue();

	bool Push(const T& value);
	bool Pop();
	bool Front(T& value);
	bool Empty();

};

template <typename T>
Queue<T>::Queue(int size) {
	front = 0;
	rear = -1;
	count = 0;
	this->size = size;
	data = new T[size];
}

template <typename T>
Queue<T>::~Queue() {
	delete[] data;
}

template <typename T>
bool Queue<T>::Empty() {
	return (count == 0);
}


template <typename T>
bool Queue<T>::Push(const T& value) {
	if (count >= size)
		return false;
	rear = (rear + 1) % size;
	count++;
	data[rear] = value;
	return true;
}

template <typename T>
bool Queue<T>::Front(T& value) {
	if (Empty())
		return false;
	value = data[front];
	return true;
}

template <typename T>
bool Queue<T>::Pop() {
	if (Empty())
		return false;
	front = (front + 1) % size;
	count--;
	return true;
}


