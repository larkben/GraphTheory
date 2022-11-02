#include <iostream>
#include <cstring>
#include "graphTheory.h"

using namespace std;

// Main goal solve problem #1 page 226

// Solved

int main() {
	int degreeCount;

	graphTheory a(5);
	a.Gfill();
	a.OutputMatrixN();
	cout << endl << endl;
	a.OutputMatrixA();
	cout << endl;

	degreeCount = a.Dfind("A");
	cout << degreeCount << "A" << endl;
	degreeCount = a.Dfind("E");
	cout << degreeCount << "E" << endl;
	degreeCount = a.Dfind("D");
	cout << degreeCount << "D" << endl;

}