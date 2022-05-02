#include <stdio.h>
#include <stdlib.h>

#include "salloc.h"

void main() {
  ascope_t* scope = salloc();
  puts("Created scope 'scope'");
  smalloc(scope, 256);
  smalloc(scope, 256);
  smalloc(scope, 256);
  smalloc(scope, 256);
  puts("Made four allocs in scope");
  sfree(scope);
  puts("Freed all allocs");
}
