#ifndef __NODE_H__
#define __NODE_H__

#include <cstddef>

class Node {
private:
    int data;
    Node* next;
public:
    /* Constructors */
    Node();
    Node(int data);
    Node(Node* next);
    Node(int data, Node* next);

    /* Getters */
    int getData() const { return this->data; }
    Node* getNext() const { return this->next; }

    /* Setters */
    void setData(int data) { this->data = data; }
    void setNext(Node* next) { this->next = next; }
};

Node::Node() {
    this->data = 0;
    this->next = NULL;
}
Node::Node(int data) {
    this->data = data;
    this->next = NULL;
}
Node::Node(Node* next) {
    this->data = 0;
    this->next = next;
}
Node::Node(int data, Node* next) {
    this->data = data;
    this->next = next;
}



#endif
