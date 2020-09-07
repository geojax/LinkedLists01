#include "Node.h"

Node::Node(int new_value = 0, Node* new_next = nullptr)
{
	value = new_value;
	next = new_next;
}

Node::~Node()
{
}
