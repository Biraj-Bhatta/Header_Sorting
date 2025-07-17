# Sorting Algorithms in C

This project implements multiple sorting algorithms in the C programming language. Each algorithm is modular and independently usable. The project is useful for students, educators, and developers learning about or comparing sorting techniques.

## 🔧 Features

- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort
- Quick Sort
- Heap Sort
- Display Function

---

## 📁 File Structure
```
SortingHeaderFile
├── main.c          # Contains the main() function to test sorting
├── functions.c       # Implements all sorting algorithms
├── sort.h          # Header file declaring all public functions
├── Makefile        # Compiles the project
└── README.md       # Project documentation
```

- `functions.c` – Contains all function definitions and logic for sorting algorithms.

---

## 📌 Function Documentation

### 🔹 `void display(int arr[], int size)`
Prints the contents of an array.

**Parameters:**
- `arr[]`: Array to display.
- `size`: Number of elements in the array.

---

### 🔹 `void bubblesort(int arr[], int size)`
Sorts the array using the **Bubble Sort** algorithm.

**Time Complexity:** O(n²)

---

### 🔹 `void selectionsort(int arr[], int size)`
Sorts the array using the **Selection Sort** algorithm.

**Time Complexity:** O(n²)

---

### 🔹 `void insersionSort(int arr[], int size)`
Sorts the array using the **Insertion Sort** algorithm.

**Time Complexity:** O(n²)

---

### 🔹 `void mergesort(int arr[], int start, int end)`
Sorts the array using the **Merge Sort** algorithm (wrapper function).

**Note:** Subtracts 1 from `end` to pass correct bounds.

**Time Complexity:** O(n log n)

---

### 🔹 `void mergeSort(int arr[], int start, int end)`
Recursive **Merge Sort** logic.

**Parameters:**
- `start`: Starting index.
- `end`: Ending index.

---

### 🔹 `void quicksort(int arr[], int length)`
Sorts the array using the **Quick Sort** algorithm.

**Time Complexity:** O(n log n) average

---

### 🔹 `void heapsort(int arr[], int size)`
Sorts the array using the **Heap Sort** algorithm.

**Time Complexity:** O(n log n)

---

## 🧩 Internal Static Helpers

- `swap(int *m, int *n)`: Swaps two integers.
- `partition(int arr[], int low, int high)`: Used in Quick Sort.
- `quick_recursion(...)`: Recursive Quick Sort.
- `merge(...)`: Merges two sorted subarrays (used in Merge Sort).
- `maxheap(...)`: Builds the max heap.
- `maxheapify(...)`: Heapify logic.
- `HeapSort(...)`: Actual sorting using heap.

> These are marked `static` to indicate they are private to this translation unit.

---

## 🚀 Getting Started

### ✅ Compile and Run

```bash
gcc main.c functions.c -o main
./main.exe
```

### To run though make file
````bash
make   #To make .exe file
make clean   #To remove the file created by make
make clean all   #To rebuid the program again from scratch
``` 

