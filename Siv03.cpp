#include "Siv.h"
#include <iostream>
#include <Windows.h>

using namespace std;

long long Siv::crunch(long long primer)
{
	//rewrite #2
	//this function is now going to be multithreaded, which means all varrs need to be local so i can call this bitch 
	//multiple times in different threads.
	//the only difference being the var. Primer will eaither get 0 added to it, or 2 added to it. depending on the thread that calls this func.
	//I dont want to create and close, create and close threads repiticously. this func needs to restart and wait for a global var to be true before it continues.
	//if prime is found put it into thePrime01/02

	//gets 2 out of the way
	if (primer == 2)
	{
		return primer;
	}
	


	return primer;
}