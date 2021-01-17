#include "stack.h"
#include <iostream>
using namespace std;

/* Stack class Node */
template<class T>
struct StackNode
{
	T val;
	StackNode *nextNodePtr = nullptr;
};


Stack<class T>::Stack()
{
	head = nullptr;
	currntPtr = nullptr;
	stackSize = 0;
	isEmpty = true;
}

void Stack<class T>::push(char sym)
{
	if (!head)
	{
		
	}
}

void Stack<class T>::pop()
{

}

StackNode<class T>* Stack<class T>::top()
{
	return head;
}

bool Stack<class T>::empty()
{

}

int Stack<class T>::size()
{

}
