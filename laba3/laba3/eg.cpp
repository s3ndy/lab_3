#include"eg.h"
#include<iostream>

using namespace std;

Eg::Eg() //если на не передали параметры конструктор устанавливает заданые по умолчанию
{
	vid = "";
	dec = 2;
}

Eg::Eg(char* vid, int dec) 
{
	this->vid = vid;
	this->dec = dec;
}

Eg::~Eg()
{

}

void Eg::setVid(char* vid)
{
	this->vid = vid;
}
void Eg::setDec(int dec)
{
	this->dec = dec;
}

char* Eg::getVid()
{
	return vid;
}
int Eg::getDec()
{
	return dec;
}

void Eg::printEg()
{
	cout << "Название продукта: " << vid << endl;
	cout << "Десятки: " << dec << endl;
}