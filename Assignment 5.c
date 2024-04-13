#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char buffer[100];

    // Create input.txt and write user input to it
    printf("Enter some text: ");
    fgets(buffer, sizeof(buffer), stdin);
    inputFile = fopen("C:\\Users\\kidsa\\Searches\\dsac\\ICS2371\\input.txt", "a"); // Use 'a' for append mode
    if (inputFile == NULL) {
        printf("Error creating input.txt\n");
        return 1;
    }
    fputs(buffer, inputFile);
    fclose(inputFile);

    // Open input.txt for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input.txt\n");
        return 1;
    }

    // Open output.txt for appending
    outputFile = fopen("C:\\Users\\kidsa\\Searches\\dsac\\ICS2371\\output.txt", "a"); // Use 'a' for append mode
    if (outputFile == NULL) {
        printf("Error creating/output.txt\n");
        fclose(inputFile);
        return 1;
    }

    // Read from input file and append to output file
    while (fgets(buffer, sizeof(buffer), inputFile) != NULL) {
        fputs(buffer, outputFile);
    }

    // Close both files
    fclose(inputFile);
    fclose(outputFile);
    printf("File appended successfully.\n"); // Changed message to indicate appending
    return 0;
}
