#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

#include <stdlib.h>

#define _USE_MATH_DEFINES

#include <math.h>



void main()

{

	system("chcp 1251");

	printf("число ѕи %.12lf\n", M_PI);
   
    float a, b, c;

    printf("¬ведите длину куба : ");
    scanf("%f", &a);
    printf("¬ведите ширину куба: ");
    scanf("%f", &b);

    printf("¬ведите высоту куба: ");
    scanf("%f", &c);

    float volume = a * b * c;
    float surface = 2 * (a * b + a * c + b * c);

    printf("ќбъем куба: %.2f\n", volume);
    printf("ѕлощадь поверхности: %.2f\n", surface);


    return 0;
    
 
    
}