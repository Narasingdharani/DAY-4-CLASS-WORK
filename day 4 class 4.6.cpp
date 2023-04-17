#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_INPUT_LENGTH 100

union my_union {
    int integer;
    char* string;
};

int main() {
    union my_union data;
    char input[MAX_INPUT_LENGTH];
    printf("Enter a value: ");
    fgets(input, MAX_INPUT_LENGTH, stdin);
    input[strcspn(input, "\n")] = '\0'; 
    int is_integer = 1;
    for (int i = 0; i < strlen(input); i++) {
        if (!isdigit(input[i])) {
            is_integer = 0;
            break;
        }
    }
    if (is_integer) {
        data.integer = atoi(input);
        printf("You entered an integer: %d\n", data.integer);
    } else {
        data.string = input;
        printf("You entered a string: %s\n", data.string);
    }
    return 0;
}

