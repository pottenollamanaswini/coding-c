# include<stdio.h>
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
}