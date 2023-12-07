#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char data[1000];

    printf("Enter filename: ");
    scanf("%s", filename);

    printf("Enter data: ");
    scanf(" %[^\n]", data);

    file = fopen(filename, "w");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(file, "%s", data);
    fclose(file);

    printf("Data written successfully.\n");
    return 0;
}