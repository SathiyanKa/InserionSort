# Insertion Sort Algorithm in C

This repository contains an implementation of the Insertion Sort algorithm in the C programming language.

## Table of Contents
- [Introduction](#introduction)
- [How Insertion Sort Works](#how-insertion-sort-works)
- [Program Structure](#program-structure)
- [How to Compile and Run](#how-to-compile-and-run)
- [Example Output](#example-output)
- [Complexity Analysis](#complexity-analysis)
- [Contributing](#contributing)
- [License](#license)

## Introduction
Insertion Sort is a simple comparison-based sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms like quicksort, heapsort, or merge sort, but it is well-suited for small datasets or partially sorted arrays.

## How Insertion Sort Works
1. Iterate from the second element to the end of the array.
2. For each element, compare it with the elements in the sorted portion of the array.
3. Shift all larger elements to the right to make space for the current element.
4. Insert the current element into the correct position in the sorted portion of the array.
5. Repeat until the array is fully sorted.

## Program Structure
The implementation consists of the following files:
- `main.c`: The main file that contains the implementation of the insertion sort algorithm and code to test it.
- `insertionSort.cbp`: Code::Blocks project file for the Insertion Sort algorithm.
- `bin/Debug/insertionSort.exe`: Compiled executable file (for reference).

## How to Compile and Run

### Prerequisites
To compile and run the program, you need:
- A C compiler (e.g., GCC)
- A terminal or command-line interface

### Steps
1. Clone this repository:
    ```bash
    git clone https://github.com/yourusername/insertionSort.git
    cd insertionSort
    ```

2. Compile the program:
    ```bash
    gcc main.c -o insertionSort
    ```

3. Run the compiled program:
    ```bash
    ./insertionSort
    ```

## Example Output
Enter the number of elements: 5  
Enter elements: 64 25 12 22 11  
Sorted array: 11 12 22 25 64

## Complexity Analysis
- **Time Complexity**:
  - Best case: O(n) (when the array is already sorted)
  - Average case: O(n²)
  - Worst case: O(n²)
  
  While insertion sort is inefficient on large datasets, it performs well on smaller ones or when the array is partially sorted.

- **Space Complexity**: O(1), as it is an in-place sorting algorithm and only requires a constant amount of extra memory.

## Contributing
Contributions are welcome! Feel free to fork the repository and submit a pull request with improvements or bug fixes.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
