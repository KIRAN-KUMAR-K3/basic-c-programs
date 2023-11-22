#include <stdio.h>

int main() {
    char inputString[100]; 
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
 for (int i = 0; inputString[i] != '\0'; i++) {
       int asciiValue = inputString[i];
printf("Character: %c, ASCII Value: %d\n", inputString[i], asciiValue);
    }
    return 0;
}
