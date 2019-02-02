/* Workshop 2: Dynamic Memory at_home
File: Kingdom.h
Name:      Leny Fe Fernandez
email : lffernandez@myseneca.ca
Student#:  120818174
Section : OOP244SII
*/

// TODO: header safeguards
#ifndef SICT_Kingdom_h
#define SICT_Kingdom_h


// TODO: sict namespace
namespace sict {

	// TODO: define the structure Kingdom in the sict namespace
	struct Kingdom {
		char m_name[32];
		int m_population;
	};
	// TODO: declare the function display(...),
	//         also in the sict namespace
	void display(Kingdom& pKingdom);
	void display(Kingdom pKingdom[], int count_array);
}
#endif // !SICT_Kingdom_h

