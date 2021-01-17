#pragma once
using namespace std;

template<class T>
struct StackNode<class T>;

template<class T>
class Stack
{
private:
	StackNode<class T> *head;
	StackNode<class T> *currntPtr;
	int stackSize;
	bool isEmpty;
public:
	void push(char);
	void pop();
	StackNode<class T>* top();
	bool empty();
	int size();
	Stack();
};
