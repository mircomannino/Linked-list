#ifndef __SINGLY_LINKED_LIST_H__
#define __SINGLY_LINKED_LIST_H__

#include "node.h"
#include <cstddef>
#include <iostream>

class SLList {
private:
    Node* head;
public:
    /* Constructor */
    SLList();

    /* Destructor */
    ~SLList();

    /* Add a node */
    void add(int data);

    /* Erase a node */
    bool eraseHead();

    /* Erase in a specific position */
    bool erasePosition(int position);

    /* Print from the head, each node is printed in a new line */
    void print();

};

SLList::SLList() {
    head = NULL;
}

SLList::~SLList() {
    while((this->head) !=NULL) {
        this->eraseHead();
    }
}

void SLList::add(int data) {
    if(this->head == NULL) {
        Node* newNode = new Node(data);
        this->head = newNode;
    } else {
        Node* newNode = new Node(data);
        Node* current = this->head;
        while(current->getNext() != NULL) {
            current = current->getNext();
        }
        current->setNext(newNode);
    }
}

bool SLList::eraseHead() {
    /* Return if the list is empty */
    if(this->head == NULL) {
        return false;
    }
    Node* headCopy = this->head;
    this->head = (this->head)->getNext();
    delete headCopy;
    return true;
}

bool SLList::erasePosition(int position) {
    /* Return if the list is empty */
    if(this->head == NULL) {
        return false;
    }
    Node* current = this->head;
    Node* prev = NULL;
    for(int i = 0; i < position; i++) {
        if(current == NULL) {
            return false;   // Position is greater than the size of the list
        }
        if(i == (position-1)) {
            prev = current;
        }
        current = current->getNext();
    }
    /* Erase the selected element */
    prev->setNext(current->getNext());
    delete current;
    return true;
}

void SLList::print() {
    Node* current = this->head;
    while(current != NULL) {
        std::cout << current->getData() << std::endl;   // Get the value
        current = current->getNext();                   // Get the next node
    }
}

#endif
