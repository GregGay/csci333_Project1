#ifndef __QUEUE_H__
#define __QUEUE_H__

#include "Node.h"

class Queue {
  private:
	Node* front;
	Node* back;
	int numElements;


  public:
	Queue();
	~Queue();
	void enqueue(int value);
	int dequeue();
	bool isEmpty();
	int size();
};

#endif
