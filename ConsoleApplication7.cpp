#include <stdio.h>
#include <math.h>
int main() {
	double x, y;
	printf_s("Введите значение: ");
	scanf_s("%lf", &x);
	y = exp(x);
	printf("e ^ %lf = %lf\n", x, y);

	y /= 2;
	printf("Значение результат, умноженное на 2: %.2f", y);
	return 0;
}
