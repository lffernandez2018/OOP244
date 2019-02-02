/* Workshop 5 in_lab: Member Operator Overload
File: Fraction.h
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Course and Section : OOP244SII
*/


// TODO: header file guard
#ifndef SICT_FRACTION_H
#define SICT_FRACTION_H
// TODO: create namespace
namespace sict {
	// TODO: define the Fraction class
	class Fraction {
		// TODO: declare instance variables 
		int numerator;
		int denominator;
		// TODO: declare private member functions
		int max() const;
		int min() const;
		void reduce();
		int gcd() const;
	public:
		// TODO: declare public member functions
		Fraction();
		Fraction(int num, int denom);
		bool isEmpty() const;
		void display() const;
		// TODO: declare the + operator overload
		Fraction operator + (const Fraction& rhs) const;
	};

}
#endif // !SICT_FRACTION_H