#include <stdio.h>

int main() {

  char op;
  double first1, second2;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first1, second2, first1 + second2);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first1, second2, first1 - second2);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first1, second2, first1 * second2);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first1, second2, first1 / second2);
      break;
    
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
