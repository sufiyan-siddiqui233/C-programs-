#include <stdio.h>
#include <string.h>
int main(){
char s1[20],s2[20];
int x;

printf("Enter a string = \n");
gets(s1);
strcpy(s2,s1);
x = strcmp(s2,strrev(s1));
if(x == 0)
 {
 printf("String is palindrome \n");
 }
else
 {
 printf("Not");
 }
return 0;
}
