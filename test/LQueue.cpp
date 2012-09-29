#include "gtest/gtest.h"
#include "../src/LQueue/Queue.h"

TEST(LQueueTest, Initialization) {
	Queue* q = new Queue();
	EXPECT_EQ(0, q->size());
	delete q;
}

TEST(LQueueTest, Enqueue) {
	Queue* q=new Queue();
	q->enqueue(1);
	q->enqueue(2);
	q->enqueue(3);
	q->enqueue(4);

	EXPECT_EQ(4, q->size());
	delete q;
}

TEST(LQueueTest, EnqueueForLoop) {
	Queue* q=new Queue();
	
	for (int i=0; i<23; ++i) {
		q->enqueue(i);
	}

	EXPECT_EQ(23, q->size());
	delete q;
}

TEST(LQueueTest, Dequeue) {
	Queue* q=new Queue();
	q->enqueue(1);
	q->enqueue(2);
	q->enqueue(3);
	q->enqueue(4);

	q->dequeue();
	q->dequeue();
	q->dequeue();
	q->dequeue();

	EXPECT_EQ(0, q->size());
	delete q;
}

TEST(LQueueTest, Dequeue2) {
	Queue* q=new Queue();
	q->enqueue(1);
	q->enqueue(2);
	q->enqueue(3);
	q->enqueue(4);

	EXPECT_EQ(q->dequeue(), 1);
	delete q;
}

TEST(LQueueTest, isEmpty) {
	Queue* q=new Queue();
	
	EXPECT_EQ(true, q->isEmpty());
	delete q;
}

TEST(LQueueTest, isEmpty2) {
	Queue* q=new Queue();
	q->enqueue(1);
	q->enqueue(2);
	q->enqueue(3);
	q->enqueue(4);

	q->dequeue();
	q->dequeue();
	q->dequeue();
	q->dequeue();

	EXPECT_EQ(true, q->isEmpty());
	delete q;
}
