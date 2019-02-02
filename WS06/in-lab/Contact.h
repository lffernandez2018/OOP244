/* Workshop 6 at_home: Class with a Resource
File: Contact.h
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Course and Section : OOP244SII
*/
#ifndef SICT_CONTACT_H
#define SICT_CONTACT_H
# define SIZE 20
namespace sict {

	class Contact {
		char contact_name[SIZE];
		long long* phone_numbers;
		int no_phone_numbers;
		void setSafe();
		void init(const char* cname, long long* phone_no, int num_pnum);
		bool isValid(const long long& phone) const;
	public:
		//default Constructor
		Contact();
		//contructor with parameters
		Contact(const char* cname, long long* phone_no, int num_pnum);
		//destructor
		~Contact();
		bool isEmpty() const;
		void display() const;
		Contact(const Contact& con) = delete;
		Contact& operator= (const Contact& con) = delete;

	};
	
}
#endif
