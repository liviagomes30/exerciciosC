/* Prepare um algoritmo que calcule o valor de H, sendo que ele é determinado pela série:
 
 H = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50. */

#include <stdio.h>

int main()
{
    float h=0.0;
    int num=1, den=1;
    for (den=1; den<=50;den++)
    {
        h = h + (num / (float)den);
        num = num +2;
    }
    printf("H = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50");
    printf("\n\n");
    printf("H = %10.7f\n", h);
}