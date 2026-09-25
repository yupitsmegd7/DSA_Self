# DSA Self — Data Structures & Algorithms in C

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c" />
  <img src="https://img.shields.io/badge/DSA-Learning-orange?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Status-Actively%20Learning-success?style=for-the-badge" />
  <img src="https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge" />
</p>

<p align="center">
  A growing collection of <b>Data Structures and Algorithms implemented from scratch in C</b>.
</p>

---

## About

**DSA Self** is my personal repository for learning, implementing and experimenting with fundamental concepts in **Data Structures and Algorithms using C**.

Rather than relying only on library implementations, the goal is to understand how data structures actually work internally — including memory allocation, traversal, insertion, deletion and algorithmic operations.

This repository will continue evolving as I move from fundamental C concepts toward more advanced DSA topics and problem solving.

---

## Concepts Covered

### C Programming Fundamentals
- Functions
- Pointers
- Call by value
- Call by address
- Structures
- Arrays of structures
- Dynamic memory allocation
- `malloc()`
- `realloc()`
- Pointer arithmetic

### Arrays
- Array traversal
- Element insertion
- Element deletion
- Linear search
- Dynamic arrays

### Matrices
- Matrix traversal
- Non-zero element detection
- Upper triangular matrices
- Main diagonal operations
- Sparse matrix representation

### Sparse Matrices
- 3-Tuple representation
- Sparse matrix conversion
- Sparse matrix transpose

### Linked Lists
- Node creation
- Dynamic node allocation
- Singly linked list creation
- Linked list traversal
- Node insertion

### Stack & Queue
- Stack implementation using arrays
- Queue implementation using arrays
- Push / Pop
- Enqueue / Dequeue
- Overflow / Underflow handling
- Palindrome checking using Stack + Queue

---

## Repository Structure

| File | Concept |
|------|---------|
| `1_1.c` | Array insertion using traversal |
| `1_2.c` | Number comparison using functions |
| `1_3.c` | Employee records using array of structures |
| `1_4.c` | Complex number operations using structures |
| `1_5.c` | Dynamic array insertion, deletion, search and traversal |
| `1_6.c` | Square matrix operations |
| `1_7.c` | Sparse matrix representation using 3-tuple format |
| `1_8.c` | Sparse matrix transpose |
| `2_1.c` | Basic linked-list node creation |
| `2_2.c` | Creating and traversing a singly linked list |
| `2_3.c` | Linked-list insertion practice |
| `3_1.c` | Dynamic structure allocation for student records |
| `Palindrom_using_stack_and_queue.c` | Palindrome detection using Stack and Queue |

---

## Example — Dynamic Array Operations

The repository includes menu-driven programs that perform operations such as:

```text
*** MENU ***

1. Insert
2. Delete
3. Linear Search
4. Traverse
5. Exit
```

The array implementation uses dynamic memory allocation:

```c
int *a = malloc(n * sizeof(int));
```

and allows the array to grow dynamically using:

```c
*a = realloc(*a, (*n + 1) * sizeof(int));
```

This helps demonstrate how dynamic arrays work internally.

---

## Sparse Matrix Representation

Sparse matrices are represented using the **3-Tuple representation**:

```text
Row   Column   Value
```

Instead of storing every zero in a matrix, only non-zero values and their positions are stored.

Example:

```text
0 0 5
0 3 8
2 1 7
```

This provides a more memory-efficient representation for matrices containing mostly zero values.

---

## Stack + Queue Palindrome Detection

One experiment in this repository checks whether a string is a palindrome using both a **Stack** and a **Queue**.

```text
Input
  │
  ├────► Stack ───► LIFO
  │
  └────► Queue ───► FIFO
                 │
                 ▼
              Compare
```

Because a stack reverses the order while a queue preserves it, comparing their outputs can determine whether the sequence is a palindrome.

---

## How to Run

### 1. Clone the repository

```bash
git clone https://github.com/yupitsmegd7/DSA_Self.git
```

### 2. Enter the directory

```bash
cd DSA_Self
```

### 3. Compile a program

Using GCC:

```bash
gcc 1_5.c -o program
```

### 4. Run it

#### Windows

```bash
program.exe
```

#### Linux / macOS

```bash
./program
```

---

## Current Learning Progress

```text
C Fundamentals             ███████████████░░░░░
Arrays                     ████████████████░░░░
Matrices                   ██████████████░░░░░░
Sparse Matrices            █████████████░░░░░░░
Linked Lists               █████████░░░░░░░░░░░
Stacks & Queues             ████████░░░░░░░░░░░
Trees                       ░░░░░░░░░░░░░░░░░░░░
Graphs                      ░░░░░░░░░░░░░░░░░░░░
Searching & Sorting         ░░░░░░░░░░░░░░░░░░░░
Dynamic Programming         ░░░░░░░░░░░░░░░░░░░░
```

---

## Planned Topics

The repository will gradually include implementations of:

- [x] Arrays
- [x] Structures
- [x] Dynamic memory allocation
- [x] Matrix operations
- [x] Sparse matrices
- [x] Linked-list basics
- [x] Stack basics
- [x] Queue basics
- [ ] Complete singly linked list
- [ ] Doubly linked list
- [ ] Circular linked list
- [ ] Stack using linked list
- [ ] Queue using linked list
- [ ] Circular queue
- [ ] Priority queue
- [ ] Binary trees
- [ ] Binary search trees
- [ ] Heap
- [ ] Hash tables
- [ ] Graphs
- [ ] BFS
- [ ] DFS
- [ ] Recursion
- [ ] Searching algorithms
- [ ] Sorting algorithms
- [ ] Greedy algorithms
- [ ] Dynamic programming

---

## Goals of This Repository

The primary goals are to:

1. Build strong fundamentals in Data Structures and Algorithms.
2. Understand memory management in C.
3. Implement data structures manually.
4. Analyse time and space complexity.
5. Improve problem-solving ability.
6. Build a strong base for competitive programming and software engineering.
7. Maintain a record of my DSA learning journey.

---

## Development Philosophy

The repository focuses on:

> **Understand → Implement → Debug → Optimise → Repeat**

Some programs are intentionally kept close to their original learning implementations so that progress can be tracked over time.

As my understanding improves, implementations may be rewritten with better memory management, modularity and algorithmic efficiency.

---

## Tech Stack

<p>
  <img src="https://skillicons.dev/icons?i=c,gcc,git,github,vscode" />
</p>

- **Language:** C
- **Compiler:** GCC
- **Version Control:** Git
- **Repository Hosting:** GitHub
- **Editor:** VS Code

---

## Contributing

This is primarily a personal learning repository, but suggestions and improvements are welcome.

If you notice:

- a better algorithm,
- an optimization,
- a bug,
- an edge case,
- or a cleaner implementation,

feel free to open an issue or submit a pull request.

---

## Author

### Gourav Dutta

Computer Science student exploring:

`Data Structures` • `Algorithms` • `Machine Learning` • `Software Development`

GitHub: [@yupitsmegd7](https://github.com/yupitsmegd7)

---

## License

This project is licensed under the **MIT License**.

See [`LICENSE`](LICENSE) for more information.

---

<p align="center">
  <b>Learning DSA one implementation at a time.</b>
</p>

<p align="center">
  ⭐ If you find this repository useful, consider giving it a star.
</p>
