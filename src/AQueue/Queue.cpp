#include <iostream>
#include "Queue.h"
#include "assert.h"

Queue::Queue(int initialSize) {
	theQueue=new int[initialSize];
	front=0;
	back=0;
	length=0;
	capacity=initialSize;
}

Queue::~Queue() {
	delete[] theQueue;
}

void Queue::enqueue(int value) {
	assert(length<=capacity);
	back=(back+1)%capacity;
	theQueue[back]=value;
	length++;
}

int Queue::dequeue() {
	int result=theQueue[front];
	front=(front+1)%capacity;
	length--;
	return result;
}

bool Queue::isEmpty() {
	if (front==0 || back==0) {
		return true;
	}
	else {
		return false;
	}
}

int Queue::size() {
	return length;
}
