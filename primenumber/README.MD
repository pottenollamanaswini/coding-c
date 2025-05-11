 # Prime Number Checker in C

## Introduction
This project implements a **prime number checker** using **C programming**. A prime number is a natural number greater than **1** that is only divisible by **1 and itself**.

## How It Works
- The program takes an integer as input.
- It checks divisibility from `2` to `sqrt(n)`.
- If no divisors are found, the number is prime.

## Usage
Compile and run the program with an integer as input to check if it's prime.

### Example:
```c  
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}  
'''  
## output  
Enter a positive integer: 11
11 is a prime number.  

Enter a positive integer: 20
20 is not a prime number.  

## END  

