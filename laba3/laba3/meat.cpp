#include"meat.h"
#include<iostream>

using namespace std;

Meat::Meat() //���� �� �� �������� ��������� ����������� ������������� ������� �� ���������
{
	vid = "";
	kg = 2;
}

Meat::Meat(char* vid, int kg)
{
	this->vid = vid;
	this->kg = kg;
}

Meat::~Meat()
{

}

void Meat::setVid(char* vid)
{
	this->vid = vid;
}
void Meat::setKg(int kg)
{
	this->kg = kg;
}

char* Meat::getVid()
{
	return vid;
}
int Meat::getKg()
{
	return kg;
}

void Meat::printMeat()
{
	cout << "�������� ��������: " << vid << endl;
	cout << "����������: " << kg << endl;
}