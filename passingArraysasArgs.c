#include <stdio.h>


int main () {
   //Example 1
   int score[6] = {20,30,40,60,70};
   //Changing value in index 0
   score[0] = 99;
   printf("Value in score[0] is: %d\n", score[0]);

  //Example 2
  int values[5];
  printf("Enter 5 integers:\n");

  // taking input and storing it in an array
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &values[i]);
  }
    printf("Displaying integers: ");

  // printing elements of an array
  for(int i = 0; i < 5; ++i) {
     printf("\n%d", values[i]);
  }
  return 0;
}

//C += A is equivalent to C = C + A