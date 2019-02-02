#pragma once
/*
graph.h
Name:      Leny Fe Fernandez
email:	lffernandez@myseneca.ca
Student#:  120818174
Section:   OOP244SII
Workshop: 1 in_home
*/

#ifndef SICT_GRAPH_H
#define SICT_GRAPH_H

namespace sict {
	// Maximum number of samples in an graph
#define MAX_NO_OF_SAMPLES 20
// Fills the samples array with the statistic samples
	void getSamples(int samples[], int noOfSamples);

	// Finds the largest sample in the samples array, if it is larger than 70,
	// therwise it will return 70. 
	int findMax(int samples[], int noOfSamples);
	// Prints a scaled bar relevant to the maximum value in samples array
	void printBar(int val, int max);
	// Prints a graph comparing the sample values visually 
	void printGraph(int samples[], int noOfSamples);
}
#endif // !NAMESPACE_HEADERFILENAME_H