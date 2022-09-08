#pragma once
class Siv
{
public:
	void start();
	long long crunch(long long primer);

private:
	bool check01();
	bool check02();
	bool get();
	bool save();

	bool yes = true;
	bool ignore = false;
	bool life = true;
	int delay = 0;
	int lineCountGet = 0;
	int lineVal = 0;
	int getReturn = 0;
	int cruVar = 0;
	int getVar = 0;
	int x = 1;
	int y = 1;
	
	long long Primer = 0;//not available to crunch() please
	long long PrimerVeri = 0;
	//int PrimerVeri02 = 0;
	long long Primeing = 0;
	long long PlaceHolder = 0;
	long lineCount = 0;
	long lineCountVeri = 0;
	//int lineCountVeri02 = 0;

	bool restart = true;
};

