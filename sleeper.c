#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
  char *message = "Hello World!\n";

  for (int i = 0; i < strlen(message); i++) {
    printf("%c", message[i]);
    fflush(stdout);
    sleep(1);
  }
  return 0;
}
