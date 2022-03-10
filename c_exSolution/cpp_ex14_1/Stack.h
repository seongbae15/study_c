#pragma once
template <typename T>
class Stack
{
public:

private:
	int top;
	int size;
	T* data;

public:
	Stack(int size = 100);
	~Stack();

	bool Push(const T& value);
	bool Pop();
	bool Top(T& value);
	bool Empty();
};

template <typename T>
Stack<T>::Stack(int size) {
	top = -1;
	this->size = size;
	data = new T[size];
}

template <typename T>
Stack<T>::~Stack() {
	delete[] data;
}

template <typename T>
bool Stack<T>::Empty() {
	return (top < 0);
}


template <typename T>
bool Stack<T>::Push(const T& value) {
	if (top >= size - 1)
		return false;
	data[++top] = value;
	return true;
}

template <typename T>
bool Stack<T>::Top(T& value) {
	if (Empty())
		return false;
	value = data[top];
	return true;
}

template <typename T>
bool Stack<T>::Pop() {
	if (Empty())
		return false;
	--top;
	return true;
}

