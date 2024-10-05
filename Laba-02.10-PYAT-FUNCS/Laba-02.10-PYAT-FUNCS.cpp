#include <stdio.h>
#include "my_math.h"

void test(double num, double eps);

int main(){
	double expirience = exp(5, 0.00001);
	printf("\nex ^ 5 =  %lf\n", expirience);

	double psina = sin(12, 0.00001);
	printf("\nsin (12) = %lf\n", psina);

	double coslina = cos(12, 0.00001);
	printf("\ncos %lf\n", coslina);
	
	double lenin = ln(52, 0.00001);
	printf("\nln %lf\n", lenin);
	
	double shishka = sh(10, 0.00001);
	printf("\nsh %lf\n", shishka);

	double churka = ch(1, 0.00001);
	printf("\nch %lf\n", churka);

	double ne_pridumal = log10(5, 0.00001);
	printf("\nlog 10 %lf\n", ne_pridumal);

	double pomidor = pow(7, 5.6, 0.00000000000001);
	printf("\npow %lf\n", pomidor);

	double squarechnik = sqrt(4, 0.0000001);
	printf("\n%lf\n", squarechnik);


	return 0;
}

void test(double num, double eps) {
	printf("Test for x = %f\n", num);
	printf("exp ^ %f = ", exp(num, eps));
	printf("sin( %f ) = ", sin(num, eps));
	printf("cos( %f ) = ", cos(num, eps));
	printf("sqrt( %f ) = ", sqrt(num, eps));
	printf("log10( %f ) = ", log10(num, eps));
	printf("sh( %f ) = ", sh(num, eps));
}
