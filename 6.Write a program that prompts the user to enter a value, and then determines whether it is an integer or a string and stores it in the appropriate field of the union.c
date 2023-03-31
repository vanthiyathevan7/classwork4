#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union my_union {
  int integer;
  char string[50];
};

int main() {
  union my_union value;

  printf("Enter a value: ");
  char input[50];
  fgets(input, 50, stdin);
  input[strcspn(input, "\n")] = '\0';
  char *endptr;
  int num = strtol(input, &endptr, 10);
  if (*endptr == '\0') {
    value.integer = num;
    printf("Input is an integer.\n");
  } else {
    strncpy(value.string, input, sizeof(value.string)-1);
    printf("Input is a string.\n");
  }

  return 0;
}

