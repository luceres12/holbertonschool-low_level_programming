#include<stdio.h>
int main(void) 
{
  int intType;
  float floatType;
  double doubleType;
  char charType;
  long int longinitType;
  long long int longlongintType;
  // imprimir valor variable
  printf("Size of a char: %ld byte(s)\n", sizeof(charType));
  printf("Size of an int: %ld byte(s)\n", sizeof(intType));
  printf("Size of a long int: %ld byte(s)\n", sizeof(longintType));
  printf("Size of a long long int: %ld byte(s)\n", sizeof(longlongintType));
  printf("Size of a long float: %ld byte(s)\n", sizeof(floatType));
  return 0;
}
