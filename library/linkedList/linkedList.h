#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value): data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList(void);
    ~LinkedList(void);
    void clear(void);
    void prepend(int value);
    void append(int value);
    void insertAfter(Node* prevNode, int value);
    void remove(int value);
    Node* search(int value);
    void printList(void);
};

#endif

