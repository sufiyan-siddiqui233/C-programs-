//6.2  WAP to implement function which can convert and show a BINARY no. to DECIMAL no.

// convert binary to decimal

#include <stdio.h>
#include <math.h>

// function prototype
int convert(long long);
int main() {
    printf("Siddiqui Mohd Sufiyan_D5A\n");
  long long n;
  printf("Enter a binary number: ");
  scanf("%lld", &n);
  printf("%lld in binary = %d in decimal", n, convert(n));
  return 0;
}
// function definition
int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}