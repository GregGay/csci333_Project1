#ifndef __QUEUE_H__
#define __QUEUE_H__

class Queue {
	private:
		int* theQueue;
		int front;
		int back;
		int length;
		int capacity;

	public:
		Queue(int initialSize = 10);
		~Queue(); 
		void enqueue(int value);
		int dequeue();
		bool isEmpty();
		int size();
};

#endif
