/* Workshop 8 at_home: Virtual Functions
File: SavingsAccount.cpp
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Course and Section : OOP244SII
Date: 2018/04/02
*/

#include<iostream>
#include "SavingsAccount.h"


using namespace std;
namespace sict {
	SavingsAccount::SavingsAccount(double bal, double interest): Account(bal) {
		if (interest > 0)
			interest_rate = interest;
		else
			interest_rate = 0.00;
	}

	void SavingsAccount::monthEnd() {
		double cal = balance() * interest_rate;
		credit(cal);
	}

	void SavingsAccount::display(std::ostream& os) const {
		os << "Account type: Savings" << endl;
		os.setf(std::ios::fixed);
		os.precision(2);
		os << "Balance: $" << balance() << endl;
		os << "Interest Rate (%): " << interest_rate * 100 << endl;
		os.unsetf(std::ios::fixed);
		os.precision(6);
	}
}
