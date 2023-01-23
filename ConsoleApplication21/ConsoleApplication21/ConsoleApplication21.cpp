// ConsoleApplication21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// TODO: Не используй "магические" вроде Функция1, переменная "переменная" и т.д. Используй читаемые имена: showGamerName(), addNumbers(), firstName и т.д.
void myFunc1(string fname) {
	cout << fname << " Good gamer";
}
int addNumbers(int x, int y) {
	return x + y;
}

int main()
{
	setlocale(LC_ALL, "rus");

	// TODO: Используй пробелы между операторами и переменными.
	cout << addNumbers(45, 23) << endl;
	myFunc1("Valera");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// Как видишь я имею доступ к коду и могу его редактировать и комментировать.
// В последствии я буду делать комментарии другими способами, но пока можно и так.
// Запустить код на macOS у меня не вышло, буду перезагружаться на Windows.