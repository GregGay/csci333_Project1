#include "Queue.h"
#include <assert.h>
#include <iostream>

Queue::Queue() {

}

void Queue::enqueue(int value) {
	LQueue.push_back(value);
}

int Queue::dequeue() {
	int result = LQueue.front();
	LQueue.pop_front();
	return result;
}

bool Queue::isEmpty(){
	return LQueue.empty();
}

int Queue::size() {
	return LQueue.size();
}
