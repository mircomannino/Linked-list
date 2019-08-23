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
    DLList() {
        this->head = NULL;
        this->tail = NULL;
    }

    /* Add a node in the head */
    void addHead(int data) {
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

    /* Add a node in the tail */
    void addTail(int data) {
        NodeDouble* newNode = new NodeDouble(data);
        if(((this->head) == NULL)) {
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


    /* Print from the head */
    bool printFromHead() {
        if(((this->head) == NULL) && ((this->head) == NULL)) {
            return false;
        }

        NodeDouble* current = this->head;
        while(current != NULL) {
            std::cout << current->getData() << std::endl;
            current = current->getPrev();
        }
    }

    /* Print from the tail */
    bool printFromTail() {
        if(((this->head) == NULL) && ((this->head) == NULL)) {
            return false;
        }

        NodeDouble* current = this->tail;
        while(current != NULL) {
            std::cout << current->getData() << std::endl;
            current = current->getNext();
        }
    }
};

#endif
