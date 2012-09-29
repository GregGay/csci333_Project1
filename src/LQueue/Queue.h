#ifndef __QUEUE_H__
#define __QUEUE_H__
#include <list>

class Queue {
  private:
	std::list<int> LQueue;

  public:
	Queue();
	void enqueue(int value);
	int dequeue();
	bool isEmpty();
	int size();
};

#endif
