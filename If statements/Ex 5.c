#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("The entered character is an alphabet.\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("The entered character is a digit.\n");
    } else {
        printf("The entered character is a special character.\n");
    }

    return 0;
}
