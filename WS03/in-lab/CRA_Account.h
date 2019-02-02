#pragma once
/* Workshop 3 in_lab: Classes and Privacy
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

	class CRA_Account {
		char family_name[max_name_length];
		char given_name[max_name_length];
		int sin;
	public:
		CRA_Account();
		void set(const char* family_name, const char* given_name, int sin);
		bool isEmpty() const;
		void display() const;

	};
}
#endif // !sict_cra_account_h

