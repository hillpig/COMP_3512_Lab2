//Stacktester.cpp: Test the class of Stack
#include "Stack.hpp"

int main()
{
	Stack test;
	static int i{ 0 };
	if (test.empty()) {
		while (!test.full()) {
			test.push(i++);
		}
	}                                          // push integers into the stack until full
	test.print();                              // print each element in the stack
	test.push(i);                              // try to push a new integer into the stack
	cout << "Push a new integer into a full stack, the index of the top element is still: " << test.top() << endl; // find the top index
	if (test.full()) {
		while (!test.empty()) {
			test.pop();
		}
	}                                           // delete all elements in the stack
	cout <<"For a empty stack, the index of the top element is: "<< test.top() << endl;        // find the top index
	test.pop();                                  // try to delete the top from the stack
	if (test.empty()) {
		while (!test.full()) {
			test.push(i++);
		}
	}                                             // push other integers into the stack until full
	test.print();                                 // print all elements in the stack
	cout <<"Now the index of the top element is: " << test.top() << endl;                       //find the top index
	return 0;
}