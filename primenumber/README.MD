# PRIME NUMBER  
A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.  
       ex:2,3,5,7,11,13,....  
 # code        
       '''#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; ++i) {
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
}'''

# HOW IT WORKS  
1.The user enters a number.  
2.The program checks if its greater than 1.  
3.it tests divisibility from 2 to n/2.  
4.if divisible,its not prime;otherwise,it is..  