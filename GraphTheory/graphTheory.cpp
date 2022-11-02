#include "graphTheory.h"

using namespace std;

graphTheory::graphTheory() {
	Gvert = new string[0];
	Vdegrees = new int[0];
	Glength = 0;
} // Default Function

graphTheory::graphTheory(int numVerts) {
	Gvert = new string[numVerts];
	Vdegrees = new int[numVerts * numVerts]; // Found nothing helpful for allocating a 2D array however this is basically 2D
	Glength = numVerts;
} // Number of vertices

graphTheory::~graphTheory() {
	delete[] Gvert;
	delete[] Vdegrees;
} // Destroy

void graphTheory::Gfill() {
	int countOne = 0;
	int countTwo = 0;

	for (int x = 0; x <= Glength - 1; x++) {
		cout << "Enter a Letter or a Name for a Vertice. " << endl;
		cin >> Gvert[x];
	} // Vertices Filled
	for (int x = 0; x <= Glength * Glength - 1; x++) {
		cout << "Please enter the value for [" << countOne << "]" << "[" << countTwo << "] of the array. Enter 0 for no edge." << endl;
		countOne++; // Represents X
		cin >> Vdegrees[x];
		if (countOne == Glength) {
			countOne = 0;
			countTwo++;
		}
	}
} // Fills all the vertices

int graphTheory::Dfind(string G) {
	int count = 0;
	int numDegrees = 0;
	
	for (int x = 0; x <= Glength - 1; x++) {
		if (Gvert[x] == G) {
			count = x;
		}
	}
	for (int x = 0; x <= Glength - 1; x++) {
		if (Vdegrees[count] > 0) {
			numDegrees++;
			count += Glength;
		}
		else {
			count += Glength;
		}
	}
	return numDegrees;
} // Finds a vertice and its degree

void graphTheory::OutputMatrixN() {
	int countOne = 0;
	int countTwo = 0;
	int Yarray = 0;

	cout << "| ";
	for (int x = 0; x <= Glength - 1; x++) {
		cout << x << " ";
	}
	cout << endl;
	for (int x = 0; x <= Glength * Glength - 1; x++) {
		if (countOne > Glength - 1) {
			cout << endl;
			countTwo++;
			countOne = 0;
		}
		if (countOne == 0) {
			cout << Yarray << " ";
			Yarray++;
		}
		cout << Vdegrees[x] << " ";
		countOne++;
	}
} // Find all the vertices

void graphTheory::OutputMatrixA() {
	int countOne = 0;
	int countTwo = 0; // Not needed but is present for extra functionality
	int tempGlength = 0;

	cout << "| ";
	for (int x = 0; x <= Glength - 1; x++) {
		cout << Gvert[x] << " ";
	}
	cout << endl;
	for (int x = 0; x <= Glength * Glength - 1; x++) {
		if (countOne > Glength - 1) {
			cout << endl;
			countTwo++;
			countOne = 0;
		}
		if (countOne == 0) {
			cout << Gvert[tempGlength] << " ";
			tempGlength++;
		}
		cout << Vdegrees[x] << " ";
		countOne++;
	}
} // Find all the vertices
