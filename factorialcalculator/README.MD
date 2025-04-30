# FACTORIAL OF A NUMBER  
  The product of all positive integers less than or equal to n. 
  n!=n*(n-1)*(n-2)*...*1  

    For example:    
    5!=5*4*3*2*1=120   

# PROGRAM  
 
  '''# include<stdio.h>   
  int main()  
  {  
    int n,i,fact=1;  
    printf("Enter positive number:");  
    scanf("%d",&n);  

    for(i=n;i>=1;i--)  
    {  
        fact=fact*i;    
    }  
    printf("Factorial of %d = %d.",n,fact);  
  }'''

  ** NOTE:  
  
    The program handles only non-negative integers.    
  For large numbers,the result may exceed standard int storage;hence unsigned long long is used.  
  *This program is end.  



