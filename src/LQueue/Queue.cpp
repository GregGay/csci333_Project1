#include "Queue.h"
#include <assert.h>
#include <iostream>

Queue::Queue() {
	front=0;
	back=0;
	numElements=0;
}

Queue::~Queue() {
	Node* temp;
	for (int i=1; i<numElements; ++i) {
		temp=front;
		front=temp->getNext();
		delete temp;
	}	
}

void Queue::enqueue(int value) {
	Node* temp=new Node(value);
	temp->setNext(front);
	front=temp;
	numElements++;
}

int Queue::dequeue() {
	Node* temp=back;
	int result=temp->getValue();
	back=temp->getNext();
	delete temp;
	return result;
}

bool Queue::isEmpty(){
	return true;
}

int Queue::size() {
	return numElements;
}
