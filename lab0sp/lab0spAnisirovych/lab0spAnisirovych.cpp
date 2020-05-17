// lab0spAnisirovych.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <limits.h>
#include <conio.h> 
using namespace std;

const char SEP = '|';
//Прототипы
void Line();
void Out();

int main(int argc, char* argv[]) {
	Out();
}
static void Line() {
	printf_s("+");
	for (unsigned __int8 i = 0; i < 78; i++) {
		if (i == 15 | i == 33 | i == 56) {
			printf_s("+");
		}
		else {
			printf_s("-");
		}
	}
	printf_s("+\n");
}

static void Out() {
	Line();
	printf_s("%c Type name\t|Quantity of bytes%c %9cMin. %8c %9cMax%9c\n", SEP, SEP, ' ', SEP, ' ', SEP);
	Line();
	printf_s("%c int: %10c %9d %7c %16d %5c %16d %4c \n", SEP, SEP, sizeof(int), SEP, INT_MIN, SEP, INT_MAX, SEP);
	Line();
	printf_s("%c unsigned int: %1c %9d %7c %11d %10c %16u %4c\n", SEP, SEP, sizeof(unsigned), SEP, 0, SEP, UINT_MAX, SEP);
	Line();
	printf_s("%c char: %9c %9d %7c %12d %9c %12d %8c\n", SEP, SEP, sizeof(__int8), SEP, CHAR_MIN, SEP, CHAR_MAX, SEP);
	Line();
	printf_s("%c unsigned char:%c %9d %7c %11d %10c %12d %8c\n", SEP, SEP, sizeof(unsigned __int8), SEP, 0, SEP, UCHAR_MAX, SEP);
	Line();
	printf_s("%c short: %8c %9d %7c %13d %8c %13d %7c\n", SEP, SEP, sizeof(short), SEP, SHRT_MIN, SEP, SHRT_MAX, SEP);
	Line();
	printf_s("%c long: %9c %9d %7c %15li %6c %16li %4c\n", SEP, SEP, sizeof(long), SEP, LONG_MIN, SEP, LONG_MAX, SEP);
	Line();
	printf_s("%c long long: %4c %9d %7c %8lli %c %8lli %c\n", SEP, SEP, sizeof(long long), SEP, LLONG_MIN, SEP, LLONG_MAX, SEP);
	Line();
	printf_s("%c float: %8c %9d %7c %16g %5c %16g %4c\n", SEP, SEP, sizeof(float), SEP, FLT_MIN, SEP, FLT_MAX, SEP);
	Line();
	printf_s("%c double: %7c %9d %7c %16g %5c %16g %4c \n", SEP, SEP, sizeof(double), SEP, DBL_MIN, SEP, DBL_MAX, SEP);
	Line();
	printf_s("Press any key for exit.\n");
	_getch();

}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
