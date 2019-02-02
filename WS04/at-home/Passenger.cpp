// TODO: add file header comments here
/* Workshop 4 at_home: Constructor
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

	//Function for setting the data members to safe empty state
	void Passenger::setSafe() {
		*passenger_name = '\0';
		*destination = '\0';
		departure_year = 0;
		departure_month = 0;
		departure_day = 0;
	}
	// TODO: implement the default constructor here
	Passenger::Passenger() {
		setSafe();
	}
	// TODO: implement the constructor with 2 parameters here
	Passenger::Passenger(const char* p_name, const char* p_destination) {

		if (isvalidName(p_name, p_destination))
		{

			strncpy(passenger_name, p_name, SIZE);
			strncpy(destination, p_destination, SIZE);
			departure_year = 2017;
			departure_month = 1;
			departure_day = 1;

		}
		 else 
		 {

			 setSafe();
				
		 }

	}
	//constructor with 5 parameters
	Passenger::Passenger(const char* name, const char* des, int year, int month, int day)
	{
	
		if (isvalidName(name, des) && (year >= 2017 && year <= 2020 && month >= 1 && month <= 12 && day >= 1 && day <= 31))
		
		{

			strncpy(passenger_name, name, SIZE);
			strncpy(destination, des, SIZE);
			departure_year = year;
			departure_month = month;
			departure_day = day;
		}
		else
		{
			setSafe();
		}
		

	}
	// TODO: implement isEmpty query here
	bool Passenger::isEmpty() const {
		bool result;
		if ((passenger_name[0] == '\0' || destination[0] == '\0' || departure_year == 0 || departure_month == 0 || departure_day == 0))
			result = true;
		else
			result = false;

		return result;
			
	}

	// TODO: implement display query here
	void Passenger::display() const
	{
			
		cout << passenger_name << " - " << destination << " on " << departure_year <<"/";
		cout.fill('0');
		cout.width(2);
		cout << departure_month << "/" << departure_day << endl;

	}
	
	const char* Passenger::name() const
	{
		return(passenger_name);
	}

	bool Passenger::canTravelWith(const Passenger& passObj) const
	{	
		bool compare;

		bool compare_destination = ((strcmp(passObj.destination, destination)));
		if (!compare_destination && (passObj.departure_year == departure_year) && (passObj.departure_month == departure_month) && (passObj.departure_day == departure_day))
			compare = true;
		else
			compare = false;
		return compare;
		
	}
	//function for checking passenger name and destination validity
	bool Passenger::isvalidName(const char* nme, const char* dest) const
	{
		bool retvalidname;
		if (nme != nullptr && dest != nullptr && nme[0] != '\0' && dest[0] != '\0')
			retvalidname = true;
		else
			retvalidname = false;


		return retvalidname;
	}

	
}