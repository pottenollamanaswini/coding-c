# FIBONACCI SERIES IN C
  The fibonacci series is a sequence of numbers in which each number is the sum of two preceding ones.The series typically starts with 0 and 1.  

  ** PROGRAM FEATURES  
  * Written in c  
  * Accepts user input for how many terms to print  
  * Prints the fibonacci series up to the specified numbers of terms  

  ** HOW IT WORKS  
  1.The user enters the number of terms.  
  2.The program calculates the series iteratively.  
  3.The result is printed to the console.  

  # code  
  #include<stdio.h>  
  int main()  
  {  
    int n,first=0,second=1,next;  
    printf("Enter the number of terms:");  
    scanf("%d",&n);  
    printf("Fibonacci series:");  
    for(int i=0;i<n;i++)  
    {  
        if (i<=1)  
            next =i;  
         else {  
             next = first+second;  
             first = second;  
             second = next;  
         }  
         printf("%d",next);  
    }  
    return 0;  
  }  
  * This is known as fibonacci series in c program.  
  

