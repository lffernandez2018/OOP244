// TODO: add file header comments here
/* Workshop 4 at_home: Constructor
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
			int departure_year;
			int departure_month;
			int departure_day;
	public:
		Passenger();
		Passenger(const char* p_name, const char* p_destination);
		Passenger(const char* name, const char* des, int year, int month, int day);
		bool isEmpty() const;
		void display() const;
		const char* name() const;
		bool canTravelWith(const Passenger&) const;

		//declaration of function for setting the data member into safe empty state
		void setSafe();
		//declaration function for checking if the passenger and destination is valid
		bool isvalidName(const char* nme, const char* dest) const;
		

		
	};
}
#endif