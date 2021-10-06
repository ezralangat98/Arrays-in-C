// Program to calculate the sum of array elements by passing to a function 

#include <stdio.h>
float calculateSum(float marks[]);

int main() {
  float result;
  float marks[] = {50.5, 80, 69.2, 65, 20.5, 63};

  // marks array is passed to calculateSum()
  result = calculateSum(marks); 
  printf("Result = %.3f", result);
  return 0;
}

float calculateSum(float marks[]) {
  float sum = 0.0;

  for (int i = 0; i < 6; ++i) {
    sum += marks[i];
  }

  return sum;
}