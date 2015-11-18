#pragma once
#include"vege.h"

class Patata:public Vege
{
protected:
	char* sort;
public:
	Patata();
	Patata(char*,char*);
	~Patata();
	void setSort(char*);
	char* getSort();
	void printPatata();
};

