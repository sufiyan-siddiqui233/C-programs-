// /5.1 WAP to count frequency of a character in a given string?

#include <stdio.h>
int main() {
    char str[1000], ch;
    int count = 0;
     printf("Siddiqui Mohd Sufiyan _D5A_52 \n");

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }

    printf("Frequency of %c = %d", ch, count);
    return 0;
}