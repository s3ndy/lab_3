#include"souce.h"
#include<iostream>

using namespace std;

Souce::Souce() //���� �� �� �������� ��������� ����������� ������������� ������� �� ���������
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
	cout << "�������� ��������: " << vid << endl;
}