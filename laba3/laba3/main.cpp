#include"karot.h"
#include"luk.h"
#include"patata.h"
#include"eg.h"
#include"souce.h"
#include"meat.h"
#include<iostream>
#include<Windows.h>

using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Luk l1;
	Luk l("���", "�����");
	Karot k("��������", 6);
	Patata p("��������", "���������");
	Eg eg1("����", 5);
	Meat m("����", 7);
	Souce s("������ ����");
	
	k.printKarot();
	l.printLuk();
	p.printPatata();
	eg1.printEg();
	m.printMeat();
	s.printSouce();
	l1.printLuk();
	
}
