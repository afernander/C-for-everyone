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
for(i = 0; i <30; i++)
{
 interval = i/10.0; //value for the function
 //pirnts the absolute value of the sin(interval)
 printf("sin( %f ) = %f \t \n", interval, fabs(sin(interval)));
}


printf("\n+++++++\n");
return 0;
}