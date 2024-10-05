#include "my_math.h"

double exp(double num, double eps)
{
	double res = 1.0, currEps = 1e16;
	double term = 1.0;
	double count = 1.0;
	while (currEps > eps || currEps < -eps) {
		term = num / count * term;
		currEps = term;
		res += term;
		count += 1.0;
	}
	return res;
}

double ln(double num, double eps)
{
	if (num < 0) {
		return 0;
	}
	double term = (num - 1) / (num + 1);
	double count = 1.0;
	double res = term;
	
	double currEps = 1e16;

	while (currEps > eps || currEps < -eps) {
		count += 1;
		currEps = term;
		term = (term * (2 * (count - 1) - 1) * ((num - 1) / (num + 1)) * ((num - 1) / (num + 1))) / (2 * count - 1);
		res += term;
	}
	
	return 2 * res;

}

double sin(double num, double eps)
{
	double sign = -1.0;

	double currEps = 1e16;
	double count = 1.0;
	double res = num / 1.0;
	double term = res;

	while (currEps > eps || currEps < -eps) {
		count += 1;
		currEps = term;
		term = sign * ((term * num * num) / (2 * count - 1) / (2 * count - 2));
		res += term;
	}
	return res;

}

double cos(double num, double eps)
{
	double sign = -1.0;

	double currEps = 1e16;
	double count = 1.0;
	double res = 1.0;
	double term = res;

	while (currEps > eps || currEps < -eps) {
		currEps = term;
		term = sign * ((term * num * num) / (2 * count) / (2 * count - 1));
		res += term;
		count += 1;
	}
	return res;

}


double sh(double num, double eps) {
	double currEps = 1e16;
	double count = 1.0;
	double res = num / 1.0;
	double term = res;

	while (currEps > eps || currEps < -eps) {
		count += 1;
		currEps = term;
		term = ((term * num * num) / (2 * count - 1) / (2 * count - 2));
		res += term;
	}
	return res;
}

double ch(double num, double eps)
{
	double currEps = 1e16;
	double count = 1.0;
	double res = 1.0;
	double term = res;

	while (currEps > eps || currEps < -eps) {
		currEps = term;
		term =  ((term * num * num) / (2 * count) / (2 * count - 1));
		res += term;
		count += 1;
	}
	return res;
}



double pow(double base, double power, double eps)
{
	return exp(power * ln(base, eps), eps);
}

double sqrt(double num, double eps)
{
	return pow(num, 0.5, eps);
}

double log10(double num, double eps)
{
	return ln(5, eps) / ln(10, eps);
}