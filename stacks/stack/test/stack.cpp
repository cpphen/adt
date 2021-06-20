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

template<class T>
Stack<T>::Stack()
{
	head = nullptr;
	currntPtr = nullptr;
	stackSize = 0;
	isEmpty = true;
}

template<class T>
void Stack<T>::push(T sym)
{
	if (!head)
	{
		StackNode* node = new StackNode;
		head = node;
		//head->val = sym;
		//head->nextNodePtr = nullptr;
	}
	else
	{
		StackNode* currntPtr = head;
		while (currntPtr && currntPtr->nextNodePtr != nullptr) 
		{
			if (currntPtr->nextNodePtr == nullptr)
			{
				StackNode<T> *newNode;
				newNode->val = sym;
				newNode->nextNodePtr = nullptr;
				currntPtr->nextNodePtr = newNode;
			}
			else
			{
				currntPtr = currntPtr->nextNodePtr;
			}
		}
	}
}


template<class T>
void Stack<T>::pop()
{
	top
}

template<class T>
StackNode<T>* Stack<T>::top()
{
	StackNode* currntPtr = head;
	while (currntPtr && currntPtr->nextNodePtr != nullptr)
	{
		currntPtr = currntPtr->nextNodePtr;
		if (currntPtr->nextNodePtr == NULL)
		{
			top = currntPtr;
		}
	}

	return currntPtr;
}

template<class T>
bool Stack<T>::empty()
{
	head == nullptr;
}


template<class T>
int Stack<T>::size()
{

}
