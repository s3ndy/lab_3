#pragma once
#include"vege.h"

using namespace std;

class Karot :public Vege //����������� ����� �� ����
{
	int period;
public:
	Karot();
	Karot(char*,int);
	~Karot();
	void setPeriod(int);
	int getPeriod();
	void printKarot();
};