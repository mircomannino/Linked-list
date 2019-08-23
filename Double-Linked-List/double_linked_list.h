#ifndef __DOUBLE_LINKED_LIST_H__
#define __DOUBLE_LINKED_LIST_H__

#include "node_double.h"
#include <iostream>
#include <cstddef>

class DLList {
private:
    NodeDouble* head;
    NodeDouble* tail;
public:
    /* Constructor */
    DLList();

    /* Push methods */
    void pushFront(int data);       // Add node in the head
    void pushBack(int data);        // Add node in the tail

    /* Pop methods */
    int popFront();                 // Delete node from the head
    int popBack();                  // Delete node from the tail

    /* Erase methods */
    void eraseFront();              // Erase the head node
    void eraseBack();               // Erase the tail node

    /* Print methods */
    bool printFromHead();           // print from the head
    bool printFromTail();           // print from the tail
};

DLList::DLList() {
    this->head = NULL;
    this->tail = NULL;
}

void DLList::pushFront(int data) {
    NodeDouble* newNode = new NodeDouble(data);
    if(((this->head) == NULL)) {
        this->head = newNode;
        this->tail = newNode;
    } else {
        NodeDouble* headCopy = this->head;
        newNode->setNext(NULL);
        newNode->setPrev(this->head);
        this->head = newNode;
        headCopy->setNext(newNode);
    }

}

void DLList::pushBack(int data) {
    NodeDouble* newNode = new NodeDouble(data);
    if(((this->tail) == NULL)) {
        this->head = newNode;
        this->tail = newNode;
    } else {
        NodeDouble* tailCopy = this->tail;
        newNode->setNext(this->tail);
        newNode->setPrev(NULL);
        this->tail = newNode;
        tailCopy->setPrev(newNode);
    }
}

int DLList::popFront() {
    int data = -1;
    if((this->head) != NULL) {
        data = (this->head)->getData();
        ((this->head)->getPrev())->setNext(NULL);
        (this->head) = (this->head)->getPrev();
    }
    return data;
}

int DLList::popBack() {
    int data = -1;
    if((this->tail) != NULL) {
        data = (this->tail)->getData();
        ((this->tail)->getNext())->setPrev(NULL);
        (this->tail) = (this->tail)->getNext();
    }
    return data;
}

bool DLList::printFromHead() {
    if(((this->head) == NULL) && ((this->head) == NULL)) {
        return false;
    }

    NodeDouble* current = this->head;
    while(current != NULL) {
        std::cout << current->getData() << std::endl;
        current = current->getPrev();
    }
}

void DLList::eraseFront() {
    this->popFront();
}

void DLList::eraseBack() {
    this->popBack();
}

bool DLList::printFromTail() {
    if(((this->head) == NULL) && ((this->head) == NULL)) {
        return false;
    }

    NodeDouble* current = this->tail;
    while(current != NULL) {
        std::cout << current->getData() << std::endl;
        current = current->getNext();
    }
}

#endif
