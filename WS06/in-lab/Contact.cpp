/* Workshop 6 at_home: Class with a Resource
File: Contact.pp
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Course and Section : OOP244SII
*/

//header files
#include <iostream>
#include <cstring>
#include "Contact.h"

using namespace std;
namespace sict {
	void Contact::setSafe() {
		contact_name[0] = '\0';
		phone_numbers = nullptr;
		no_phone_numbers = 0;
	}
	//default constructor
	Contact::Contact() {
		setSafe();
	}
	//constructor with 3 parameters
	void Contact::init(const char* cname, long long* phone_no, int num_pnum) {
		setSafe();
		int x = 0;
		
		if (cname != nullptr && cname != char(0))
		{
			strncpy(contact_name, cname, 19);
			contact_name[19] = '\0';
		}
				no_phone_numbers = num_pnum;
				phone_numbers = new long long[no_phone_numbers];

				for (int i = 0; i < no_phone_numbers; i++)
				{
					if (isValid(phone_no[i]))
					{
						phone_numbers[x] = phone_no[i];
						x++;
					}
				 
				}
				no_phone_numbers = x;
			
		
	}
	bool Contact::isValid(const long long& phone) const {
		int areaCode = 0;
		int CountryCode = 0;
		int p_num = 0;
		
		if (phone >= 10000000000 && phone <= 999999999999)
		{
			p_num = phone % 10000000;
			areaCode = (phone / 10000000) % 1000;
			CountryCode = phone / 10000000000;
		}
		return ((areaCode > 0 && areaCode <= 999) && (CountryCode > 0 && CountryCode <= 99) && (p_num > 0 && p_num <= 9999999));	
		
	}
	Contact::Contact(const char* cname, long long* phone_no, int num_pnum) {
		init(cname, phone_no, num_pnum);
	}

	
	Contact::~Contact() {
		delete[] phone_numbers;
	}
	bool Contact::isEmpty() const {
		return ( contact_name[0] == '\0');
		
	}
	void Contact::display() const {
		if (isEmpty())
		{
			cout << "Empty contact!" << endl;
		}
		else 
		{
			cout << contact_name << endl;
			for (int i = 0; i < no_phone_numbers; i++)
			{
				int areaCode = 0;
				int CountryCode = 0;
				int p_num = 0;
				int num[8];
					p_num = phone_numbers[i] % 10000000;
					areaCode = (phone_numbers[i] / 10000000) % 1000;
					CountryCode = phone_numbers[i] / 10000000000;
					cout << "(+" << CountryCode<< ") "<< areaCode <<" ";
					for (int y = 7; y >= 0; y--, p_num /= 10)
					{ num[y] = p_num % 10; }
					cout << num[1] << num[2] << num[3] << "-" << num[4] << num[5] << num[6] << num[7] <<endl;
					
				
			}
		}
		

	}

	

}
