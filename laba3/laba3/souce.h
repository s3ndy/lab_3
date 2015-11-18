#pragma once
class Souce

{
	char* vid;
public:
	Souce();
	Souce(char*);
	~Souce();
	void setVid(char* );
	char* getVid();
	void printSouce();
};