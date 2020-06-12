#pragma once
using namespace std;

template<class T>
struct StackNode
{
	T val;
	StackNode *nextNodePtr = nullptr;
};

template<class T>
class Stack
{
private:
	StackNode *head = nullptr;
	StackNode *currntPtr = nullptr;
	int size = 0;
	bool isEmpty = true;
	StackNode<T> node;
public:
	void push(StackNode<T>&);
	void pop();
	StackNode<T> top();
	bool isEmpty();
};
