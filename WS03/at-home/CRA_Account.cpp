/*Workshop 3 at_home: Classes and Privacy
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
		num_years = 0;
	}
	void CRA_Account ::set(const char* familyname, const char* givenname, long newsin)
	{
		if (isEmpty())
		{
			*family_name = '\0';
			*given_name = '\0';
			sin = 0;
			num_years = 0;
		}
		strncpy(family_name, familyname, max_name_length);
		strncpy(given_name, givenname, max_name_length);
		sin = newsin;

		


	}
	bool CRA_Account :: isSINValid(long nsin) const {

		int check = 0;
		int total = 0;
		int compare_check = 0;

		check = nsin % 10;
		nsin /= 10;
		

		
		for (int i = 2; i <= 9; i++, nsin /= 10)
		{
			if ((i % 2) == 0)
			{
				int addDigits = (nsin % 10) * 2;
				while (addDigits != 0)
				{
					int digit = addDigits % 10;
					total += digit;
					addDigits /= 10;
				}

			}
			else
				total += nsin % 10;
		}

		compare_check = ((total / 10) + 1) * 10;

		return !((compare_check - total) == check);
					
	
	}

	bool CRA_Account::isEmpty() const{
		bool result;
		if ((sin>= max_sin) || (sin <= min_sin || family_name[0] == '\0' || given_name[0] == '\0')) {
			result = true;
		}
		else
		{
			result = isSINValid(sin);
		}
		

		return result;
	}

	void CRA_Account::display() const {
		if (!isEmpty()) {
			cout << "Family Name: " << family_name << endl;
			cout << "Given Name : " << given_name << endl;
			cout << "CRA Account: " << sin << endl;
			cout.setf(ios::fixed);
			cout.precision(2);
			
				for (int i = 0; i < num_years; i++) {

						if (balance_owed[i] > 2)
						{

							cout << "Year " << tax_year[i] << " balance owing: " << balance_owed[i] << endl;

						}
						else if (balance_owed[i] < -2)
						{
							cout << "Year " << tax_year[i] << " refund due: " << -(balance_owed[i]) << endl;
						}
						else
						{

							cout << "Year " << tax_year[i] << " No balance owing or refund due!" << endl;

						}
					
				}
			
			

			cout.unsetf(ios::fixed);
			cout.precision(6);
		}
		else
			cout << "Account object is empty!" << endl;
	
	}


	void CRA_Account::set(int year, double balance) {
		if (!isEmpty())
		{
			tax_year[num_years] = year;
			balance_owed[num_years] = balance;
			num_years += 1;
		}
		
	}
}

