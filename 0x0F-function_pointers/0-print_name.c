#include <stdlib.h>
/**
 * print_name - Entry point
 * @name: the name to print
 * @f: function that prints name
 * Return: none
 */
void print_name(char *name, void (*f)(char *)) {
  if (name != NULL && f != NULL) {
    f(name);
  }
}
