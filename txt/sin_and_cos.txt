/*
C for everyone
Alejandro Fernandez
may,2021
*/

#include <stdio.h>
#include <math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{ 
double interval;
int i;

for(i = 0; i <=10; i++)
{
 interval = i/10.0; //value for the function
 //pirnts the value of sin and cos of the interval
 printf("sin( %f ) = %f \t ", interval, sin(interval));
 printf("cos( %f ) = %f \t \n", interval, cos(interval));
}


printf("\n+++++++\n");
return 0;
}