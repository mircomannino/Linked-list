#include "double_linked_list.h"
#include <iostream>
using namespace std;

int main() {
    /* Test Singly Linked List */
    DLList myList;

    /* Add element test */
    myList.addHead(10);
    myList.addHead(20);
    myList.addTail(30);
    cout << "Element added correctly\n";

    /* Print test*/
    cout << "\nPrint test - From head (20, 10, 30) :\n";
    myList.printFromHead();

    /* Print test */
    cout << "\nPrint test - From tail (30, 10, 20):\n";
    myList.printFromTail();


    return 0;
}
