#include <iostream>
#include "Queue.h"

using std::cout;
using std::endl;

int main() {
	Queue* queue=new Queue();
	queue->enqueue(5);
	queue->enqueue(11);
	queue->enqueue(15);
	
	cout << queue->dequeue() << endl;
	cout << queue->dequeue() << endl;
	cout << queue->dequeue() << endl;

	delete queue;
	return 0;

}
