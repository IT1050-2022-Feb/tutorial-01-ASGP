/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
    int m1, m2; 
    float avg=0;
    printf("Enter marks for 2 subjects: ");
    scanf("%d %d", &m1,&m2);
    avg = (float)(m1+m2)/2;
  
    printf("Average is: %.2f", avg);

  return 0;
}

