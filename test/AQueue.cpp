#include "gtest/gtest.h"
#include "../src/AQueue/Queue.h"

TEST(AQueueTest, Initialization) {
	Queue* q = new Queue();
	EXPECT_EQ(0, q->size());
	delete q;
}

TEST(AQueueTest, Enqueue) {
	Queue* q=new Queue();
	q->enqueue(1);
	q->enqueue(2);
	q->enqueue(3);
	q->enqueue(4);

	EXPECT_EQ(4, q->size());
	delete q;
}

TEST(AQueueTest, EnqueueForLoop) {
	Queue* q=new Queue();
	
	for (int i=0; i<23; ++i) {
		q->enqueue(i);
	}

	EXPECT_EQ(23, q->size());
	delete q;
}

TEST(AQueueTest, Dequeue) {
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

TEST(AQueueTest, Dequeue2) {
	Queue* q=new Queue();
	q->enqueue(1);
	q->enqueue(2);
	q->enqueue(3);
	q->enqueue(4);

	EXPECT_EQ(q->dequeue(), 1);
	delete q;
}

TEST(AQueueTest, Resize) {
	Queue* q=new Queue(2);
	q->enqueue(1);
	q->enqueue(2);
	q->enqueue(3);
	q->enqueue(4);

	EXPECT_EQ(4, q->size());
	delete q;
}

TEST(AQueueTest, DownSize) {
	Queue* q=new Queue(4);
	q->enqueue(2);

	EXPECT_EQ(1, q->size());
	delete q;
}

TEST(AQueueTest, isEmpty) {
	Queue* q=new Queue();
	
	EXPECT_EQ(true, q->isEmpty());
	delete q;
}

TEST(AQueueTest, isEmpty2) {
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
