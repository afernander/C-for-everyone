#include <stdio.h>

#include <math.h>

int main(void){

double value, x;

printf(" Please Enter the Value: ");

scanf("%lf", &x);

value = sin(x);

printf("\n The Sin value of %lf = %f ", x, value);

return 0;

}