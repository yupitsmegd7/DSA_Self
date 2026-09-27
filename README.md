# DSA Self

<div align="center">

### Data Structures & Algorithms — built from scratch in C

A hands-on repository for learning **memory, pointers, structures, arrays, matrices, linked lists, stacks, queues, and core DSA operations** by implementing them directly in C.

<br>

![C](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![DSA](https://img.shields.io/badge/Focus-Data%20Structures%20%26%20Algorithms-F97316?style=for-the-badge)
![Learning](https://img.shields.io/badge/Status-Actively%20Learning-22C55E?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-FACC15?style=for-the-badge)

</div>

---

## About

**DSA Self** is my personal Data Structures and Algorithms practice repository.

The goal is not just to obtain the correct output, but to understand what happens underneath it:

- how memory is allocated,
- how pointers connect data,
- how arrays are resized,
- how linked structures are traversed,
- how sparse data can be represented efficiently,
- how elementary data structures behave internally, and
- how an implementation can be improved through debugging and iteration.

The repository is intentionally incremental. Earlier files represent smaller building blocks, while later programs combine multiple ideas into larger menu-driven implementations.

---

## Current Coverage

```text
C fundamentals
├── Functions
├── Pointers
├── Structures
├── Call by value / address
└── Dynamic memory allocation

Linear structures
├── Arrays
├── Dynamic arrays
├── Singly linked lists
├── Stacks
└── Queues

Matrix-based problems
├── Matrix operations
├── Sparse matrices
├── 3-tuple representation
├── Sparse transpose
└── Sparse addition

Applications
├── Employee records
├── Student records
├── Complex-number operations
├── Polynomial addition
└── Palindrome detection
```

---

## Repository Map

| File | Implementation / Concept |
| --- | --- |
| [`1_1.c`](./1_1.c) | Array insertion at a position using traversal and element shifting |
| [`1_2.c`](./1_2.c) | Comparing two numbers through a function |
| [`1_3.c`](./1_3.c) | Employee records using an array of structures and gross-salary calculation |
| [`1_4.c`](./1_4.c) | Complex-number addition and multiplication using structures |
| [`1_5.c`](./1_5.c) | Dynamic array with insertion, deletion, linear search, and traversal |
| [`1_6.c`](./1_6.c) | Square-matrix operations: non-zero count, upper triangle, and adjacent diagonals |
| [`1_7.c`](./1_7.c) | Sparse-matrix representation using 3-tuples |
| [`1_8.c`](./1_8.c) | Transpose of a sparse matrix in 3-tuple representation |
| [`1_9.c`](./1_9.c) | Addition of two sparse matrices represented as row-column-value tuples |
| [`1_10.c`](./1_10.c) | Polynomial addition using coefficient arrays |
| [`2_1.c`](./2_1.c) | Creating a singly linked-list node with dynamic memory allocation |
| [`2_2.c`](./2_2.c) | Building and traversing a singly linked list |
| [`2_3.c`](./2_3.c) | Linked-list insertion practice |
| [`2_4.c`](./2_4.c) | Complete menu-driven singly linked list: insert, delete, count, traverse, search, sort, reverse |
| [`2_5.c`](./2_5.c) | Polynomial representation and addition using linked lists |
| [`3_1.c`](./3_1.c) | Dynamically allocated student records with marks, name, and ID |
| [`Palindrom_using_stack_and_queue.c`](./Palindrom_using_stack_and_queue.c) | Palindrome checking with a stack and queue |

---

## Concept Progression

The files roughly follow a progression from basic C programming toward data-structure implementation.

### 1. Arrays and memory

The repository begins with direct array manipulation before moving to dynamically allocated arrays.

A typical dynamic allocation pattern used in the exercises is:

```c
int *a = malloc(n * sizeof(int));
```

and resizing is explored with:

```c
*a = realloc(*a, (*n + 1) * sizeof(int));
```

This makes insertion and deletion exercises useful for understanding both **index manipulation** and **memory management**.

### 2. Structures

Structures are used to model more meaningful records and objects, including:

- employee information,
- complex numbers, and
- student records.

These exercises introduce member access, arrays of structures, structure pointers, and dynamic allocation.

### 3. Matrices and sparse matrices

Matrix exercises move from ordinary two-dimensional arrays to **sparse representations**.

Instead of storing every zero, a sparse matrix can store only:

```text
row   column   value
```

That idea is then extended to:

- sparse-matrix conversion,
- transpose, and
- addition.

### 4. Linked lists

The linked-list exercises build up progressively:

```text
Create one node
      ↓
Build multiple nodes
      ↓
Traverse the list
      ↓
Insert nodes
      ↓
Menu-driven list operations
      ↓
Use linked lists to represent polynomials
```

The larger singly linked-list implementation includes:

- insertion,
- deletion,
- counting,
- traversal,
- searching,
- sorting, and
- reversal.

### 5. Stack and queue applications

The palindrome exercise demonstrates how different data-access rules can solve the same problem:

```text
Input
 ├────► Stack ──► LIFO ──┐
 │                        ├──► Compare
 └────► Queue ──► FIFO ──┘
```

The stack reverses access order while the queue preserves it.

---

## How to Run

### Clone the repository

```bash
git clone https://github.com/yupitsmegd7/DSA_Self.git
cd DSA_Self
```

### Compile any program

Using GCC:

```bash
gcc 2_4.c -o program
```

### Run

**Windows**

```bash
program.exe
```

**Linux / macOS**

```bash
./program
```

To experiment with another exercise, simply replace `2_4.c` with the desired filename.

---

## Skills Practised

| Area | Topics |
| --- | --- |
| **C fundamentals** | functions, loops, conditions, arrays |
| **Memory** | `malloc()`, `realloc()`, `free()` |
| **Pointers** | pointer traversal, structure pointers, dynamic nodes |
| **Structures** | custom data types, arrays of structures |
| **Arrays** | insertion, deletion, traversal, linear search |
| **Matrices** | matrix traversal, diagonals, triangular matrices |
| **Sparse matrices** | 3-tuple representation, transpose, addition |
| **Linked lists** | creation, insertion, deletion, search, sort, reverse |
| **Stacks / queues** | LIFO, FIFO, overflow/underflow concepts |
| **Problem modelling** | complex numbers, polynomials, records, palindrome checking |

---

## Learning Roadmap

### Implemented / currently practised

- [x] Arrays
- [x] Structures
- [x] Dynamic memory allocation
- [x] Matrix operations
- [x] Sparse-matrix representation
- [x] Sparse-matrix transpose
- [x] Sparse-matrix addition
- [x] Polynomial addition with arrays
- [x] Singly linked-list fundamentals
- [x] Linked-list insertion and deletion
- [x] Linked-list searching and traversal
- [x] Linked-list sorting and reversal
- [x] Polynomial addition using linked lists
- [x] Stack fundamentals
- [x] Queue fundamentals
- [x] Stack + queue application

### Next major DSA areas

- [ ] Doubly linked lists
- [ ] Circular linked lists
- [ ] Stack using linked lists
- [ ] Queue using linked lists
- [ ] Circular queue
- [ ] Priority queue
- [ ] Recursion
- [ ] Searching algorithms
- [ ] Sorting algorithms
- [ ] Trees
- [ ] Binary search trees
- [ ] Heaps
- [ ] Hash tables
- [ ] Graphs
- [ ] BFS / DFS
- [ ] Greedy algorithms
- [ ] Dynamic programming

---

## Repository Philosophy

> **Understand → Implement → Break → Debug → Improve**

This repository is a learning log, so implementations may evolve as new concepts are learned.

The emphasis is on building intuition for:

1. **how the data is stored,**
2. **how it moves through memory,**
3. **how each operation changes the structure,** and
4. **what the time and space cost of that operation is.**

---

## Tech

<p>
  <img src="https://skillicons.dev/icons?i=c,gcc,git,github,vscode" alt="C, GCC, Git, GitHub and VS Code" />
</p>

- **Language:** C
- **Compiler:** GCC
- **Version control:** Git
- **Repository hosting:** GitHub
- **Editor:** VS Code

---

## Contributing

This is primarily a personal learning repository, but constructive suggestions are welcome.

Useful contributions include:

- identifying edge cases,
- fixing memory-management problems,
- suggesting cleaner implementations,
- improving time or space complexity, and
- explaining alternative approaches.

---

## Author

### Gourav Dutta

Computer Science student building foundations in:

**Data Structures • Algorithms • Machine Learning • Software Development**

GitHub: [@yupitsmegd7](https://github.com/yupitsmegd7)

---

## License

This repository is licensed under the **MIT License**.

See [`LICENSE`](./LICENSE) for details.

---

<div align="center">

### Learning DSA one implementation at a time.

⭐ If this repository helps you learn something, consider starring it.

</div>
