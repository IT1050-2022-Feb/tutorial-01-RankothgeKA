/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  //Variables
  float subject[2];
  float total = 0 , avg = 0 ;

  //Get  keyboard inputs(subject marks)
  for(int i = 0 ; i < 2 ; i++){

    printf("Enter subject %d marks : ", i+1);
    scanf("%f", &subject[i]);

    //add subject marks to total variable
    total += subject[i];
  }

  //Calculate avarage
  avg = total / 2;
  
  //Print avarage marks
  printf("\nAvarage marks is : %.2f\n", avg);
  
  return 0;
}
