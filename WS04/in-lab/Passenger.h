// TODO: add file header comments here
/* Workshop 4 in_lab: Constructor
File: Passenger.h
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Course and Section : OOP244SII
*/

// TODO: add header file guard here

#ifndef SICT_PASSENGER_H
#define SICT_PASSENGER_H
#define SIZE 32


// TODO: declare your namespace here
namespace sict {
	// TODO: define the Passenger class here
	class Passenger {
			char passenger_name[SIZE];
			char destination[SIZE];
	public:
		Passenger();
		bool isEmpty() const;
		Passenger(const char* p_name, const char* p_destination);
		void display() const;

		
	};
}
#endif