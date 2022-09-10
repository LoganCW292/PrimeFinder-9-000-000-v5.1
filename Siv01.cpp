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
bool done03 = false;
bool done04 = false;
bool done05 = false;
bool done06 = false;
bool done07 = false;
bool done08 = false;
bool prime01 = false;
bool prime02 = false;
bool prime03 = false;
bool prime04 = false;
bool prime05 = false;
bool prime06 = false;
bool prime07 = false;
bool prime08 = false;
bool go01 = true;
bool go02 = true;
bool go03 = true;
bool go04 = true;
bool go05 = true;
bool go06 = true;
bool go07 = true;
bool go08 = true;
long long primeing01 = 0;
long long primeing02 = 0;
long long primeing03 = 0;
long long primeing04 = 0;
long long primeing05 = 0;
long long primeing06 = 0;
long long primeing07 = 0;
long long primeing08 = 0;
long long thePrime01 = 0;
long long thePrime02 = 0;
long long thePrime03 = 0;
long long thePrime04 = 0;
long long thePrime05 = 0;
long long thePrime06 = 0;
long long thePrime07 = 0;
long long thePrime08 = 0;

void s01()//this is in another thread
{
	//cout << "thread one started" << endl;
	bool restart = true;
	Siv siv;
	while (restart)
	{
		//cout << "thread one" << endl;
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
	//cout << "thread two started" << endl;
	bool restart = true;
	Siv siv;
	while (restart)
	{
		//cout << "thread two" << endl;
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

void s03()//dido
{
	//cout << "thread three started" << endl;
	bool restart = true;
	Siv siv;
	while (restart)
	{
		//cout << "thread three" << endl;
		while (!(go03))
		{
			//waits very fast
		}
		go03 = false;
		thePrime03 = siv.crunch(primeing03);
		if (thePrime03 > 0)
		{

			prime03 = true;
			done03 = true;
		}
		else
		{
			prime03 = false;
			done03 = true;
		}
	}
}

void s04()//dido
{
	//cout << "thread four started" << endl;
	bool restart = true;
	Siv siv;
	while (restart)
	{
		//cout << "thread four" << endl;
		while (!(go04))
		{
			//waits very fast
		}
		go04 = false;
		thePrime04 = siv.crunch(primeing04);
		if (thePrime04 > 0)
		{

			prime04 = true;
			done04 = true;
		}
		else
		{
			prime04 = false;
			done04 = true;
		}
	}
}

void s05()//dido
{
	//cout << "thread four started" << endl;
	bool restart = true;
	Siv siv;
	while (restart)
	{
		//cout << "thread four" << endl;
		while (!(go05))
		{
			//waits very fast
		}
		go05 = false;
		thePrime05 = siv.crunch(primeing05);
		if (thePrime05 > 0)
		{

			prime05 = true;
			done05 = true;
		}
		else
		{
			prime05 = false;
			done05 = true;
		}
	}
}

void s06()//dido
{
	//cout << "thread four started" << endl;
	bool restart = true;
	Siv siv;
	while (restart)
	{
		//cout << "thread four" << endl;
		while (!(go06))
		{
			//waits very fast
		}
		go06 = false;
		thePrime06 = siv.crunch(primeing06);
		if (thePrime06 > 0)
		{

			prime06 = true;
			done06 = true;
		}
		else
		{
			prime06 = false;
			done06 = true;
		}
	}
}

void s07()//dido
{
	//cout << "thread four started" << endl;
	bool restart = true;
	Siv siv;
	while (restart)
	{
		//cout << "thread four" << endl;
		while (!(go07))
		{
			//waits very fast
		}
		go07 = false;
		thePrime07 = siv.crunch(primeing07);
		if (thePrime07 > 0)
		{

			prime07 = true;
			done07 = true;
		}
		else
		{
			prime07 = false;
			done07 = true;
		}
	}
}

void s08()//dido
{
	//cout << "thread four started" << endl;
	bool restart = true;
	Siv siv;
	while (restart)
	{
		//cout << "thread four" << endl;
		while (!(go08))
		{
			//waits very fast
		}
		go08 = false;
		thePrime08 = siv.crunch(primeing08);
		if (thePrime08 > 0)
		{

			prime08 = true;
			done08 = true;
		}
		else
		{
			prime08 = false;
			done08 = true;
		}
	}
}

void Siv::start()
{
	cout << "PrimeFinder 9,000,000 v5.20 multi-threaded" << endl << endl << "Created by Logan Worthington." << endl << endl;
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
			delay = 1600;
			break;
		}
	}

	check01();
	if (Primer >= 3)
	{
		primeing01 = Primer + 2;
		primeing02 = Primer + 4;
		primeing03 = Primer + 6;
		primeing04 = Primer + 8;
		primeing05 = Primer + 10;
		primeing06 = Primer + 12;
		primeing07 = Primer + 14;
		primeing08 = Primer + 16;
	}
	else
	{
		primeing01 = Primer + 2;
		primeing02 = Primer + 3;
		primeing03 = Primer + 5;
		primeing04 = Primer + 7;
		primeing05 = Primer + 9;
		primeing06 = Primer + 11;
		primeing07 = Primer + 13;
		primeing08 = Primer + 15;
	}

	thread one(s01);
	thread two(s02);
	thread three(s03);
	thread four(s04);
	thread five(s05);
	thread six(s06);
	thread seven(s07);
	thread eight(s08);
	save();
}

bool Siv::save()
{
	while (true)//you dont stop till i say so, Bitch!
	{
		while (true)
		{
			Sleep(delay);
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
				if (check02())
				{
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
				else
				{
					check01();
					if (Primer >= 3)
					{
						primeing01 = Primer + 2;
						primeing02 = Primer + 4;
						primeing03 = Primer + 6;
						primeing04 = Primer + 8;
						primeing05 = Primer + 10;
						primeing06 = Primer + 12;
						primeing07 = Primer + 14;
						primeing08 = Primer + 16;
					}
					else
					{
						primeing01 = Primer + 1;
						primeing02 = Primer + 3;
						primeing03 = Primer + 5;
						primeing04 = Primer + 7;
						primeing05 = Primer + 9;
						primeing06 = Primer + 11;
						primeing07 = Primer + 13;
						primeing08 = Primer + 15;
					}
					go01 = true;
					go02 = true;
					go03 = true;
					go04 = true;
					go05 = true;
					go06 = true;
					go07 = true;
					go08 = true;
					break;
				}
				check01();
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
				if (check02())
				{
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
				else
				{
					check01();
					if (Primer >= 3)
					{
						primeing01 = Primer + 2;
						primeing02 = Primer + 4;
						primeing03 = Primer + 6;
						primeing04 = Primer + 8;
						primeing05 = Primer + 10;
						primeing06 = Primer + 12;
						primeing07 = Primer + 14;
						primeing08 = Primer + 16;
					}
					else
					{
						primeing01 = Primer + 1;
						primeing02 = Primer + 3;
						primeing03 = Primer + 5;
						primeing04 = Primer + 7;
						primeing05 = Primer + 9;
						primeing06 = Primer + 11;
						primeing07 = Primer + 13;
						primeing08 = Primer + 15;
					}
					go01 = true;
					go02 = true;
					go03 = true;
					go04 = true;
					go05 = true;
					go06 = true;
					go07 = true;
					go08 = true;
					break;
				}
				check01();
			}

			while (!(done03))
			{
				//waits
			}
			done03 = false;

			if (prime03)
			{
				prime03 = false;
				cout << thePrime03 << endl;
				if (check02())
				{
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
					file << thePrime03 << endl;
					file.close();
				}
				else
				{
					check01();
					if (Primer >= 3)
					{
						primeing01 = Primer + 2;
						primeing02 = Primer + 4;
						primeing03 = Primer + 6;
						primeing04 = Primer + 8;
						primeing05 = Primer + 10;
						primeing06 = Primer + 12;
						primeing07 = Primer + 14;
						primeing08 = Primer + 16;
					}
					else
					{
						primeing01 = Primer + 1;
						primeing02 = Primer + 3;
						primeing03 = Primer + 5;
						primeing04 = Primer + 7;
						primeing05 = Primer + 9;
						primeing06 = Primer + 11;
						primeing07 = Primer + 13;
						primeing08 = Primer + 15;
					}
					go01 = true;
					go02 = true;
					go03 = true;
					go04 = true;
					go05 = true;
					go06 = true;
					go07 = true;
					go08 = true;
					break;
				}
				check01();
			}

			while (!(done04))
			{
				//waits
			}
			done04 = false;

			if (prime04)
			{
				prime04 = false;
				cout << thePrime04 << endl;
				if (check02())
				{
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
					file << thePrime04 << endl;
					file.close();
				}
				else
				{
					check01();
					if (Primer >= 3)
					{
						primeing01 = Primer + 2;
						primeing02 = Primer + 4;
						primeing03 = Primer + 6;
						primeing04 = Primer + 8;
						primeing05 = Primer + 10;
						primeing06 = Primer + 12;
						primeing07 = Primer + 14;
						primeing08 = Primer + 16;
					}
					else
					{
						primeing01 = Primer + 1;
						primeing02 = Primer + 3;
						primeing03 = Primer + 5;
						primeing04 = Primer + 7;
						primeing05 = Primer + 9;
						primeing06 = Primer + 11;
						primeing07 = Primer + 13;
						primeing08 = Primer + 15;
					}
					go01 = true;
					go02 = true;
					go03 = true;
					go04 = true;
					go05 = true;
					go06 = true;
					go07 = true;
					go08 = true;
					break;
				}
				check01();
			}

			while (!(done05))
			{
				//waits
			}
			done05 = false;

			if (prime05)
			{
				prime05 = false;
				cout << thePrime05 << endl;
				if (check02())
				{
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
					file << thePrime05 << endl;
					file.close();
				}
				else
				{
					check01();
					if (Primer >= 3)
					{
						primeing01 = Primer + 2;
						primeing02 = Primer + 4;
						primeing03 = Primer + 6;
						primeing04 = Primer + 8;
						primeing05 = Primer + 10;
						primeing06 = Primer + 12;
						primeing07 = Primer + 14;
						primeing08 = Primer + 16;
					}
					else
					{
						primeing01 = Primer + 1;
						primeing02 = Primer + 3;
						primeing03 = Primer + 5;
						primeing04 = Primer + 7;
						primeing05 = Primer + 9;
						primeing06 = Primer + 11;
						primeing07 = Primer + 13;
						primeing08 = Primer + 15;
					}
					go01 = true;
					go02 = true;
					go03 = true;
					go04 = true;
					go05 = true;
					go06 = true;
					go07 = true;
					go08 = true;
					break;
				}
				check01();
			}

			while (!(done06))
			{
				//waits
			}
			done06 = false;

			if (prime06)
			{
				prime06 = false;
				cout << thePrime06 << endl;
				if (check02())
				{
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
					file << thePrime06 << endl;
					file.close();
				}
				else
				{
					check01();
					if (Primer >= 3)
					{
						primeing01 = Primer + 2;
						primeing02 = Primer + 4;
						primeing03 = Primer + 6;
						primeing04 = Primer + 8;
						primeing05 = Primer + 10;
						primeing06 = Primer + 12;
						primeing07 = Primer + 14;
						primeing08 = Primer + 16;
					}
					else
					{
						primeing01 = Primer + 1;
						primeing02 = Primer + 3;
						primeing03 = Primer + 5;
						primeing04 = Primer + 7;
						primeing05 = Primer + 9;
						primeing06 = Primer + 11;
						primeing07 = Primer + 13;
						primeing08 = Primer + 15;
					}
					go01 = true;
					go02 = true;
					go03 = true;
					go04 = true;
					go05 = true;
					go06 = true;
					go07 = true;
					go08 = true;
					break;
				}
				check01();
			}

			while (!(done07))
			{
				//waits
			}
			done07 = false;

			if (prime07)
			{
				prime07 = false;
				cout << thePrime07 << endl;
				if (check02())
				{
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
					file << thePrime07 << endl;
					file.close();
				}
				else
				{
					check01();
					if (Primer >= 3)
					{
						primeing01 = Primer + 2;
						primeing02 = Primer + 4;
						primeing03 = Primer + 6;
						primeing04 = Primer + 8;
						primeing05 = Primer + 10;
						primeing06 = Primer + 12;
						primeing07 = Primer + 14;
						primeing08 = Primer + 16;
					}
					else
					{
						primeing01 = Primer + 1;
						primeing02 = Primer + 3;
						primeing03 = Primer + 5;
						primeing04 = Primer + 7;
						primeing05 = Primer + 9;
						primeing06 = Primer + 11;
						primeing07 = Primer + 13;
						primeing08 = Primer + 15;
					}
					go01 = true;
					go02 = true;
					go03 = true;
					go04 = true;
					go05 = true;
					go06 = true;
					go07 = true;
					go08 = true;
					break;
				}
				check01();
			}

			while (!(done08))
			{
				//waits
			}
			done08 = false;

			if (prime08)
			{
				prime08 = false;
				cout << thePrime08 << endl;
				if (check02())
				{
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
					file << thePrime08 << endl;
					file.close();
				}
				else
				{
					check01();
					if (Primer >= 3)
					{
						primeing01 = Primer + 2;
						primeing02 = Primer + 4;
						primeing03 = Primer + 6;
						primeing04 = Primer + 8;
						primeing05 = Primer + 10;
						primeing06 = Primer + 12;
						primeing07 = Primer + 14;
						primeing08 = Primer + 16;
					}
					else
					{
						primeing01 = Primer + 1;
						primeing02 = Primer + 3;
						primeing03 = Primer + 5;
						primeing04 = Primer + 7;
						primeing05 = Primer + 9;
						primeing06 = Primer + 11;
						primeing07 = Primer + 13;
						primeing08 = Primer + 15;
					}
					go01 = true;
					go02 = true;
					go03 = true;
					go04 = true;
					go05 = true;
					go06 = true;
					go07 = true;
					go08 = true;
					break;
				}
				check01();
			}

			primeing01 = primeing08 + 2;
			primeing02 = primeing08 + 4;
			primeing03 = primeing08 + 6;
			primeing04 = primeing08 + 8;
			primeing05 = primeing08 + 10;
			primeing06 = primeing08 + 12;
			primeing07 = primeing08 + 14;
			primeing08 = primeing08 + 16;

			go01 = true;
			go02 = true;
			go03 = true;
			go04 = true;
			go05 = true;
			go06 = true;
			go07 = true;
			go08 = true;
		}
	}
}