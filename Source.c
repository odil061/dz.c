#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

#include <stdlib.h>

#define _USE_MATH_DEFINES

#include <math.h>



void main()

{

	system("chcp 1251");

	printf("����� �� %.12lf\n", M_PI);
   
    float a, b, c;

    printf("������� ����� ���� : ");
    scanf("%f", &a);
    printf("������� ������ ����: ");
    scanf("%f", &b);

    printf("������� ������ ����: ");
    scanf("%f", &c);

    float volume = a * b * c;
    float surface = 2 * (a * b + a * c + b * c);

    printf("����� ����: %.2f\n", volume);
    printf("������� �����������: %.2f\n", surface);


    return 0;
    
 
    
}