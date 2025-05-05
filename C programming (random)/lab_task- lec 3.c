#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);


    char result = (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ? 'A' : 'N';

    printf("%c is %c alphabet.\n", ch, result);

    return 0;
}
