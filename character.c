#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch (ch) {
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Uppercase Vowel\n");
            break;
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("Lowercase Vowel\n");
            break;
        default:
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
                printf("Consonant\n");
            else if (ch >= '0' && ch <= '9')
                printf("Digit\n");
            else
                printf("Special Character\n");
    }

    return 0;
}

