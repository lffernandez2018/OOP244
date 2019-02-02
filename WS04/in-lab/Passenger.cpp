// TODO: add file header comments here
/* Workshop 4 in_lab: Constructor
File: Passenger.cpp
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Course and Section : OOP244SII
*/
// TODO: add your headers here
#include <iostream>
#include <cstring>
#include"Passenger.h"

// TODO: continue your namespace here
using namespace std;
namespace sict {
	// TODO: implement the default constructor here
	Passenger::Passenger() {
		*passenger_name = '\0';
		*destination = '\0';
	}
	// TODO: implement the constructor with 2 parameters here
	Passenger::Passenger(const char* p_name, const char* p_destination) {

		if (p_name == '\0' || p_destination == '\0' || p_name == nullptr || p_destination == nullptr){

			*passenger_name = '\0';

			*destination = '\0';

		} else {

			strncpy(passenger_name, p_name, SIZE);

			strncpy(destination, p_destination, SIZE);

		}

	}	// TODO: implement isEmpty query here
	bool Passenger::isEmpty() const {
		bool result;
			if ((*passenger_name == '\0') || (*destination == '\0') || (passenger_name == nullptr) || (destination == nullptr) )
				{result = true;}
			else
				{result = false;}

			return result;
	}

	// TODO: implement display query here
	void Passenger::display() const {
		if(isEmpty())
			{ cout << "No passenger!" << endl; }
		else
			cout << passenger_name << " - " << destination << endl;

			}

}