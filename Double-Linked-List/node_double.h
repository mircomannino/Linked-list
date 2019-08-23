#ifndef __NODE_H__
#define __NODE_H__

#include <cstddef>

class NodeDouble {
private:
    int data;
    NodeDouble* next;
    NodeDouble* prev;
public:
    /* Constructors */
    NodeDouble(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    /* Getters */
    int getData() const { return this->data; }
    NodeDouble* getNext() const { return this->next; }
    NodeDouble* getPrev() const { return this->prev; }

    /* Setters */
    void setData(int data) { this->data = data; }
    void setNext(NodeDouble* next) { this->next = next; }
    void setPrev(NodeDouble* prev) { this->prev = prev; }
};

#endif
