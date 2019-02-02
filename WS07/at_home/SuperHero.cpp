/* Workshop 7 at_home: Derived Classes
File: SuperHero.cpp
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Course and Section : OOP244SII
*/
#include<iostream>
#include"SuperHero.h"
#include"Hero.h"
using namespace std;
namespace sict {
	SuperHero::SuperHero():Hero()
	{
		h_superAttack = 0;
		h_superDefend = 0;
	}

	SuperHero::SuperHero(const char* name, int health, int strength, int superattack, int superdefend) : Hero(name, health, strength) {
		h_superAttack = 0;
		h_superDefend = 0;
		if (superattack >= 0 && superdefend >= 0) {
			h_superAttack = superattack;
			h_superDefend = superdefend;
		}
		
	}
	int SuperHero::attackStrength() const {
		if (!isEmptyState())
			return (Hero::attackStrength() + h_superAttack);
		else
			return 0;
	}
	int SuperHero::defend() const {
		if (isEmptyState())
			return 0;
		else
			return h_superDefend;
	}

	const SuperHero& operator*(const SuperHero& first, const SuperHero& second) {
		cout << "Super Fight! ";
		cout << first;
		cout << " vs ";
		cout << second;

		int rounds = 0;
		SuperHero A = first;
		SuperHero B = second;
		const SuperHero * winner = nullptr;

		while (rounds < max_rounds && A.isAlive() && B.isAlive()) {
			rounds++;
			A -= B.attackStrength() - A.defend();
			B -= A.attackStrength() - B.defend();
		}
		if (A.isAlive() && !B.isAlive())
		{
			cout << " : Winner is " << first << " in " << rounds << " rounds." << endl;
			winner = &first;
		}
		else if (B.isAlive() && !A.isAlive())
		{
			cout << " : Winner is " << second << " in " << rounds << " rounds." << endl;
			winner = &second;
		}
		else {
			cout << " : Winner is " << first << " in " << rounds << " rounds." << endl;
			winner = &first;
		}
		return *winner;
	}

}