#include <locale.h>
#include <stdio.h>
void main(void)

{
	int N = 12;
	int K = 30;
	int L = 1444;
	int V = 12;
	int W = 39;
	int Y = 30000;
	setlocale(LC_ALL, "RUS");
	printf("%-20s \n ", "Это текст");
	printf("\t %20s ", "Это текст");
	printf("\v %20s ", "Это текст");
	printf("%10.6f\n ", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 7 / 5);
	printf("Умножение %d на %d равен %d\n ", 2000, 4, 2000 * 4);
	printf("%d разделить %d равно %d\n ", 5., 2., 5. / 2);
	printf("%g разделить %g равно %g\n ", 5., 2., 5. / 2);
	printf("%f разделить %f равно %f\n ", 5., 2., 5. / 2);
	printf("%e разделить %e равно %e\n ", 5., 2., 5. / 2);
	printf("Сейчас %d часов %d минут 00 секунд\n ", N, K);
	printf("Идёт %d минута суток\n ", L);
	printf("До полуночи осталось %d часов и %d минут\n", V, W);
	printf(" C 8.00 прошло %d секунд\n ", Y);
	
	printf("Текущий час = %4.2f суток  и текущая минута = %4.2fчаса\n", N/24., K/60.);


}