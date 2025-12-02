#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

/*
 * Array ADT - generic dynamic array
 * Provides basic operations: insert, delete, search, access, and print
 */
template <typename T>
class Array
{
    T *arr;       // Pointer to the dynamically allocated memory block
    int capacity; // Total allocated space
    int length;   // Number of elements currently stored

    // Private helper: Resize the array when full
    void resize()
    {
        int newCap = capacity * 2; // Double the capacity
        T *newArr = new T[newCap]; // Allocate new memory

        for (int i = 0; i < length; i++) // Copy existing elements
            newArr[i] = arr[i];

        delete[] arr;      // Free old memory
        arr = newArr;      // Update pointer
        capacity = newCap; // Update capacity
    }

public:
    // Constructor: initialize with default capacity 4
    Array(int cap = 4)
    {
        capacity = cap;
        arr = new T[capacity];
        length = 0;
    }

    // Destructor: free allocated memory
    ~Array()
    {
        delete[] arr;
    }

    // Insert at the end (push back)
    void pushBack(const T &value)
    {
        if (length == capacity)
            resize(); // Resize if full
        arr[length++] = value;
    }

    // Insert at a specific index
    void insertAt(int index, const T &value)
    {
        if (index < 0 || index > length)
        {
            cout << "Index out of bounds\n";
            return;
        }
        if (length == capacity)
            resize();

        // Shift elements right to make space
        for (int i = length - 1; i >= index; i--)
            arr[i + 1] = arr[i];

        arr[index] = value;
        length++;
    }

    // Delete element at a specific index
    void deleteAt(int index)
    {
        if (index < 0 || index >= length)
        {
            cout << "Index out of bounds\n";
            return;
        }

        // Shift elements left to fill the gap
        for (int i = index; i < length - 1; i++)
            arr[i] = arr[i + 1];

        length--;
    }

    // Search for a value and return its index, -1 if not found
    int search(const T &value)
    {
        for (int i = 0; i < length; i++)
            if (arr[i] == value)
                return i;
        return -1;
    }

    // Access element at index with bounds checking
    T get(int index)
    {
        if (index < 0 || index >= length)
        {
            cout << "Index out of bounds\n";
            return T(); // Return default-constructed object if invalid
        }
        return arr[index];
    }

    // Print all elements
    void print()
    {
        for (int i = 0; i < length; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

#endif