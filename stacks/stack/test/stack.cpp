#include "stack.h"
#include <iostream>
using namespace std;

void Stack<class T>::push(StackNode<T>* newNode)
{
	if (!head)
	{
		head = newNode;
	}
}

void Stack<class T>::pop()
{

}

StackNode<class T> Stack<class T>::top()
{

}

bool Stack<class T>::isEmpty()
{

}
