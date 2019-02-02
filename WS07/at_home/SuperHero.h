/* Workshop 7 at_home: Derived Classes
File: SuperHero.h
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Course and Section : OOP244SII
*/
#ifndef SUPERHERO_SICT_H
#define SUPERHERO_SICT_H
#include"Hero.h"

namespace sict {
	class SuperHero : public Hero {
		int h_superAttack;
		int h_superDefend;

	public:
		SuperHero();
		SuperHero(const char* name, int health, int strength, int superattack, int superdefend);
		int attackStrength() const;
		int defend() const;

	};
	const SuperHero& operator*(const SuperHero& first, const SuperHero& second);
}

#endif