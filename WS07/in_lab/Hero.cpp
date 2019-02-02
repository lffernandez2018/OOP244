/* Workshop 7 in_lab: Derived Classes
File: Hero.cpp
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Course and Section : OOP244SII
*/
#include<iostream>
#include<cstring>
#include"Hero.h"
using namespace std;
namespace sict {
	Hero::Hero() {
		h_name[0] = '\0';
		h_health = 0;
		h_strength = 0;
	}
	bool Hero::isValid(const char* u_name, int u_health, int u_attack)
	{
		return (u_name != nullptr && u_name[0] != '\0' && u_health >= 0 && u_attack >= 0);
		
	}
	Hero::Hero(const char* name, int health, int strength) {
		if (isValid(name, health, strength)) {
			*this = Hero();
			strncpy(h_name, name, 41);
			h_name[41] = '\0';
			h_health = health;
			h_strength = strength;
		}
		else
			*this = Hero();
	}
	void Hero::operator-=(int attack) {
		if (h_health < 0)
			h_health = 0;
		if (attack >= 0)
		{
			h_health -= attack;
		}
		
	}
	bool Hero::isAlive() const {
		return h_health > 0;
	}

	int Hero::attackStrength() const {
		if (h_name[0] == '\0' && h_health == 0 && h_strength == 0)
			return 0;
		else
			return h_strength;
	}

	ostream& operator<<(ostream& os, const Hero& hero) {
		if (hero.h_name[0] == '\0' && hero.h_health == 0 && hero.h_strength == 0)
		{
			os << "No hero" << endl;
		}
		else
			os << hero.h_name;

		return os;
	}
	
	const Hero& operator* (const Hero& first, const Hero& second) {
		cout << "Ancient Battle! ";
		cout << first;
		cout << " vs ";
		cout << second;
		int rounds = 0;
		Hero a = first;	
		Hero b = second;
		const Hero *winner = nullptr;
	
		while (rounds < max_rounds && a.isAlive() && b.isAlive()) {
			rounds++;
			a	-= b.attackStrength();
			b	-= a.attackStrength();
		}
		if (a.isAlive() && !b.isAlive()) {
			cout << ": Winner is " << first << " in " << rounds << " rounds." << endl;
			winner = &first;
		}
		else if (b.isAlive() && !a.isAlive()) {
			cout << ": Winner is " << second << " in " << rounds << " rounds." <<endl;
			winner = &second;
		}
		else {
			cout << ": Winner is " << first << " in " << rounds << " rounds." <<endl;
			winner = &first;
		}
		return *winner;
	}
}