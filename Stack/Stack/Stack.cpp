// Stack.cpp : Defines the entry point for the console application.
//
#include "Stack.hpp"

class Stack
{
	int container[size];
	int topElement;
public:
	Stack();
	void push(int input);
private:

};

Stack::Stack()
{
	topElement = -1;
}

void Stack::push(int input)
{
	if (topElement < 9) {
		container[++topElement] = input;
	}
	else {
		cout << "Stack overflow." << endl;
	}

}


