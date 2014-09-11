#include "elem.h"

class Stack {
	Elem * head;

	public:
		Stack();
		~Stack();

		void traverseStack();
		Elem * pop();
		void push(int); 

		bool remove(Elem *);
		bool insertAfter(Elem *, int);
		Elem * findMthToLastElem(int m);

};