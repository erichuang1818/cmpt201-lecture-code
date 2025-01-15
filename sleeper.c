#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
  int ret_val = fork();
  for (int i = 0; i < 20; i++) {
    printf("sleeping%d\n", ret_val);
    sleep(1);
  }
  printf("DONE\n");
  return 0;
}
