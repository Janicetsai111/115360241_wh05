#include <stdio.h>
#include <string.h>

void stringReverse(const char str[]);

int main(void) {
    char text[200];

    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = '\0';

    printf("Reversed string: ");
    stringReverse(text);
    printf("\n");

    return 0;
}

void stringReverse(const char str[]) {
    if (str[0] == '\0') {
        return;
    }

    stringReverse(&str[1]);
    printf("%c", str[0]);
}