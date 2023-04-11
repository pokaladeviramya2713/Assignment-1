#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int vowels = 0;
    char *ptr;

    printf("Enter a string: ");
    gets(str);

    ptr = str;

    while (*ptr != '\0') {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
            vowels++;
        }

        ptr++;
    }

    printf("The number of vowels in the string is: %d", vowels);

    return 0;
}
