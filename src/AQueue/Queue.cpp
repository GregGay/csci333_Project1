#include <iostream>
#include "Queue.h"
#include "assert.h"

Queue::Queue(int initialSize) {
	theQueue=new int[initialSize];
	front=0;
	back=-1;
	length=0;
	capacity=initialSize;
}

Queue::~Queue() {
	delete[] theQueue;
}

void Queue::enqueue(int value) {
	if (length==capacity) {
		int* theNewQueue=new int[capacity*2];
		for (int i=0; i<capacity; i++) {
			theNewQueue[i]=theQueue[i];
		}
		delete[] theQueue;
		theQueue=theNewQueue;
		capacity=capacity*2;
	}
	/*
	if (length < (capacity/2)) {
		int* theNewQueue=new int[capacity/2];
		for(int i=0; i<capacity; i++) {
			theNewQueue[i]=theQueue[i];
		}
		delete[] theQueue;
		theQueue=theNewQueue;
		capacity=capacity/2;
	}
	*/
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
