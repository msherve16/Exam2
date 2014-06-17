#ifndef _REGISTERED_H_
#define _REGISTERED_H

#include "Runner.h" //"has-a" relationship
#include <string>
#include <vector>
using namespace std;

class Registered
{
private:
	string name, filename;
	vector <Runner> runners; //vector

public:
	Registered(string Name, string Filename); //constructor, use to open file to enter in names
	void Sort();
	void Write();
};



#endif _REGISTERED_H_