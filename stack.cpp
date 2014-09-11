#include <iostream>
#include "headers/stack.h"

using namespace std;

Stack::Stack() : head(NULL){}

Stack::~Stack() {
	Elem * tempElem;

	while(tempElem != NULL) {
		tempElem = head->next;
		delete head;
		head = tempElem;
	}
}

void Stack::traverseStack() {
	Elem * traverseElem = head;

	while(traverseElem != NULL) {
		cout << traverseElem->data << endl;
		traverseElem = traverseElem->next;
	}
}

Elem * Stack::pop() {
	if(head == NULL)
		return NULL;
	else {

		Elem * tempHead = head;
		head = head->next;

		return tempHead;
	}
}

void Stack::push(int x) {

	Elem * newElem = new Elem;
	newElem->data = x;
	newElem->next = head;

	head = newElem;

}

bool Stack::remove(Elem * rmvElem) {

	if(head == rmvElem) {
		head = rmvElem->next;
		delete rmvElem;
		return true;
	}
	else {
		Elem * traverseElem = head;

		while(traverseElem != NULL) {

		if( traverseElem->next == rmvElem) {
			traverseElem->next = rmvElem->next;
			delete rmvElem;
			return true;
		}

		traverseElem = traverseElem->next;

		}
	}

	return false;
}

Elem * Stack::findMthToLastElem(int dist_from_last) {

	int total_elem = countElem();
	int dist_from_first = total_elem - dist_from_last;

	Elem * traverse_elem = head;

	int cur_dist = 1;

	while(traverse_elem) {

		if(cur_dist == dist_from_first)
			return traverse_elem;

		traverse_elem = traverse_elem->next;
		cur_dist++;
	}

	return NULL;
	
}

int Stack::countElem() {
	int last_elem = 0;
	Elem * traverse_elem = head;

	while(traverse_elem) {
		traverse_elem = traverse_elem->next;
		last_elem++;
	}

	return last_elem;
}