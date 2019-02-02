#pragma once

/*
tools.h
Name:      Leny Fe Fernandez
email:	lffernandez@myseneca.ca
Student#:  120818174
Section:   OOP244SII
Workshop: 1 in_home
*/
#ifndef SICT_TOOLS_H // NAMESPACE_HEADERFILENAME_H
#define SICT_TOOLS_H

namespace sict {
	// Performs a fool-proof integer entry
	int getInt(int min, int max);

	// Displays the user interface menu
	int menu();
}
#endif