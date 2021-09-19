#pragma once
#include"nodeClass.h"
#include<iostream>
using namespace std;

class doublyLinkedList
{
private:
	Node N;
	Node* head;
	Node* tail;
public:
	doublyLinkedList();
	doublyLinkedList(int data);
	void AddNode(int data);
	void deleteNode(int data);
	void printList();
	bool find(int data);
	bool find(Node N);
};

