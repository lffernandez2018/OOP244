/* Workshop 8 in_lab: Virtual Functions
File: Allocator.cpp
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Course and Section : OOP244SII
*/

#include "SavingsAccount.h" 

namespace sict {

	// define interest rate
	//
	const double rate = 0.05;


	// TODO: Allocator function
	//
	iAccount* CreateAccount(const char* account, double balance) {
		iAccount* acc = nullptr;
		if (account[0] == 'S')
			acc = new SavingsAccount(balance, rate);
		else
			return nullptr;

		return acc;
		

	}








}
