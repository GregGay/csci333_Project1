#include <iostream>
#include "RawArray.h"

Queue::Queue(int initialSize) {
	theQueue = new int[initialSize];
	front=0;
	maxSize = initialSize;
}

Queue::~Queue() {
	delete[] theQueue;
}

void Queue::enqueue(int value) {
	theQueue[front]=value;
	front++;
}

int Queue::dequeue() {
	front--;
	return theQueue[front];
}

int Queue::isEmpty() {
	return maxSize;
}

int Queue::size() {
	return front;
}
