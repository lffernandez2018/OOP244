/* Workshop 8 in_lab: Virtual Functions
File: SavingsAccount.h
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Course and Section : OOP244SII
*/

#ifndef SICT_SAVINGSACCOUNT_H__
#define SICT_SAVINGSACCOUNT_H__

#include "Account.h"

namespace sict {
	class SavingsAccount: public Account{
		double interest_rate;
	
	public:
			// TODO: constructor initializes balance and interest rate
		SavingsAccount(double, double);

			// TODO: perform month end transactions
		void monthEnd();

		

			// TODO: display inserts the account information into an ostream			
		void display(std::ostream& ) const;
	};
}
#endif
