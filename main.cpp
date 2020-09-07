// main.cpp
#include "LinkedList.h"
#include <iostream>
using namespace std;
int main()
{
    Node* head = new Node(0, nullptr);
    LinkedList list = LinkedList(head);
    
    while (true) 
    {
        int input;
        cout << "What would you like to do?\n1) Print out list;\n2) Append to list\n3) Prepend to list;\n4)delete";
        cout << "0 to quit\n";
        cin >> input;
        switch (input)
        {
        case 0:
            return 1;
            break;
        case 1:
            cout << endl;
            list.PrintAll(list.head);
            cout << endl;
            break;
        case 2:
            cout << "What value do you wish to append? INTS ONLY\n";
            int value_to_append;
            cin >> value_to_append;
            list.Append(list.head, value_to_append);
            break;
        case 3:
            cout << "What value do you wish to prepend?\n";
            int value_to_prepend;
            cin >> value_to_prepend;
            list.Prepend(list.head, value_to_prepend);
            break;
        case 4:
            cout << "What value do you wish to delete?\n";
            int value_to_delete;
            cin >> value_to_delete;
            list.Delete(list.head,value_to_delete);
            break;
        default:
            cout << "Not an option\n";
            break;
        }
    }
}

