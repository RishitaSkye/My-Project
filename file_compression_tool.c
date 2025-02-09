#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compressFile(const char *inputFile, const char *outputFile) {
    FILE *in = fopen(inputFile, "r");
    FILE *out = fopen(outputFile, "w");
    if (!in || !out) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    char currentChar, prevChar;
    int count = 1;

    // Read the first character
    prevChar = fgetc(in);
    if (prevChar == EOF) {
        fclose(in);
        fclose(out);
        printf("Empty file.\n");
        return;
    }

    // Process the file
    while ((currentChar = fgetc(in)) != EOF) {
        if (currentChar == prevChar) {
            count++;
        } else {
            // Write the character and its count to the output file
            fprintf(out, "%c%d", prevChar, count);
            prevChar = currentChar;
            count = 1;
        }
    }

    // Write the last character and its count
    fprintf(out, "%c%d", prevChar, count);

    fclose(in);
    fclose(out);

    printf("File compressed successfully as '%s'.\n", outputFile);
}

int main() {
    char inputFile[100], outputFile[100];

    printf("Enter the input file name: ");
    scanf("%s", inputFile);
    printf("Enter the output (compressed) file name: ");
    scanf("%s", outputFile);

    compressFile(inputFile, outputFile);

    return 0;
}