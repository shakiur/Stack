#include <iostream>
#include "headers/stack.h"

using namespace std;

int main() {
	Stack test_stack;
	test_stack.push(0);
	test_stack.push(1);
	test_stack.push(2);
	test_stack.push(3);
	test_stack.push(4);
	test_stack.push(5);
	test_stack.push(6);
	test_stack.push(7);
	test_stack.push(8);

	test_stack.traverseStack();

	int m = 0;
	Elem * temp_elem = test_stack.findMthToLastElem(m);
	cout << m << " Elems from last: " << temp_elem->data << endl;
}