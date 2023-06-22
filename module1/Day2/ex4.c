#include <stdio.h>
#include <ctype.h>

int findCharacterType(char c) {
    if (isupper(c)) {
        return 1;
    } else if (islower(c)) {
        return 2;
    } else if (isdigit(c)) {
        return 3;
    } else if (isprint(c)) {
        return 4;
    } else {
        return 5;
    }
}

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    int type = findCharacterType(ch);

    switch (type) {
        case 1:
            printf("Type: Uppercase letter\n");
            break;
        case 2:
            printf("Type: Lowercase letter\n");
            break;
        case 3:
            printf("Type: Digit\n");
            break;
        case 4:
            printf("Type: Printable symbol\n");
            break;
        case 5:
            printf("Type: Non-printable symbol\n");
            break;
        default:
            printf("Invalid character\n");
    }

    return 0;
}
