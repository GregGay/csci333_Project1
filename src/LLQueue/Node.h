#ifndef __NODE_H__
#define __NODE_H__

class Node {
  private:
	int value;
	Node* next;

  public:
	Node(int val);
	~Node();
	int getValue();
	Node* getNext();
	void setNext(Node* n);
};

#endif
