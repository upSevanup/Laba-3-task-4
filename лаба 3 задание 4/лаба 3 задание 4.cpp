﻿#include <iostream>
#include <clocale>

using namespace std;

/*лабораторная работа 3. Поливцев Михаил, ИВТ-31. Задание 4. индивидуальный вариант 16.
* вывести название дня недели.
*/

int main() {
	setlocale(LC_ALL, "ru");

	int n;

	cout << "Введите номер дня недели >> ";
	cin >> n;

	switch (n)
	{
	case 1:
		cout << "Понедельник" << endl;
		break;
	case 2:
		cout << "Вторник" << endl;
		break;
	case 3:
		cout << "Среда" << endl;
		break;
	case 4:
		cout << "Четверг" << endl;
		break;
	case 5:
		cout << "Пятница" << endl;
		break;
	case 6:
		cout << "Суббота" << endl;
		break;
	case 7:
		cout << "Воскресенье" << endl;
		break;
	default:
		cout << "В неделе только 7 дней" << endl;
		break;
	}

}