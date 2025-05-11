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
