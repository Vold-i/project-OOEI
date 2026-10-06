#include <iostream>
#include <windows.h>


using namespace std;

int main() {

	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	double height, speed, fuelfilling;

	do {
		cout << "Enter the heigh (positive number):\n";
		cin >> height;

		if (height < 0) {
			cout << "The height cannot be negative!\nEnter again:\n";
		}
	} while (height < 0);

	do {

		cout << "Enter the speed (positive number):\n";
		cin >> speed;
		if (speed < 0) {
			cout << "The speed cannot be negative!\nEnter again:\n";
		}
	} while (speed < 0);

	do {
		cout << "Enter the fuel amount(positive number, in persent)";
		cin >> fuelfilling;

		if (fuelfilling < 0) {
			cout << "The amount of fuel cannot be negative!\nEnter again:\n";
		}

		if (fuelfilling > 100) {
			cout << "The amount cannot be over 100%!\nEnter again:\n";
		}
	} while (fuelfilling < 0 || fuelfilling > 100);


	if (height <= 0) {
		cout << "Посадка";
	}
	else if (speed > 10 ) { 
		cout << "Небезпечне зниження";
	}

	else if (fuelfilling < 10) {
		cout << "Критична ситуація";
	}

	else {
		cout << "Нормальне зниження";
	}

	return 0;
}