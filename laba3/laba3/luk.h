#pragma once
#include"vege.h"

class Luk :public Vege  //производный класс от веги
{
	char* color;
public:
	Luk();
	Luk(char*,char*);
	~Luk();
	void setColor(char*);
	char* getColor();
	void printLuk();
};