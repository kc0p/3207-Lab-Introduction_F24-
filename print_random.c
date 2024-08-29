#include <stddef.h>
//#include "random"

//Given Project code
char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         randchar(s, size);
     }
     return s;
}