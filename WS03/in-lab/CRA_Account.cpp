/*Workshop 3 in_lab: Classes and Privacy
File: CRA_Account.cpp
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Section : OOP244SII
	*/
#include<iostream>
#include<cstring>
#include"CRA_Account.h"


using namespace std;

namespace sict {
	CRA_Account::CRA_Account() {
		*family_name = '\0';
		*given_name = '\0';
		sin = 0;
	}
	void CRA_Account ::set(const char* familyname, const char* givenname, int newsin)
	{
		if (isEmpty())
		{
			*family_name = '\0';
			*given_name = '\0';
			sin = 0;
		}

		strncpy(family_name, familyname, max_name_length);
		strncpy(given_name, givenname, max_name_length);
		sin = newsin;

		
		


	}

	bool CRA_Account::isEmpty() const{
		bool result;
		if ((sin <= max_sin) && (sin >= min_sin)) {
			result = false;
		}
		else
			result = true;

		return result;
	}

	void CRA_Account::display() const {
		
		if (!isEmpty())
		{
			cout << "FAMILY NAME: " << family_name << endl;
			cout << "Given Name: " << given_name << endl;
			cout << "CRA Account: " << sin << endl;
		}
		else
			cout << "Account object is empty!" << endl;
	}
}

