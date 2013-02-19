#include <stdio.h>
#include "deps/hash.h"

int main ( int argc, char *argv[] ) {
  hash_t *hash = hash_new();
  hash_set(hash, "name", "tobi");
  hash_set(hash, "species", "ferret");
  hash_set(hash, "age", "2");

  hash_each(hash, {
    printf("%s: %s\n", key, (char *) val);
  });

  hash_free(hash);
}