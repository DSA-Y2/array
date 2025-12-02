# Array ADT 

## Overview

This repository contains an implementation of a **custom Array ADT** in C++. The goal is to understand how arrays work under the hood, including:

- Dynamic resizing
- Insertion at any index
- Deletion at any index
- Linear search
- Element access
- Memory management

Unlike `std::vector`, this implementation is built **from scratch** to illustrate the mechanics of dynamic arrays and ADTs.

---

## Features

- Generic implementation using C++ templates (`Array<T>`)
- Automatic resizing when capacity is exceeded
- Safe element access with bounds checking
- Insert, delete, search operations
- Easy to reuse in other projects

---

## File Structure
```

DSA-y2/
│
├─ array/
│ ├─ Array.h # Header containing the Array ADT implementation
│ └─ main.cpp # Example usage of the Array ADT

````

---

## Usage
1. Include `Array.h` in your project:
```cpp
#include "Array.h"
````

2. Create an array object and use its methods:

```cpp
Array<int> arr;      // Create an integer array
arr.pushBack(10);    // Insert at the end
arr.insertAt(1, 20); // Insert at index 1
arr.deleteAt(0);     // Delete element at index 0
int idx = arr.search(20);  // Find the index of value 20
arr.print();         // Print current elements
```

3. Compile and run:

```bash
g++ main.cpp -o run
./run
```

---

## Notes

- The implementation uses **templates**, so it works with any type (`int`, `double`, `string`, or custom classes).
- Memory is managed manually (`new[]` and `delete[]`), reinforcing understanding of dynamic arrays.
- This project is designed as an educational tool to reinforce core **Data Structures and Algorithms** concepts.

---
