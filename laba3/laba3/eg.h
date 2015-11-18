#pragma once
class Eg

{
	char* vid;
	int dec;
public:
	Eg(); 
	Eg(char*,int);
	~Eg();
	void setVid(char*);
	void setDec(int);
	char* getVid();
	int getDec();
	void printEg();
};