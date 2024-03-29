#include "singly_linked_list.h"
#include <iostream>
using namespace std;

int main() {
    /* Test Singly Linked List */
    SLList myList;

    /* Add element test */
    myList.add(10);
    myList.add(20);
    myList.add(30);
    myList.add(40);
    cout << "Element added correctly\n";

    /* Print test */
    cout << "\nPrint test:\n";
    myList.print();

    /* Erase test */
    cout << "\nErase test1 (10 should be erased):\n";
    if(!myList.eraseHead()) cout << "List empty - Can not erase the head\n";
    myList.print();

    /* Erase position test */
    cout << "\nErase test2 (30 should be erased):\n";
    if(!(myList.erasePosition(1))) cout << "List empty or position not valid - Can not erase the head\n";
    myList.print();

    return 0;
}
