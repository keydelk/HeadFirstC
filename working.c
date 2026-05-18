#include <stdio.h>

int string_to_bytes(char *s);

int main() {
  char s[255]; // declaring s as a character array allocates memory on the stack
  printf("Enter a string to convert to bytes: ");

  if (fgets(s, sizeof(s), stdin) != NULL) {
    printf("You entered: %s\n", s);
    printf("In bytes:\n");
    string_to_bytes(s);
  } else {
    printf("Nothing entered");
  }
  printf("\n");
  return 0;
}

int string_to_bytes(char *s) {
  while (*s != 0){
    printf("%08b ", (unsigned char)*s );
    s++; // Don't need to do s += sizeof(unsigned char) as C handles this with s++
  }
  return 0;
}
