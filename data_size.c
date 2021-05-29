#include <stdio.h>
#include <sys/types.h>

int main() {
  printf("char size: %ld bytes\n", sizeof(char));
  printf("short size: %ld bytes\n", sizeof(short));
  printf("int size: %ld bytes\n", sizeof(int));
  printf("long size: %ld bytes\n", sizeof(long));
  printf("long long size: %ld bytes\n", sizeof(long long));
  printf("float size: %ld bytes\n", sizeof(float));
  printf("double size: %ld bytes\n", sizeof(double));
  printf("long double size: %ld bytes\n", sizeof(long double));
  printf("char pointer size: %ld bytes\n", sizeof(char *));
  printf("short pointer size: %ld bytes\n", sizeof(short *));
  printf("int pointer size: %ld bytes\n", sizeof(int *));
}
