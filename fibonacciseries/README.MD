# Fibonacci Series in C

## Overview
This program calculates and prints the Fibonacci series up to a given number of terms using the C programming language.

## Fibonacci Series Definition
The Fibonacci series is a sequence of numbers in which each number is the sum of the two preceding ones, starting from 0 and 1:

## How It Works
- The user inputs the number of terms to be generated.
- The program calculates each term using a loop or recursion.
- The output displays the Fibonacci sequence up to the specified number of terms.

## Installation
To compile and run the program, follow these steps:

1. Install a C compiler (e.g., GCC).
2. Copy the source code into a file (e.g., `fibonacci.c`).
3. Open a terminal and run:
   ```sh
   gcc fibonacci.c -o fibonacci
   ./fibonacci  
   4. Enter the number of terms to generate the sequence.

## Code Example
Here's a basic implementation in C:

```c
#include <stdio.h>

void fibonacci(int n) {
 int a = 0, b = 1, next;
 for (int i = 0; i < n; i++) {
     printf("%d ", a);
     next = a + b;
     a = b;
     b = next;
 }
 printf("\n");
}

int main() {
 int terms;
 printf("Enter the number of terms: ");
 scanf("%d", &terms);
 fibonacci(terms);
 return 0;
}

## Example Output
 Enter the number of terms:8
 Fibonacci series: 0 1 1 2 3 5 8 13  
 




  

