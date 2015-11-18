#include"Patata.h"
#include<iostream>

using namespace std;

Patata::Patata() //���� �� �� �������� ��������� ����������� ������������� ������� �� ���������
{
	sort = "";
}

Patata::Patata(char* name, char* sort) :Vege(name)// this ��������� �� ������
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
	cout << "�������� �����: " << name << endl;
	cout << "����: " << sort << endl;
}