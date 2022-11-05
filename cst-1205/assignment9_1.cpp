#include <iostream>
#include<list>
#include "assignment9_1.h"

using namespace std;

void listOfNumber(list<int> const &number) {
	for (auto const &i : number) {
		cout << i << endl;
	}
}

Node::Node(int data)
{
	Data = data;
	Next = nullptr;
}

Node::Node(int data, Node * next)
{
	Data = data;
	Next = next;	
}

void Node::SetNext(Node * next) {
	Next = next;
}
void nodeListOfNumber(Node* node) {
	while (node != NULL)
	{
		cout << node->Data << endl;
		node = node->Next;
	}
}


