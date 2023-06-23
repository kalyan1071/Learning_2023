#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void changeCase(FILE *src, FILE *dest, int option) {
    int c;
    while ((c = fgetc(src)) != EOF) {
        if (option == 1) {
            fputc(toupper(c), dest); // Change to upper case
        } else if (option == 2) {
            fputc(tolower(c), dest); // Change to lower case
        } else if (option == 3) {
            if (islower(c)) {
                fputc(toupper(c), dest); // Change to purely upper case
            } else {
                fputc(c, dest);
            }
        } else {
            fputc(c, dest); // Normal copy
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s [-u/-l/-s] source_file destination_file\n", argv[0]);
        return 1;
    }

    int option = 0;
    char *source_file = argv[2];
    char *destination_file = argv[3];

    if (argc >= 4) {
        if (argv[1][0] == '-') {
            switch (argv[1][1]) {
                case 'u':
                    option = 1; // Upper case
                    break;
                case 'l':
                    option = 2; // Lower case
                    break;
                case 's':
                    option = 3; // Purely upper case
                    break;
                default:
                    printf("Invalid option: %s\n", argv[1]);
                    return 1;
            }
            source_file = argv[3];
            destination_file = argv[4];
        }
    }

    FILE *src = fopen(source_file, "r");
    if (src == NULL) {
        printf("Error opening source file: %s\n", source_file);
        return 1;
    }

    FILE *dest = fopen(destination_file, "w");
    if (dest == NULL) {
        printf("Error creating destination file: %s\n", destination_file);
        fclose(src);
        return 1;
    }

    changeCase(src, dest, option);

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");

    return 0;
}
