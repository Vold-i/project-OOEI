#include <iostream>
#include <string>

using namespace std;


int main() {

	int bunamount, coffeeamount;
	double bunprice, coffeeprice, milkprice, total = 0;
	string	 bun, coffee, milk;



	cout << "Would you like to add bun to your order?(Yes or no answer)"; cin >> bun;

	if (bun == "yes") {
		cout << "Please enter the amount:\n"; 
		cin >> bunamount;

		cout << "Great! Now enter the price for one, please:\n";
		cin >> bunprice;


		total = (bunamount * bunprice);
		cout << "Your current sum is:\n" << total<<endl;
	}
	else {
		cout << "Your current amount is\n" << total<<endl;
	}
		

	cout << "Would you like to add some coffee to your cart?(yes or no answer)\n"; cin >> coffee;

	if (coffee == "yes") {

		cout << "Please enter the amount of cups:\n"; cin >> coffeeamount;
		cout << "Awesome! Please enter the price for one cup:\n";cin >> coffeeprice;
		total += (coffeeamount * coffeeprice);
		cout << "Your current sum is:\n" << total<<endl;
	}

	else {
		cout << "Your current amount is\n" << total<<endl;
	}


	cout << "Would you like some milk??(yes or no answer)\n"; cin >> milk;

	if (milk == "yes") {

		cout << "Please enter the price for milk:\n"; cin >> milkprice;
		total += milkprice;
		cout << "Your current sum is:\n" << total<<endl;
	}
	else {
		cout << "Your current amount is\n" << total<<endl;
	}

	cout << "Your order is succesfuly approved. Have a great day!" << endl;






	return 0;
}