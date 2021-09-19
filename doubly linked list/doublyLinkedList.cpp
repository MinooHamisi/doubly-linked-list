#include "doublyLinkedList.h"
#pragma once
#include"nodeClass.h"
#include<iostream>
#include<cstddef>
using namespace std;

doublyLinkedList::doublyLinkedList()
{
	N.data = 0;
	N.Rlink = NULL;
	N.Llink = NULL;
	head = NULL;
	tail = NULL;
}
//------------------------------------------------
doublyLinkedList::doublyLinkedList(int data)
{
	this->N.data = data;
	this->N.Llink = NULL;
	this->N.Rlink = NULL;
	this->head = NULL;
	this->tail = NULL;
}
//------------------------------------------------
void doublyLinkedList::AddNode(int data)
{
	Node* N = new Node(data);
	if (this->head == NULL)
	{
		this->head = N;
		this->tail = N;
		//cout << this->head->data<<" =head "<<this->tail->data<<" =tail\n";
	}
	else
	{
		this->tail->Rlink = N;
		this->tail->Rlink->Llink = this->tail;
		this->tail = N;
		N->Rlink = NULL;
		//cout << this->head->data << " =head "<<this->tail->data<<"=tail\n";
	}
}
//------------------------------------------------
void doublyLinkedList::deleteNode(int data)
{
	Node* temp = this->head;
	while (temp->data!=data && temp!=NULL)
	{
		temp = temp->Rlink;
	}
	if (temp == NULL)
	{
		cout << "this node is not available to delete!\n";
	}
	else
	{
		if (temp == this->tail)
		{
			this->tail = temp->Llink;
			this->tail->Rlink = NULL;
		}
		else
		{
			if (temp == this->head)
			{
				this->head = temp->Rlink;
				this->head->Llink = NULL;
			}
			else 
			{
				temp->Rlink->Llink = temp->Llink;
				temp->Llink->Rlink = temp->Rlink;
			}
		}
	}

}
//------------------------------------------------
void doublyLinkedList::printList()
{
	if (this->head == NULL)
	{
		cout << "your list is empty!\n";
		return;
	}
	Node* temp = this->head;
	do
	{
		cout << temp->data << " ";
		temp=temp->Rlink;

	} while (temp!=NULL);
	cout << "\n";
}
//------------------------------------------------
bool doublyLinkedList::find(int data)
{
	if (this->head == NULL)
		return false;
	else
	{
		Node* temp = this->head;
		while (temp != NULL)
		{
			if (temp->data == data)
				return true;
			else
				temp = temp->Rlink;
		}
	}
	return false;
}

bool doublyLinkedList::find(Node N)
{
	int data=N.data;
	if (this->head == NULL)
		return false;
	else
	{
		Node *temp = this->head;
		while (temp != NULL)
		{
			if (temp->data == data)
				return true;
			else
				temp = temp->Rlink;
		}
	}
	return false;
}
