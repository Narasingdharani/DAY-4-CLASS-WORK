#include <stdio.h>
#include <string.h>

struct person {
    char name[50];
    int age;
    float height;
};

int main() {
    
    struct person p1;
    strcpy(p1.name, "John");
    p1.age = 30;
    p1.height = 1.75;

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.2f\n", p1.height);

    return 0;
}

