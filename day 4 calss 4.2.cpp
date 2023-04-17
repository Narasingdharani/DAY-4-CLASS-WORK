#include <stdio.h>

union my_union {
  int integer;
  float floating_point;
};

int main() {
  union my_union my_variable;

  my_variable.integer = 42;
  my_variable.floating_point = 3.14159;

  printf("The integer value is: %d\n", my_variable.integer);
  printf("The floating point value is: %f\n", my_variable.floating_point);

  return 0;
}

