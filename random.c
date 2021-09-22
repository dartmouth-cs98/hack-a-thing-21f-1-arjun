#include <stdio.h>
#include <stdlib.h>

int getanum(int x) { 
  int a = 13;
  int b = x*x;
  int c = b % a;
  return c;
}