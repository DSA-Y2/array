
#include <iostream>
#include "Array.h"
using namespace std;

int main()
{
    // Create an Array of integers
    Array<int> arr(4);

    // Insert elements at the end
    arr.pushBack(10);
    arr.pushBack(20);
    arr.pushBack(30);

    // Insert at a specific index
    arr.insertAt(1, 15); // Inserts 15 at index 1

    // Print current array
    arr.print(); // Output: 10 15 20 30

    // Search for value 20
    int idx = arr.search(20);
    cout << "Index of 20: " << idx << endl;

    // Delete element at index 2
    arr.deleteAt(2); // Removes the element 20

    // Print updated array
    arr.print(); // Output: 10 15 30

    // Access element at index 1
    cout << "Element at index 1: " << arr.get(1) << endl;

    return 0;
}
