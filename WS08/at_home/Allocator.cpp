/* Workshop 8 at_home: Virtual Functions
File: Allocator.cpp
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Course and Section : OOP244SII
Date: 2018/04/02
*/

#include "SavingsAccount.h" 
#include "ChequingAccount.h"

namespace sict {

	// define interest rate
	const double rate = 0.05;
	//define transaction fee
	const double transfee = 0.50;
	//define monthly fee
	const double monthfee = 2.00;
	// TODO: Allocator function
	//
	iAccount* CreateAccount(const char* account, double balance) {
		iAccount* acc = nullptr;
		if (account[0] == 'S')
			acc = new SavingsAccount(balance, rate);
		else if(account[0] == 'C')
			acc = new ChequingAccount(balance, transfee, monthfee);
		else
			return nullptr;

		return acc;
		

	}








}
