#include <stdio.h>
#include <locale.h>
int Task1();
int Task2();

int main() {
	setlocale(LC_ALL, "RUS");
	Task1();
	Task2();
	Task3();
}
int Task1() {
	int a;
	double b;

	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 6.7e-4; 


	printf("%c\n %i\n %f\n %d\n", c, i, f, d);

	printf("Введите символ:\n");
	scanf_s(" %c", &c, 1);

	printf("Введите ненулевое целое число:\n");
	scanf_s("%d", &i);

	printf("Введите вещественное число(float):\n");
	scanf_s("%f", &f);

	printf("Введите вещественное число(double):\n");
	scanf_s(" %lf", &d);

	printf("\n Вы ввели: \n");
	printf(" c=%c, i=%d, f=%f, d=%e\n\n", c, i, f, d);

	//Задание 1а
	a = (int)f;
	b = f - a;
	printf(" {Задание 1а} \n число float: %f\n", f);
	printf(" =Целая часть=:  %d\n =дробная часть=: %f\n\n", a, b);

	//Задание 1б:
	printf("[Решение 1б] символ '%c': \n", c);
	printf(" -> Десятичный код: %d\n -> Шестнадцатеричный код: %X\n\n", c, c);

	//Задание 1в:
	printf("{Задание 1в}\n");
	printf("Результат: 1/%d = %f\n\n", i, 1.0 / i);




}
int Task2()
{
	int a;
	int b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	int x = a / b;
	float y = (float) a / b;
	double z = (double) a / b;

	printf("Неявное преобразование:\n");
	printf("x(int)= %d\n", x);
	printf("y(float)=%f\n", y);
	printf("z(double)=%lf\n", z);

	printf("Явное преобразование:\n");
	printf("x(int)= %d\n", (int) a/b);
	printf("y(float)=%f\n",(float) a/b);
	printf("z(double)=%lf\n\n",(double) a/b);

	return 0;
}
int Task3()
{
	printf("Задание 3\n");
	int n;
	printf("Введите трёхзначное число:\n");
	scanf_s("%d", &n);

	int last = n % 10;
	int first = n / 100;
	int mid = (n / 10) % 10;
	int sum = first + mid + last;
	int reserved = last * 100 + mid * 10 + first;
	printf("Последняя цифра: %d, Первая :%d, Сумма цифр: %d, Число наоборот: %d\n", last, first, sum, reserved);

	return 0;
}

void HomeWork() {
	int A = 1;
	int B = 1;
	int C = 1;
	int D = 0;

	if (Calcylate(A, B, C, D)) {
		printf("Запись включена: сработало не менее трёх датчиков.\n");
	}
	else {
		printf("Запись не включена: сработало менее трёх датчиков.\n");
	}
}

int Calcylate(int A, int B, int C, int D) {
	int count = A + B + C + D;
	return (count >= 3) ? 1 : 0;
}