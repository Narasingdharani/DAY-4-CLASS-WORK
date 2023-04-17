#include <stdio.h>

union my_data {
    int integer;
    float floating_point;
};

int main() {
    union my_data data;
    float value;
    printf("Enter a number: ");
    scanf("%f", &value);
    if (value == (int)value) {
        data.integer = (int)value;
        printf("You entered an integer: %d\n", data.integer);
    } else {
        data.floating_point = value;
        printf("You entered a floating-point number: %f\n", data.floating_point);
    }
    return 0;
}

