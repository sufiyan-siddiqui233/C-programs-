//7.1 WAP to find sum of all natural number till n. (take n number from user)

#include <stdio.h>
int sum(int n);

int main() {
    int number, result;
    printf("Siddiqui Mohd Sufiyan_D5A_52\n");
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum = %d", result);
    return 0;
}

int sum(int n) {
    if (n != 0)
        // sum() function calls itself
        return n + sum(n-1); 
    else
        return n;
}