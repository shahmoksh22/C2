#include <stdio.h>

void copy_file(FILE *source, FILE *destination) {
    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
}

int main() {
    FILE *source, *destination;
    char src_file_name[100], dest_file_name[100];

    printf("Enter the name of the source file: ");
    scanf("%s", src_file_name);

    printf("Enter the name of the destination file: ");
    scanf("%s", dest_file_name);

    source = fopen(src_file_name, "r");
    if (source == NULL) {
        printf("Could not open source file. Exiting...\n");
        return 1;
    }

    destination = fopen(dest_file_name, "w");
    if (destination == NULL) {
        printf("Could not open destination file. Exiting...\n");
        fclose(source);
        return 1;
    }

    copy_file(source, destination);

    fclose(source);
    fclose(destination);

    printf("File copied successfully.\n");
    return 0;
}