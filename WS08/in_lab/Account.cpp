/* Workshop 8 in_lab: Virtual Functions
File: Account.cpp
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Course and Section : OOP244SII
*/

#include"Account.h"
using namespace std;
namespace sict {
	Account::Account(double bal) {
		if (bal > 0)
			a_balance = bal;
		else
			a_balance = 0;

	}
	bool Account::credit(double amount) {
		if (amount > 0) {
			a_balance += amount;
			return true;
		}
		else
			return false;
	}

	bool Account::debit(double amount) {
		if (amount > 0) {
			a_balance -= amount;
			return true;
		}
		else
			return false;
	}
	double Account::balance() const
	{
		return a_balance;
	}
}
