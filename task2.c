#include <stdio.h>

int main()
{
    float Physics, Chemistry, Maths, Average;
// Get physics marks
printf("Enter marks in Physics: ");
scanf ("%f", &Physics);
// Get chemistry marks
printf("Enter marks in Chemistry: ");
scanf ("%f", &Chemistry);
// Get physics marks
printf("Enter marks in Maths: ");
scanf ("%f", &Maths);
// Calculate average
Average = (Physics + Chemistry + Maths) / 3.0;
// print Average
printf("Average marks: %.2f\n", Average);
// Check eligibility
(Average >= 50);
 printf("Student is eligible for admission. \n");
 printf("Student is NOT eligible for admission.\n");

    return 0;
}