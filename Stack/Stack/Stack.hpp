//Stack.hpp headerfile of the project
#include <iostream>
#include <iomanip>
using namespace std;
class Stack
{
	static constexpr int size{10};
	int container[size];
	int topElement;
public:
	Stack();
	void push(int input);
	void pop();
	const int top();
	const bool empty();
	const bool full();
	void print();
private:

};
