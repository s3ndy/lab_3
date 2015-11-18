#include"souce.h"
#include<iostream>

using namespace std;

Souce::Souce() //если на не передали параметры конструктор устанавливает заданые по умолчанию
{
	vid = "";
}

Souce::Souce(char* vid)
{
	this->vid = vid;
}

Souce::~Souce()
{

}

void Souce::setVid(char* vid)
{
	this->vid = vid;
}

char* Souce::getVid()
{
	return vid;
}

void Souce::printSouce()
{
	cout << "Название продукта: " << vid << endl;
}