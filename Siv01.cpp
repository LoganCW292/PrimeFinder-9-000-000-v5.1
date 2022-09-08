#include "Siv.h"
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
#include <thread>

using namespace std;

string userIn;
char y = 'y';
char Y = 'Y';
string VOIDSTR;

bool done01 = false;
bool done02 = false;
bool prime01 = false;
bool prime02 = false;
bool go01 = true;
bool go02 = true;

long long primeing01 = 0;
long long primeing02 = 0;
long long thePrime01 = 0;
long long thePrime02 = 0;

void s01()//this is in another thread
{
	bool restart = true;
	Siv siv;
	while (restart)
	{
		while (!(go01))
		{
			//waits very fast
		}
		go01 = false;
		thePrime01 = siv.crunch(primeing01);
		if (thePrime01 > 0)
		{
			prime01 = true;
			done01 = true;
		}
		else
		{
			prime01 = false;
			done01 = true;
		}
	}
}

void s02()//dido
{
	bool restart = true;
	Siv siv;
	while (restart)
	{
		while (!(go02))
		{
			//waits very fast
		}
		go02 = false;
		thePrime02 = siv.crunch(primeing02);
		if (thePrime02 > 0)
		{

			prime02 = true;
			done02 = true;
		}
		else
		{
			prime02 = false;
			done02 = true;
		}
	}
}

void Siv::start()
{
	cout << "PrimeFinder 9,000,000 v4.20" << endl << endl << "Created by Logan Worthington." << endl << endl;
	cout << "See what prime you get too before this baby crashes!" << endl << endl;
	cout << "Slow mode? (y/n)" << endl;

	while (getline(cin, userIn))
	{
		if (userIn.empty())
		{
			break;
		}
		else if (userIn == "y" || "Y")
		{
			delay = 630;
			break;
		}
	}
	
	check01();
	if (Primer >= 3)
	{
		primeing01 = Primer + 2;
		primeing02 = Primer + 4;
	}
	else
	{
		primeing01 = Primer + 1;
		primeing02 = Primer + 3;
	}
	
	thread one(s01);
	thread two(s02);
	save();
}

bool Siv::save()
{
	while (true)//you dont stop till i say so, Bitch!
	{
		Sleep(delay);
		if (check02())
		{
			while (!(done01))
			{
				//Sleep(1000);
				//waits for first thread, very fast
			}
			done01 = false;
			if (prime01)
			{
				prime01 = false;
				cout << thePrime01 << endl;
				fstream file;
				file.open("Prime List.txt", ios::app);
				// err message if appending file failes
				if (!(file.is_open()))
				{
					cout << endl << endl << "Failed to append data to 'Prime List.txt'" << endl << "Restarting" << endl << endl;
					Sleep(2200);
					restart = true;
					return false;
				}
				file << thePrime01 << endl;
				file.close();
			}

			while (!(done02))
			{
				//waits
			}
			done02 = false;
			if (prime02)
			{
				prime02 = false;
				cout << thePrime02 << endl;
				fstream file;
				file.open("Prime List.txt", ios::app);
				// err message if appending file failes
				if (!(file.is_open()))
				{
					cout << endl << endl << "Failed to append data to 'Prime List.txt'" << endl << "Restarting" << endl << endl;
					Sleep(2200);
					restart = true;
					return false;
				}
				file << thePrime02 << endl;
				file.close();
			}
			check01();
			primeing01 = primeing02 + 2;
			primeing02 = primeing02 + 4;
			go01 = true;
			go02 = true;
		}
		else
		{
			check01();
			if (Primer >= 3)
			{
				primeing01 = Primer + 2;
				primeing02 = Primer + 4;
			}
			else
			{
				primeing01 = Primer + 1;
				primeing02 = Primer + 3;
			}
			go01 = true;
			go02 = true;
		}
	}
}