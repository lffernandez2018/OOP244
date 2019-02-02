/* Workshop 5 at_home: Member Operator Overload
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
		
		bool isEquals(const Fraction& obj1, const Fraction& obj2) const;
		// TODO: declare the + operator overload
		Fraction operator+ (const Fraction& rhs) const;
		Fraction operator* (const Fraction& rhs) const;
		bool operator== (const Fraction& rhs) const;
		bool operator!= (const Fraction& rhs) const;
		Fraction& operator+=(const Fraction& rhs);

		
	};

}
#endif // !SICT_FRACTION_H