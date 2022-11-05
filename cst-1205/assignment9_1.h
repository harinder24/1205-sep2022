#pragma once
#include<list>
using namespace std;

void listOfNumber(list<int> const &number);


class Node
{
public:
	int Data;
	Node* Next;

public:
	Node(int data);
	Node(int data, Node* next);
	void SetNext(Node* next);

};
void nodeListOfNumber(Node* node);