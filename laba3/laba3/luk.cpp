#include"luk.h"
#include<iostream>

using namespace std;

Luk::Luk()
{
	color = "белый";
}

Luk::Luk(char* name, char* color) :Vege(name)
{
	this->color = color;
}

Luk::~Luk()
{

}

void Luk::setColor(char* color)
{
	this->color = color;
}

char* Luk::getColor()
{
	return color;
}

void Luk::printLuk()
{
	cout <<"Название овоща: "<< name << endl;
	cout <<"Цвет: "<< color << endl;
}