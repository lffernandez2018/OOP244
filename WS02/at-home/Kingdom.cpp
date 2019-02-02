/*/* Workshop 2: Dynamic Memory at_home
File: Kingdom.cpp
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Section : OOP244SII
*/

// TODO: include the necessary headers
#include<iostream>
#include"Kingdom.h"
using namespace std;
// TODO: the sict namespace
namespace sict {
	// TODO:definition for display(...) 
	void display(Kingdom& pKingdom) {
		cout << pKingdom.m_name << ", population " << pKingdom.m_population << endl;
	}

void display(Kingdom pKingdom[], int count_array)
{
			int population = 0;
			cout << "------------------------------" << endl;
			cout << "Kingdoms of SICT" << endl;
			cout << "------------------------------" << endl;
			for (int i = 0; i < count_array; i++) {
				cout << i + 1 << ". " << pKingdom[i].m_name << ", population " << pKingdom[i].m_population << endl;
				//total number of ppl
				population += pKingdom[i].m_population;
			}
			cout << "------------------------------" << endl;
			cout << "Total population of SICT: " << population << endl;
			cout << "------------------------------" << endl;
		
}
}