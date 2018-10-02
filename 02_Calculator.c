#include <stdio.h>

double Div(){
  double result;
  return result;
}

double Mul(){
  double result=num1*num2;
  return result;
}

double Sub(){
  double result= num1 - num2;
  return result;
}

double Add(double num1, double num2){
  double result= num1+num2;
  return result;
}

int main(int argc, char const *argv[]) {

  int answere = 0;
  double num1=0;
  double num2=0;
  double result;

  do {
    printf("Add(1), Subtract(2), Multiply(3), Divide(4), StopProgram(-1)\n");
    scanf("%d" ,&answere );

    printf("First number\n" );
    scanf("%lf",&num1 );

    printf("Second number\n" );
    scanf("%lf",&num2 );

    if (answere = 1) {
      result = Add(num1,num2);
    }

    if (answere = 2) {
      result = Sub(num1,num2);
    }

    if (answere = 3) {
      result = Mul(num1,num2);
    }

    if (answere = 4) {
      result = Div(num1,num2);
    }


  } while(answere != -1);
  return 0;
}
