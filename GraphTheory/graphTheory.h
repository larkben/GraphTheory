#pragma once

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

// Main goal is to solve problem #1 on 226

class graphTheory {
private:
	string* Gvert;
	int Glength;
	int* Vdegrees;
public:
	// Constructors
	graphTheory(); // Basic Constructor all variables unitizialized
	graphTheory(int numVerts); // Initialized number vertices

	// Deconstructor
	~graphTheory(); // Deconstructs

	// Functions
	void Gfill(); // Asks the user to fill in the vertices and their names;
	void Dfind(string G); // finds the degree of a entered vertice
	void DfindAll(); // outputs all vertices and their degrees

};

