#include "stdafx.h"
#include "stack.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isOpen(char symbol);
bool isClosed(char symbol);
bool matches(char symbol, Stack<char>& openSymbols);

int main()
{
	//using namespace std; /* Scoping within function */
	vector<char> symbols = { '(',')', '(', ')', '[', '{', '}', ']', '[', '[' };
	bool balanced = true;
	Stack<char> openSymbols;
	string test;
	string yesNoBalanced;

	for (auto sym : symbols)
	{
		test += sym;
		if (isOpen(sym))
		{
			openSymbols.push(sym);
		}
		else if (isClosed(sym))
		{
			if (openSymbols.empty())
			{
				balanced = false;
			}
			else
			{
				balanced = matches(sym, openSymbols);
			}
		}
	}

	if (openSymbols.size() > 0)
	{
		balanced = false;
	}

	yesNoBalanced = balanced ? "Yes" : "No";
	cout << "X02150, do the symbols " << test << " match?" << endl;
	cout << "X02150: " << yesNoBalanced << endl;

	return 0;
}

bool isOpen(char symbol)
{
	return ((symbol == '(' || symbol == '{' || symbol == '['));
}

bool isClosed(char symbol)
{
	return ((symbol == ')' || symbol == '}' || symbol == ']'));
}

bool matches(char symbol, Stack<char>& openSymbols)
{
	StackNode<char> *topSymbol = openSymbols.top();
	openSymbols.pop();
	return (((topSymbol->val == '(' && symbol == ')') || (topSymbol == '{' && symbol == '}') || (topSymbol == '[' && symbol == ']')));
}
