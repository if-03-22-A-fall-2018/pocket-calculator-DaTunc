#include <stdio.h>

int main(int argc, char const *argv[]) {

  int answere = 0;
  double num1=0;
  double num2=0;
  double result;

  do {
    printf("Add(1), Subtract(2), Multiply(3), Divide(4), StopProgram(-1)\n");
    scanf("%d" ,&answere );


    if (answere == 1){
      printf("First number\n" );
      scanf("%lf",&num1 );
      printf("Second number\n" );
      scanf("%lf",&num2 );
      result=  num1+num2;
      printf("%lf\n",result );
    }

    else if (answere == 2) {
      printf("Number\n" );
      scanf("%lf",&num1 );
      printf("Subtract\n" );
      scanf("%lf",&num2 );
      result= num1 - num2;
      printf("%lf\n",result );
    }

    else if (answere == 3) {
      printf("Number\n" );
      scanf("%lf",&num1 );
      printf("Multiplier\n" );
      scanf("%lf",&num2 );
      result=num1*num2;
      printf("%lf\n",result );
    }

    else if (answere == 4) {
      printf("Number\n" );
      scanf("%lf",&num1 );
      printf("Divider\n" );
      scanf("%lf",&num1 );
      result = num1 / num2;
      printf("%lf\n",result );
    }

  } while(answere != -1);
  return 0;
}
