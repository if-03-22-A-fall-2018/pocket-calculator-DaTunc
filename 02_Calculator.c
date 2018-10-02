#include <stdio.h>

int main(int argc, char const *argv[]) {

  int answere = 0;
  double num1;
  double num2;

  do {
    printf("Add(1), Subtract(2), Multiply(3), Divide(4), StopProgram(-1)\n");
    scanf("%d" ,&answere );

  } while(answere != -1);
  return 0;
}
