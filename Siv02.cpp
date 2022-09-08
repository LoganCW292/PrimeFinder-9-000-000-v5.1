#include "Siv.h"
#include <fstream>
#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

string PrimerIn;

bool Siv::check01()
{
	//moved from the end of check02()
	lineCount = 0;
	lineCountVeri = 0;

	fstream file;
	file.open("Prime List.txt", ios::in);
	// error message if prime list is missing
	if (!(file.is_open()))
	{
		cout << endl << endl << "Missing 'Prime List.txt'" << endl << "Creating one now and restarting!" << endl << endl;
		file.open("Prime List.txt", ios::out);
		Sleep(2000);
		// error message if prime creation failed
		if (!(file.is_open()))
		{
			cout << endl << endl << "Failed to create 'Prime List.txt'" << endl << "Closing in 5s" << endl << endl;
			Sleep(5000);
			return false;
		}
		file.close();
		restart = true;
		return false;
	}
	while (getline(file, PrimerIn))
	{
		lineCount++; // check02 needs to set back to 0
		if (!(PrimerIn == ""))
		{
			Primer = stoi(PrimerIn);
		}
		else
		{
			Primer = 2;
		}
	}
	file.close();
	return true;
}