//5.2	WAP to implement strcat() and strlen()

//5.2.A ----> string concatenate function 

#include <stdio.h>
#include <string.h>
int main() {
    printf("Siddiqui Mohd Sufiya_D5A_52\n");
   char str1[100] = "I am from ", str2[] = "Vesit D5A";

   // concatenates str1 and str2
   // the resultant string is stored in str1.
   strcat(str1, str2);

   puts(str1);
   puts(str2);
   return 0;
}