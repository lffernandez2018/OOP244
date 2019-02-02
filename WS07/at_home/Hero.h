/* Workshop 7 at_home: Derived Classes
File: Hero.h
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Course and Section : OOP244SII
*/
#ifndef HERO_SICT_H
#define HERO_SICT_H
#include<iostream>
#define max_rounds 100

namespace sict {
	class Hero {
		char h_name[41];
		int h_health;
		int h_strength;
		
	public:
		Hero();
		Hero(const char* name, int health, int strength);
		void operator -= (int attack);
		bool isAlive() const;
		int attackStrength() const;
		bool isValid(const char* u_name, int u_health, int u_attack);
		bool isEmptyState() const;
		friend std::ostream& operator<<(std::ostream& os, const Hero& hero);
	};

	const Hero& operator*(const Hero& first, const Hero& second);
}
#endif // !HERO_SICT_H
