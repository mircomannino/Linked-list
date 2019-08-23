#ifndef __DOUBLE_LINKED_LIST_H__
#define __DOUBLE_LINKED_LIST_H__

#include "node.h"
#include <cstddef>

class DLList {
private:
    Node* head;
    Node* tail;
public:
    DLList() {
        head = NULL;
        tail = NULL;
    }
};

#endif
