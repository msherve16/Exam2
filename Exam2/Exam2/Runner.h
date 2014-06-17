#ifndef _RUNNER_H_
#define _RUNNER_H_

#include <string>
using namespace std;

class Runner
{
private:
		string firstname, lastname;
		int pace;
public:
	Runner(string Firstname, string Lastname, int Pace);
	string get_firstname();
	string get_lastname();
	int get_pace();

};

#endif _RUNNER_H_
