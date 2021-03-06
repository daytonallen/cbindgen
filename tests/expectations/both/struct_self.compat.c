#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct Foo_Bar {
  const int32_t *something;
} Foo_Bar;

typedef struct Bar {
  int32_t something;
  Foo_Bar subexpressions;
} Bar;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void root(Bar b);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
