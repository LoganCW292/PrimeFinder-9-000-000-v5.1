#include "Siv.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

string PrimerInVeri;

bool Siv::check02()
{
	fstream file;
	file.open("Prime List.txt", ios::in);
	//failure message
	if (!(file.is_open()))
	{
		cout << endl << endl << "Theres a problem with 'Prime List.txt'" << endl << "Restarting" << endl << endl;
		restart = true;
		Primer = 0;
		return false;
	}
	while (getline(file, PrimerInVeri))
	{
		lineCountVeri++; // check02 needs to set back to 0
		if (!(PrimerInVeri == ""))
		{
			PrimerVeri = stoi(PrimerInVeri);
		}
		else
		{
			PrimerVeri = 1;
		}
	}

	if (!(lineCount == lineCountVeri))
	{
		cout << endl << endl << "Different Prime List Detected" << endl << "Restarting" << endl << endl;
		//lineCount = 0;
		//lineCountVeri = 0; //moved to the beginning of check01()
		Primer = 0;
		restart = true;
		yes = false; //tells the first check to return false, otherwise this function gets ignored;
		return false;
	}
	file.close();
	//lineCount = 0;//moved to the beginning of check01()
	//lineCountVeri = 0;
	return true;
}