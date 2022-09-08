#include "Siv.h"

/// <summary>
/// This branch is for the single threaded version and should NEVER be rejoined to the main branch!
/// </summary>
/// <returns></returns>
int main()
{
	Siv siv;
	siv.start();

	return 0;
}