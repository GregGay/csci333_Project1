#include "Queue.h"
#include <assert.h>

Queue::Queue() {
	front=0;
	back=0;
	numElements=0;
}

Queue::~Queue() {
	while (!isEmpty()) {
		dequeue();
	}
}

void Queue::enqueue(int value) {
	Node* temp=new Node(value);
	if (front == 0) { 
		front = temp;
		back = temp;
	}
	else {
		back->setNext(temp);
		back=temp;
	}
	numElements++;
}

int Queue::dequeue() {
	Node* temp=front;
	assert(front!=0);
	int result=front->getValue();
	front=temp->getNext();
	delete temp;
	numElements--;
	return result;
}

bool Queue::isEmpty() {
	return numElements==0;
}

int Queue::size() {
	return numElements;
}
