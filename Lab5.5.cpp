/*
	Автор: Максим Колесник
	Группа: СБС-001-О-01
	Задание№: 5: 5)
	Цель: Написать программу для респечатки в инверсном порядке текстовой строки, реализованной в виде символьного массива.
*/

#include <iostream>
#include <string>
using namespace std;
void strreverse(string& str) {
	const unsigned len = str.size();
	for (unsigned i = 0; i < len / 2; i++) {
		unsigned char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
}
int main(int argc, char** argv) {
	cout << "Enter the world you want to enter in reverse order: ";
	string in_str = "";
	cin >> in_str;
	strreverse(in_str);
	cout << "World in reverse order: " << in_str << "\n" ;
	system("pause");
	return 0;
}