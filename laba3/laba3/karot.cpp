#include"karot.h"
#include<iostream>

using namespace std;

Karot::Karot() //���� �� �� �������� ��������� ����������� ������������� ������� �� ���������
{
	period = 2;
}

Karot::Karot(char* name, int period) :Vege(name)// this ��������� �� ������
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
	cout << "�������� �����: " << name << endl;
	cout << "������: " << period << endl;
}