#include <iostream>
#include <iomanip>
using namespace std;

/* VARIABLES */
double monthlysales, income;

int main() {
	
	/* INPUTS */
	cout << "Enter your monthly sales (00000): $";

	/* CONDITIONS */
	if (!(cin >> monthlysales)) { // Checks if the input is a number
		cout << "Numbers only" << endl;
		return 1;
	}

	if (monthlysales >= 50000) { // 50,000 or greater
		income = 575 + (monthlysales * 0.16);
	}

	else if (monthlysales >= 40000) { // 40,000 or greater
		income = 550 + (monthlysales * 0.14);
	}

	else if (monthlysales >= 30000) { // 30,000 or greater
		income = 525 + (monthlysales * 0.12);
	}

	else if (monthlysales >= 20000) { // 20,000 or greater
		income = 500 + (monthlysales * 0.09);
	}

	else if (monthlysales >= 10000) { // 10,000 or greater
		income = 450 + (monthlysales * 0.05);
	}

	else if (monthlysales < 10000) { // less than 10,000
		income = 400 + (monthlysales * 0.03);
	}

	cout << "Your monthly sales: $" << fixed << setprecision(2) << monthlysales << endl;
	cout << "Your income: $" << fixed << setprecision(2) << income << endl;

	return 0;
}