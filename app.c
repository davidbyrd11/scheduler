#include <stdio.h>
#include "deps/hash.h"
#include "deps/buffer.h"
int main ( int argc, char *argv[] ) {

  buffer_t *name = buffer_new_with_copy("Tobi");
  buffer_t *buf = buffer_new_with_copy("     Tobi is a ferret");

  buffer_trim(buf);
  // buffer_trim(name);

  printf("%s\n", (char *) buffer_string(name));

  ssize_t name_index = buffer_indexof(buf, (char *) buffer_string(name));
  ssize_t name_length = buffer_length(name);

  printf("%zd , %zd\n", name_index, name_length);

  buffer_t *result = buffer_slice(buf, name_index, name_length);
  printf("%s\n", (char *) buffer_string(result));


  hash_t *hash = hash_new();
  hash_set(hash, "name", "tobi");
  hash_set(hash, "species", "ferret");
  hash_set(hash, "age", "2");

  hash_each(hash, {
    printf("%s: %s\n", key, (char *) val);
  });

  hash_free(hash);
  return 0;
}