#pragma once
/* Workshop 3 at_home: Classes and Privacy
File: CRA_Account.h
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Section : OOP244SII
*/

#ifndef sict_cra_account_h
#define sict_cra_account_h

namespace sict {
	const int max_name_length = 41;
	const int  min_sin = 100000000;
	const int  max_sin = 999999999; 
	const int max_yrs = 4;

	class CRA_Account {
		char family_name[max_name_length];
		char given_name[max_name_length];
		long sin;

		int tax_year[max_yrs];
		double balance_owed[max_yrs];
		int num_years;

	
		
	public:
		CRA_Account();
		void set(const char*, const char* , long);
		bool isEmpty() const;
		void display() const;
		bool isSINValid(long) const;
		void set(int, double );

	};
}
#endif // !sict_cra_account_h

