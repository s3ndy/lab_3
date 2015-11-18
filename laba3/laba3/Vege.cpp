#include"vege.h"

using namespace std;

Vege::Vege()
{
	name = "";
}

Vege::Vege(char* name)
{
	this->name = name;
}

Vege::~Vege()
{

}

void Vege::setName(char* name)
{
	this->name = name;
}

char* Vege::getName()
{
	return name;
}