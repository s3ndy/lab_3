#pragma once

class Vege   //glavniy class
{
protected:   //pol9 Dl9 nasledovani9
	char* name;
public: //������������, ���������� � ������
	Vege();
	Vege(char*);
	~Vege();
	void setName(char*);
	char* getName();
};