/* Workshop 8 at_home: Virtual Functions
File: ChequingAccount.h
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Course and Section : OOP244SII
Date: 2018/04/02
*/

#ifndef SICT_CHEQUINGACCOUNT_H__
#define SICT_CHEQUINGACCOUNT_H__

#include "Account.h"

namespace sict {
	class ChequingAccount: public Account                    {
		double trans_fee;
		double month_end_fee;


		public:
			// TODO: constructor initializes account balance and transaction fee
			ChequingAccount(double, double, double);

			// TODDO: credit adds +ve amount to the balance
			bool credit(double);

			// TODO: debit subtracts a +ve amount from the balance
			bool debit(double);

			// TODO: month end
			void monthEnd();

			// TODO: display inserts the account information into an ostream
			void display(std::ostream&) const;

	};
}
#endif
