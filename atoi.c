#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int val;
  char str[20];

  strcpy(str, "9898123");
  val = atoi(str);
  printf("string value = %s, int value = %d\n", str, val);

  return 0;
}