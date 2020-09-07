#pragma once
#include "Node.h"
class LinkedList
{
public:
	LinkedList(Node* new_head);
	void Append(Node* current_node, int new_value);
	void Prepend(Node* current_head, int new_value);
	void Delete(Node* current_node, int value_to_delete);
	void PrintAll(Node* current_node);
	Node* head;
};

