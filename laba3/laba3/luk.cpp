#include"luk.h"
#include<iostream>

using namespace std;

Luk::Luk()
{
	color = "�����";
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
	cout <<"�������� �����: "<< name << endl;
	cout <<"����: "<< color << endl;
}