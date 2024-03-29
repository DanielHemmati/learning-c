#include <stdio.h>

typedef struct island {
  char *name;
  char *opens;
  char *close;
  // you store a pointer to the next island in the struct
  struct island *next;
} island;

int main() {
  island amity = {"Amity", "09:00", "17:00", NULL};
  island craggy = {"Craggy", "09:00", "17:00", NULL};
  island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL};
  island skull = {"Skull", "09:00", "17:00", NULL};
  island shutter = {"Shutter", "09:00", "17:00", NULL};
  amity.next = &craggy;
  craggy.next = &isla_nublar;
  isla_nublar.next = &skull;
  skull.next = &shutter;

  return 0;
}
