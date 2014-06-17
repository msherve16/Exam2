#include "Registered.h"
#include "Runner.h"
#include <fstream>
#include <string>
#include <vector>
using namespace std;

//Registered Constructor
Registered::Registered (string Name, string Filename)
{
	filename = Filename;

	ifstream registered(Filename);
	string line, first_name, last_name;
	int pace;
	//enter names into vector from file
	if (!registered.fail())
	{
		while(!registered.eof())
		{
			getline(registered, line); 
			registered >> first_name >> last_name >> pace;
			runners.push_back(Runner(first_name, last_name, pace));
		}
		registered.close();
	}

}

//sort fastest to slowest
template <typenameT>
void Registered:: Sort()
{
	for (int m; m < runners.size(); m++)
	{
		T currentMin = runners[m];
		int currentMinindex = m;

		for (int n = m+1; n <runners.size(); n++)
		{
			if (currentMin > runners[n])
			{
				currentMin = runners[n];
				currentMinindex = n;
			}
		}
	}

}

//write ordered pace values from vector into specific files
void Registered:: Write()
{
	for (int i =0; i < runners.size(); i++)
	{
		if (pace >= 0 && pace <= 360)
		{
			ifstream white ("white.txt");
				if (!white.fail())
				{
					white >>  runners[i].get_firstname() >> runners[i].get_lastname >>runners[i].get_pace;
					white.close();
				}
		}

		else if (pace >= 0 && pace <= 360)
		{
			ifstream yellow ("yellow.txt");
			if (!yellow.fail())
			{
				yellow >> runners[i].get_firstname() >> runners[i].get_lastname >>runners[i].get_pace;
				yellow.close();
			}
		}

		else if (pace >= 0 && pace <= 360)
		{
			ifstream green ("green.txt");
			if (!green.fail())
			{
				green >>  runners[i].get_firstname() >> runners[i].get_lastname >>runners[i].get_pace;
				green.close();
			}
		}

		else if (pace >= 0 && pace <= 360)
		{
			ifstream orange ("orange.txt");
			if (!orange.fail())
			{
				orange >> runners[i].get_firstname() >> runners[i].get_lastname >>runners[i].get_pace;
				orange.close();
			}
		}

		else if (pace >= 0 && pace <= 360)
		{
			ifstream blue("blue.txt");
			if (!blue.fail())
			{
				blue >>  runners[i].get_firstname() >> runners[i].get_lastname >>runners[i].get_pace;
				blue.close();
			}
		}

		else if (pace >= 0 && pace <= 360)
		{
			ifstream lilac("lilac.txt");
			if (!lilac.fail())
			{
				
				lilac >> runners[i].get_firstname() >> runners[i].get_lastname >>runners[i].get_pace;
				lilac.close();
			}
		}

		else if (pace >= 0 && pace <= 360)
		{
			ifstream red ("red.txt");
			if (!red.fail())
			{
				red >>  runners[i].get_firstname() >> runners[i].get_lastname >>runners[i].get_pace;
				red.close();
			}
		}
	}
}

