/* Workshop 5 in_lab: Member Operator Overload
File: Fraction.cpp
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Course and Section : OOP244SII
*/

// TODO: insert header files
#include <iostream>
#include "Fraction.h"

using namespace std;
	// TODO: continue the namespace
namespace sict {
		// TODO: implement the default constructor
	Fraction::Fraction() {
		numerator = 0;
		denominator = 0;
	
	}

		// TODO: implement the two-argument constructor
	Fraction::Fraction(int num, int denom) {
		if (num >= 0 && denom > 0)
		{
			numerator = num;
			denominator = denom;
			reduce();
		}
		else
		{
			*this = Fraction();

		}
	}
		// TODO: implement the max query
	int Fraction::max() const {
		return (numerator > denominator) ? numerator : denominator;
	}
		// TODO: implement the min query
	int Fraction::min() const {
		return (numerator > denominator) ? denominator : numerator;
	}
		// gcd returns the greatest common divisor of num and denom
		//
	int Fraction::gcd() const {
		int mn = min();  // min of numerator and denominator
		int mx = max();  // max of numerator and denominator
		int g_c_d = 1;
		bool found = false;

		for (int x = mn; !found && x > 0; --x) { // from mn decrement until divisor found
			if (mx % x == 0 && mn % x == 0) {
				found = true;
				g_c_d = x;
			}
		}
		return g_c_d;
	}

	// TODO: implement the reduce modifier
	void Fraction::reduce() {
		int gcd_temp = gcd();
		numerator /= gcd_temp;
		denominator /= gcd_temp;
	}
	// TODO: implement the display query
	void Fraction::display() const {
		if (isEmpty()) {
			cout << "no fraction stored";
		}
		else if (denominator == 1) {
			cout << numerator;
		}
		else
		{
			cout << numerator << "/" << denominator;
		}
	}
	// TODO: implement the isEmpty query
	bool Fraction::isEmpty() const {
		return (denominator == 0 && numerator ==0);
	}
	// TODO: implement the + operator
	Fraction Fraction::operator+(const Fraction& rhs) const {
		Fraction obj;
		if (!isEmpty() && !rhs.isEmpty())
		{
			obj.numerator = (numerator * rhs.denominator) + (denominator * rhs.numerator);
			obj.denominator = denominator * rhs.denominator;
			obj.reduce();
		}
		else
		{
			 Fraction();
		}
		
		return obj;
	}
} 