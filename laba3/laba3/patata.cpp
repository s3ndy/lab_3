#include"Patata.h"
#include<iostream>

using namespace std;

Patata::Patata() //если на не передали параметры конструктор устанавливает заданые по умолчанию
{
	sort = "";
}

Patata::Patata(char* name, char* sort) :Vege(name)// this указатель на обьект
{
	this->sort = sort;
}

Patata::~Patata()
{

}

void Patata::setSort(char* sort)
{
	this->sort = sort;
}

char* Patata::getSort()
{
	return sort;
}

void Patata::printPatata()
{
	cout << "Ќазвание овоща: " << name << endl;
	cout << "—орт: " << sort << endl;
}