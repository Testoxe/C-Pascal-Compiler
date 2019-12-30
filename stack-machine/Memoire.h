#pragma once

#include <algorithm>
#include <string>
#include <array>
#include <vector>
#include <iostream>
#include "Constantes.h"

using namespace std;

class Memoire
{
private:

	// Memory
	array<string, MEMORYSIZE> cells;

	// Registers
	int co = 0; // Adress of the current executed instruction
	int beg = 0; // Adress of the first global variable
	int bel = 0; // Adress of the local memory of a function
	int sp = 0; // Adress of the cell right after the summit of the stack

public:
	// Constructor
	Memoire(vector<string> code);

	// Utilities
	bool stackFull(); // Check if the stack is full
	bool stackEmpty(); // Check if the stack is empty

	// Getters
	int getCo();
	int getBeg();
	int getBel();
	int getSp();
	string getCell(int num);

	// Setters
	void incCo();
	void incSp();
	void decSp();
	void setCo(int toSet);
	void setCell(int num, string value);
};
