// doubly linked list.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include"doublyLinkedList.h"
#include"nodeClass.h"
#include<cstddef>
#include <iostream>
using namespace std;

int main()
{
    Node N;
    doublyLinkedList DL;
    int f;
    cout << "please enter the values of your node list and if there is nothing enter a NEGATIVE number:\n";
    cin >> f;
    while (f >= 0)
    {
        DL.AddNode(f);
        cin >> f;
    }
    DL.printList();
    cout << "which node do you want to delete?";
    cin >> f;
    DL.deleteNode(f);
    DL.printList();
    cout << "which node do you want to check where is available or not:\n";
    cin >> f;
    if (DL.find(f))
        cout << "yes! it is in the list!\n";
    else
        cout << "No! it is not in the list!\n";
    return 0;
}


