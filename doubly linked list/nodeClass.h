#pragma once
#include <iostream>
#include<cstddef>
using namespace std;
class Node
{
public:
	int data;
	Node *Llink, *Rlink;
	Node(); 
	Node(int d, Node* l, Node* r);
	Node(int data);

};

