#include "Misc/LinkedList.h"
#include <iostream>
#include <stdexcept>

using namespace std;

/**
 * Main for running exercises from Chapter 1
 */
int main() {
    LinkedList<int> x;
    x.appendToTail(5);
    x.appendToTail(7);
    x.printList();
    x.deleteNode(5);
    x.deleteNode(8);
    x.printList();
    
}