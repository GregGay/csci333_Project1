#include "Node.h"

Node::Node(int val) {
	value=0;
	next=0;
}

Node::~Node() {

}

int Node::getValue() {
	return value;
}

Node* Node::getNext() {
	return next;
}

void Node::setNext(Node* n) {
	next=n;
}
