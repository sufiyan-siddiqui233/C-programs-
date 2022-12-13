//7.2 WAP to find factorial of a number.

#include<stdio.h>
long int multiplyNumbers(int n);
int main() {
    int n;
    printf("Siddiqui Mohd Sufiyan_D5A 52\n");
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n) {
    if (n==1)
	return 1; 
    else
        return n*multiplyNumbers(n-1);
}
