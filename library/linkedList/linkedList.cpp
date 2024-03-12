#include <iostream>
#include "linkedList.h"

LinkedList::LinkedList(void):head(nullptr){
    cout << "bat dau danh sach" << endl;
}
LinkedList::~LinkedList(void){
    cout << "xoa tat ca danh sach" << endl;
    clear();
}
void LinkedList::clear(void){
    Node* current = head;
    while (current != nullptr)
    {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
}
void LinkedList::prepend(int value){
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode; 
}
void LinkedList::append(int value){
    Node* newNode = new Node(value);
    if(head == nullptr){
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = newNode;
}
void LinkedList::insertAfter(Node* prevNode, int value){
    if (prevNode == nullptr) {
        std::cout << "Node trước đó không thể là nullptr\n";
        return;
    }
    Node* newNode = new Node(value);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}
void LinkedList::remove(int value){
    Node* current = head;
    Node* prev = nullptr;
    while (current != nullptr && current->data != value) {
        prev = current;
        current = current->next;
    }
    if (current == nullptr) return;
    if (prev == nullptr) {
        head = current->next;
    } else {
        prev->next = current->next;
    }
    delete current;
}
Node* LinkedList::search(int value){
    Node* current = head;
    while (current != nullptr) {
        if (current->data == value) return current;
        current = current->next;
    }
    return nullptr;
}
void LinkedList::printList(void){
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr\n";
}