#include "Siv.h"
#include <fstream>
#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

string digIn;
string voider;

bool Siv::get()
{ 
	//gets total # of lines, updates every time, if the list has been swapped prior to this but after first check, the second check will fix things
	lineCountGet = 0;
	lineVal++;
	fstream file;
	file.open("Prime List.txt", ios::in);
	if (!(file.is_open()))
	{
		cout << endl << endl << "problem reading from list" << endl << endl;
		Sleep(2000);
		return false;
	}
	while (getline(file, voider))
	{
		lineCountGet++; //stores total amount of lines on the list
		if (file.eof())
		{
			break;
		}
	}

	if (lineVal <= lineCountGet / 2)
	{
		while (getVar++ <= lineVal) {
			getline(file, digIn);
		}
		if (!(digIn == ""))
		{
			getReturn = stoi(digIn);
			return true;
		}
	}
	getVar = 0;
	getReturn = 0;
	return true;
}