//5.3.B ----> string copy function

#include <stdio.h>
#include <string.h>

int main() {
  char str1[20] = "C programming";
  char str2[20];
printf("Siddiqui Mohd Sufiyan_D5A 52 \n");
  // copying str1 to str2
  strcpy(str2, str1);

  puts(str2); // C programming

  return 0;
}