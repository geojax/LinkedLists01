#pragma once
class Node
{
public:
	Node(int new_value, Node* new_next);
	~Node();

	Node* next;
	int value;
};

