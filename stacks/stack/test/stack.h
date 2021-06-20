#pragma once
#ifndef STACK_H
#define STACK_H

template<class T>
struct StackNode;

template<class T>
class Stack
{
private:
	StackNode<T> *head;
	StackNode<T> *top;
	//StackNode<T> *currntPtr;
	int stackSize;
	bool isEmpty;
public:
	void push(T);
	void pop();
	StackNode<T>* top();
	bool empty();
	int size();
	Stack();
};

#endif // !STACK_H
