
#include <stdio.h>

int main()
{
  //initializing an array during declaration
  int mark[5] = {40, 60, 80, 44, 90};

  //Changing the value in the first element
  mark[0] = 50;
  //Initializing arrays without stating no of elements
  int age[] = {8, 17, 9};

  int addresscode[2];

  printf("Marks in mark[0] is: %d", mark[0]);
  printf("\nAge of the first person is: %d", age[0]);
  //Input and Output in Arrays
  printf("\nEnter the new age of the third person: ");
  // taking input and storing it in the 3rd element of age to replace previous age
  scanf("%d", &age[2]);
  printf("\nAge of the third person is: %d", age[2]);

  printf("\nEnter your first and second address numbers: \n");

  // Taking input and storing it in an array using loops
  for(int i = 0; i < 2; ++i) {
     scanf("\n%d", &addresscode[i]);
  }

  printf("Your addresscodes are: \n");

  // printing elements of an array
  for(int i = 0; i < 2; ++i) {
     printf("%d\n", addresscode[i]);
  }
  
  return 0;
  
  
}