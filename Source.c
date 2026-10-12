#include <stdio.h>
#include <locale.h>
#define D 2.54

int main1();
int main2();
double dz();

int main()
{
	setlocale(LC_CTYPE, "RUS");

	int num1, num2, num3;

	puts("Введите первое число");
	scanf_s("%d", &num1);

	puts("Введите второе число");
	scanf_s("%d", &num2);

	puts("Введите третье число");
	scanf_s("%d", &num3);

	printf("Сумма = %d\n Разность = %d\n Произведение =%d\n Частное = %d\n Остаток от деления = %d", num1+num2,num1-num2,num1*num2,num1/num2,num1%num2);

	main1();
	main2();

	dz();
	return 1;

}

int main1()
{
	int dym;

	float result;

	puts("Введите дюймы");
	scanf_s("%d", &dym);
	result = D * dym;

	printf("%d английских дюймов - это %.1f см \n\n\n\n %d испанских дюймов - это %.1f см \n", dym, result, dym, dym * 2.32166);
	return 1;

}

int main2()
{
	float num1, num2;

	puts("Введите первое число");
	scanf_s("%f",&num1);

	puts("Введите второе число");
	scanf_s("%f",&num2);

	printf("___________________________________________\n|    a * b    |    a + b    |    a - b     |\n-------------------------------------------\n| %4.1f * %4.1f | %4.1f + %4.1f | %4.1f - %5.1f |\n-------------------------------------------\n|    %4.1f    |    %4.1f     |    %4.1f      | ", num1, num2, num1, num2, num1, num2, num1 * num2, num1 + num2, num1 - num2);
	return 1;
}

double dz()
{
 puts("Написать и отладить программу стоимости поездки, исходя из известного расстояния и стоимости бензина;\n");    
 puts("Введите через пробел расстояние (км), стоимость бензина (в руб/л) и расход бензина на 100Км;\n");     
 int km = 0;      
 double rashod = 0;    
 double money = 0;    
 scanf("%d %lf %lf\n", &km, &rashod, &money);
double lit = km / 100 * rashod;   // сколько литров понадобится
double res = lit * money; 
 printf("Стоимость поездки: %.2f руб.\n", res); 
 return res;
}