#include "gtest/gtest.h"
#include "../src/AQueue/Queue.h"

TEST(QueueTest, Initialization) {
	Queue* q = new Queue();
	EXPECT_EQ(0, q->size());
}
