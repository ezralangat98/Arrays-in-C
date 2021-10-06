#include <stdio.h>
void display(int position1, int position2) {
    
  printf("First element is: %d\n", position1);
  printf("Second element is: %d\n", position2);
}

int main() {
  int positionArray[] = {10, 12, 15, 7};

  // pass second and third elements to display()
  display(positionArray[0], positionArray[1]); 
  return 0;
}