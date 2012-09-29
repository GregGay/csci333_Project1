#include <iostream>
#include <ctime>
#include "../LQueue/Queue.h"

int main() {
	int start, end, elapsed;
	double seconds;
	Queue* queue=new Queue();
	start = clock();
	
	for (long i=0; i<9999999; ++i) {
		queue->enqueue(i);
	}

	for (long i=0; i<9999999; ++i) {
		queue->dequeue();
	}

	end = clock();
	elapsed = end - start;
	seconds = (double) elapsed/CLOCKS_PER_SEC;

	std::cout << "Elapsed time for LQueue is: " << seconds << " seconds " << std::endl;
	delete queue;
	return 0;
}
