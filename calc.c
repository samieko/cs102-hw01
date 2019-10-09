#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  double x, y; //x and y can have decimals
  char* x_string = argv[2];
  x = atof(argv[2]);
  char* y_string = argv[3];
  y = atof(argv[3]);
  char operator = argv[1][0];
  double result;

  switch (operator)
  {
    case '+':
      printf("%g\n", x + y);
      break;
    case '-':
      printf("%g\n", x - y);
      break;
    case '*':
      printf("%g\n", x * y);
      break;
    case '/':
      if (y > 0 || y < 0) {
        printf("%g\n", x / y);
      } else {
        printf("Undefined\n"); //you cannot divide by 0
      }
      break;
    default: result = 0;
    }
  return 0;
}
