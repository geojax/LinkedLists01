#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList(Node* new_head = nullptr)
{
	head = new_head;
}

void LinkedList::Append(Node* current_node, int new_value = 0) //Add to end
{
	//if this node is the end, then give it another node to point to
	if (current_node->next == nullptr)
	{
		//make a new pointer to a node
		Node* new_node = new Node(new_value, nullptr);
		//now this one is pointing to the new one
		current_node->next = new_node;
		return;
	}

	//otherwise, we keep cycling through nodes
	Append(current_node->next, new_value);
}

void LinkedList::Prepend(Node* current_head, int new_value)
{
	head = new Node(new_value, current_head);
}

void LinkedList::Delete(Node* current_node, int value_to_delete)
{
	if (current_node->next->value == value_to_delete)
	{
		Node* node_to_delete = current_node->next;
		current_node->next = current_node->next->next;
		delete node_to_delete;
		return;
	}

	if (current_node->next == nullptr)
	{
		std::cout << "No nodes with value " << value_to_delete << '\n';
		return;
	}

	Delete(current_node->next, value_to_delete);
}

void LinkedList::PrintAll(Node* current_node)
{
	std::cout << current_node->value << '\n';
	if (current_node->next == nullptr)
	{
		return;
	}
	PrintAll(current_node->next);
}
