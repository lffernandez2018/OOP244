// OOP244 Workshop 8: Virtual Functions and Abstract Base Classes
// File: ChequingAccount.cpp
// Version: 2.0
// Date: 2017/12/11
// Author: Chris Szalwinski, based on previous work by Heidar Davoudi
// Description:
// This file implements the ChequingAccount class
///////////////////////////////////////////////////

/* Workshop 8 at_home: Virtual Functions
File: ChequingAccount.cpp
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Course and Section : OOP244SII
Date: 2018/04/02
*/

#include "ChequingAccount.h"

using namespace std;

namespace sict {
	// constructor initializes balance and transaction fee
	//
	ChequingAccount::ChequingAccount(double bal, double trans, double month) :Account(bal) {
		if (trans > 0 && month > 0)
		{
			trans_fee = trans;
			month_end_fee = month;
		}
		else
		{
			trans_fee = 0.00;
			month_end_fee = 0.00;
		}
	}

	// credit (add) an amount to the account balance and charge fee
	// returns bool indicating whether money was credited
	//
	bool ChequingAccount::credit(double amount) {
		if (amount > 0)
		{
			if (Account::credit(amount))
			{
				return Account::debit(trans_fee) ? true : false;
			}
			else
				return false;

		}
		else
			return false;
	}
	// debit (subtract) an amount from the account balance and charge fee
	// returns bool indicating whether money was debited
	//
	bool ChequingAccount::debit(double amount) {
		if (amount > 0)
		{
			if (Account::debit(amount))
			{
				return Account::debit(trans_fee) ? true : false;
			}
			else
				return false;
		}
		else
			return false;
	}


	// monthEnd debits month end fee
	//
	void ChequingAccount::monthEnd()
	{
		debit(month_end_fee);
	}


	// display inserts account information into ostream os
	//
	void ChequingAccount::display(std::ostream& os) const {
		os << "Account type: Chequing" << endl;
		os.setf(std::ios::fixed);
		os.precision(2);
		os << "Balance: $" << balance() << endl
			<< "Per Transaction Fee: " << trans_fee << endl
			<< "Monthly Fee: " << month_end_fee << endl;
		os.unsetf(std::ios::fixed);
		os.precision(6);
	}




}