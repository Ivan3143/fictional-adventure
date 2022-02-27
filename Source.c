#include <stdio.h>
int factorial_function(int x) {
	int result_factorial = 1;
	for (int i = 1; i <= x; i++) {
		result_factorial = result_factorial * i;
	}
	return result_factorial;
}
double exponent(int x) {
	double e = 1;
	if (x == 1) {
		e = 2.;
	}
	else {
		for (int i = 1; i <= (x + 3); i++) {
			e = e + ((double)(1.0) / factorial_function(i));
		}
	}
	return e;
}
short test_function() {
	short x = 0;
	x = x || (exponent(1) - 2 >= 1);
	x = x || (exponent(2) - 2.7 >= 0.1);
	x = x || (exponent(3) - 2.71 >= 0.01);
	x = x || (exponent(4) - 2.718 >= 0.001);
	x = x || (exponent(5) - 2.7182 >= 0.0001);
	x = x || (exponent(6) - 2.71828 >= 0.00001);
	return x;
}

int main() {
	return test_function();
}