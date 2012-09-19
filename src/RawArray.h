#ifndef __RAWARRAY_H__
#define __RAWARRAY_H__

class Queue {
	private:
		int* theQueue;
		int front;
		int maxSize;

	public:
		Queue(int initialSize = 10);
		~Queue(); 
		void enqueue(int value);
		int dequeue();
		int isEmpty();
		int size();
};

#endif
