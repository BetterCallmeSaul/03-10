#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUSSIAN");
	/* 
	//Case3.Дан номер месяца — целое число в диапазоне 1–12(1 — январь, 2 — февраль и т.д.).Вывести название соответствующего времени года(«зима»,
	//«весна», «лето», «осень»).	int month;
	cin >> month;
	switch (month) {
	case 12:
	case 1:
	case 2: cout << "winter" << endl; break;
	case 3:
	case 4: 
	case 5: cout << "spring" << endl; break;
	case 6:
	case 7:
	case 8: cout << "summer" << endl; break;
	case 9:
	case 10:
	case 11: cout << "autumn" << endl; break;
	}*/
	/* 
	//Case4◦
	//.Дан номер месяца — целое число в диапазоне 1–12(1 — январь, 2 —
	//февраль и т.д.).Определить количество дней в этом месяце для невисокосного года
	int days;
	cin >> days;
	switch (days) {
	case 1: cout << "31" << endl; break;
	case 2: cout << "28" << endl; break;
	case 3: cout << "30" << endl; break;
	case 4: cout << "31" << endl; break;
	case 5: cout << "30" << endl; break;
	case 6: cout << "31" << endl; break;
	case 7: cout << "30" << endl; break;
	case 8: cout << "31" << endl; break;
	case 9: cout << "31" << endl; break;
	case 10: cout << "30" << endl; break;
	case 11: cout << "31" << endl; break;
	case 12: cout << "31" << endl; break;
	}*/
	/* 
	//Case5.Арифметические действия над числами пронумерованы следующим
	//образом : 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление.Дан
	//номер действия N(целое число в диапазоне 1–4) и вещественные числа A
	//и B(В не равно 0).Выполнить над числами указанное действие и вывести
	//результат
	int n;
	cin >> n;
	int a, b;
	b != 0;
	cin >> a >> b;
	switch (n) {
	case 1: cout << "a - b" << endl; break;
	case 2: cout << "a + b" << endl; break;
	case 3: cout << "a / b" << endl; break;
	case 4: cout << "a * b" << endl; break;
	default: cout << "error" << endl;
	}*/
	/* 
	//Если переменная a равна нулю, то выведите 'Верно', иначе выведите 'Неверно'.Проверьте работу скрипта при a, равном 1, 0, -3.
	int a;
	cin >> a;
	if (a == 0) {
		cout << "верно" << endl;
	}
	else {
		cout << "не верно" << endl;
	}*/
	/* 
	//Если переменная a больше нуля, то выведите 'Верно', иначе выведите 'Неверно'.Проверьте работу скрипта при a, равном 1, 0, -3.
	int a;
	cin >> a;
	if (a > 0) {
		cout << "верно" << endl;
	}
	else {
		cout << "не верно" << endl;
	}*/
	/* 
	//Если переменная a меньше нуля, то выведите 'Верно', иначе выведите 'Неверно'.Проверьте работу скрипта при a, равном 1, 0, -3.
	int a;
	cin >> a;
	if (a < 0) {
		cout << "верно" << endl;
	}
	else {
		cout << "не верно" << endl;
	}*/
	/* 
	//Если переменная a больше или равна нулю, то выведите 'Верно', иначе выведите 'Неверно'.Проверьте работу скрипта при a, равном 1, 0, -3.
	int a;
	cin >> a;
	if (a >= 0) {
		cout << "верно" << endl;
	}
	else {
		cout << "не верно" << endl;
	}*/
	/* 
	//Если переменная a меньше или равна нулю, то выведите 'Верно', иначе выведите 'Неверно'.Проверьте работу скрипта при a, равном 1, 0, -3.
	int a;
	cin >> a;
	if (a <= 0) {
		cout << "верно" << endl;
	}
	else {
		cout << "не верно" << endl;
	}*/
    /* 
    //Если переменная a не равна нулю, то выведите 'Верно', иначе выведите 'Неверно'.Проверьте работу скрипта при a, равном 1, 0, -3.
int a;
cin >> a;
if (a != 0) {
	cout << "верно" << endl;
}
else {
	cout << "не верно" << endl;
}*/ 
 
}