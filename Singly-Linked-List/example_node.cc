#include "node.h"
#include <iostream>
using namespace std;

int main() {
    /* Test Node */
    Node n1;
    Node n2(20);
    Node n3(&n1);
    Node n4(40, &n3);
    n1.setData(10);
    n3.setData(30);

    // data
    cout << "data test:\n";
    cout << n1.getData() << endl;
    cout << n2.getData() << endl;
    cout << n3.getData() << endl;
    cout << n4.getData() << endl;

    // next
    cout << "\nnext test:\n";
    cout << n3.getNext()->getData() << endl;    // should print n1 data value
    cout << n4.getNext()->getData() << endl;    // should print n3 data value


    return 0;
}
