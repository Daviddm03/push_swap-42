# push_swap

A sorting project developed in C as part of the 42 curriculum.

The goal is to sort a stack of integers using a limited set of operations while keeping the number of moves as low as possible.

## About

The program works with two stacks:

```text
Stack A
Stack B
```

Only a restricted set of operations can be used:

| Operation | Description |
| --- | --- |
| `sa` / `sb` | Swap the first two elements |
| `ss` | Swap both stacks |
| `pa` / `pb` | Push an element between stacks |
| `ra` / `rb` | Rotate a stack |
| `rr` | Rotate both stacks |
| `rra` / `rrb` | Reverse rotate a stack |
| `rrr` | Reverse rotate both stacks |

The project includes input validation, stack management, position and cost calculations, and separate logic for different sorting situations.

## Getting Started

### Requirements

- GCC or Clang
- Make
- A Unix-like environment

Clone the repository:

```bash
git clone git@github.com:Daviddm03/push_swap-42.git
cd push_swap-42/push_swap
```

Compile:

```bash
make
```

Run the program with a sequence of integers:

```bash
./push_swap 5 2 8 1 4
```

The program outputs the stack operations used by the sorting algorithm.

For a larger example:

```bash
./push_swap 42 17 3 99 8 21 1 64 12 7
```

Clean or rebuild:

```bash
make clean
make fclean
make re
```

## What I Learned

push_swap made me think about sorting from a different perspective.

Instead of simply choosing a standard sorting algorithm, I had to work within a restricted instruction set and consider the cost of moving elements between two stacks.

The project gave me more experience with linked data structures, algorithm design, input validation, and optimization.

## Tech

C · Algorithms · Data Structures · Makefile
