#include "nodeClass.h"
#include <iostream>
#include<cstddef>
using namespace std;

Node::Node()
{
	 data = 0;
	 Llink = NULL;
	 Rlink = NULL; 
}
//------------------------------------------------
Node::Node(int d, Node* l, Node* r)
{
	this->data = d;
	this->Llink = l;
	this->Rlink = r;
}
//------------------------------------------------
Node::Node(int data)
{
	this->data = data;
	this->Llink = NULL;
	this->Rlink = NULL;
}
