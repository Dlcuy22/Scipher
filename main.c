#include <stdio.h>
#include <string.h>

void caesar_decode(char *str, int shift) {
    int i = 0;
    while (str[i] != '\0') {
        // Decode uppercase letters
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = ((str[i] - 'A' - shift + 26) % 26) + 'A';
        }
        // Decode lowercase letters
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = ((str[i] - 'a' - shift + 26) % 26) + 'a';
        }
        i++;
    }
}

int main() {
    char input[100];
    int shift;

    printf("Enter the Caesar cipher text: ");
    fgets(input, sizeof(input), stdin);  // Read input
    input[strcspn(input, "\n")] = 0; // Remove newline character from input

    printf("Enter the shift value (0-25): ");
    scanf("%d", &shift);

    caesar_decode(input, shift);

    printf("Decoded text: %s\n", input);

    return 0;
}
