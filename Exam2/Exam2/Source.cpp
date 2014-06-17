#include "Registered.h"
#include "Runner.h"
#include <iostream>
#include <fstream>
#include <iomanip>
//I affirm that all code given below was written solely by me, Morgan Sherve, 
//and that any help I received adhered to the rules stated for this exam.

int main()
{
	Registered reg ("Bloomsday" , "registrants.txt");

	ifstream white;
	white.open("white.txt", ios::out);

	if (!white.fail())
	{
		white.getline(firstname, lastname, pace) << endl;
		cout <<firstname<<" " <<  lastname << " " <<  pace << endl; }
	}

	else 
	{cout << "File could not open." << endl;}


	return 0;
}
