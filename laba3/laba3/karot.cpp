#include"karot.h"
#include<iostream>

using namespace std;

Karot::Karot() //если на не передали параметры конструктор устанавливает заданые по умолчанию
{
	period = 2;
}

Karot::Karot(char* name, int period) :Vege(name)// this указатель на обьект
{
	this->period = period;
}

Karot::~Karot()
{

}

void Karot::setPeriod(int period)
{
	this->period = period;
}

int Karot::getPeriod()
{
	return period;
}

void Karot::printKarot()
{
	cout << "Ќазвание овоща: " << name << endl;
	cout << "ѕериод: " << period << endl;
}