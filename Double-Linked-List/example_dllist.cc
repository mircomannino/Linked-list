#include "double_linked_list.h"
#include <iostream>
using namespace std;

int main() {
    /* Test Singly Linked List */
    DLList myList;

    /* Add element test */
    myList.pushFront(10);
    myList.pushFront(20);
    myList.pushBack(30);
    myList.pushBack(40);
    myList.pushFront(50);
    cout << "Element added correctly\n";

    /* Print test*/
    cout << "\nPrint test - From head (20, 10, 30) :\n";
    myList.printFromHead();

    /* Print test */
    cout << "\nPrint test - From tail (30, 10, 20):\n";
    myList.printFromTail();


    /* Pop test */
    cout << "\nPopFront test:\n";
    int dataFront = myList.popFront();
    if(dataFront != -1) {
        cout << dataFront << endl;
    } else {
        cout << "Can not pop from the head\n";
    }
    cout << "Updated list:\n";
    myList.printFromHead();


    /* Pop test */
    cout << "\nPopBack test:\n";
    int dataBack = myList.popBack();
    if(dataBack != -1) {
        cout << dataBack << endl;
    } else {
        cout << "Can not pop from the tail\n";
    }
    cout << "Updated list:\n";
    myList.printFromHead();

    return 0;
}
