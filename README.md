# push_swap-42 🧮
<h3>What is push_swap ⁉️</h3>
The push_swap project at 42 is an algorithm-focused challenge centered on sorting. The goal is to implement a program that receives a sequence of integers as input and sorts them using only two stacks and a limited set of operations. This project teaches important concepts in stack manipulation, algorithm optimization, and computational efficiency.

<h3>Key points 🔑</h3>

**Data Structures**
- Uses two stacks (a and b) to store and manipulate numbers during the sorting process.

**Allowed Operations**
- The program is limited to a set of specific operations:
 • **Swap:** sa, sb (swap the top elements of a or b) and ss (swap on both stacks).
 • **Rotate:** ra, rb (rotate upwards on a or b) and rr (rotate both stacks).
 • **Reverse Rotate:** rra, rrb (rotate downwards on a or b) and rrr (reverse rotate both stacks).
 • **Push:** pa (push to a) and pb (push to b).

**Sorting Algorithm**
- The project uses the Turkish algorithm, a divide-and-conquer approach that optimizes sorting by dividing the stack into smaller groups, sorting them progressively, and reintegrating the results. This strategy is highly efficient in minimizing the number of operations required.

**Efficiency**
- The program's performance is evaluated based on the number of operations performed. The Turkish algorithm is designed to optimize the sorting process, ensuring fewer movements and a streamlined flow.

**Input and Validation**
- The program ensures the validity of the input, checking for integers only, no duplicates, and in-range values.

<h3>Conclusion ✅</h3>
The push_swap project is a practical exercise combining sorting algorithms, data manipulation, and computational efficiency. It allows students to develop skills in data structures, algorithm analysis, and optimization logic, utilizing a stack-based approach and implementing strategies like the Turkish algorithm.

<h3>How to run</h3>

1 - **Clone**
```bash
$ https://github.com/Daviddm03/push_swap-42.git
```

2 - **Navigate to the directory**
```bash
$ cd push_swap-42
```

3 - **Compile the program**
```bash
$ make
```

4 - **run, "you have to use a random amount of negative and/or positive numbers, which cannot be duplicated".**
```bash
$ ./push_swap 91 62 7 150 8 26
```

