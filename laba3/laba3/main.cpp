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
	Luk l("Лук", "Белый");
	Karot k("Морковка", 6);
	Patata p("Картошка", "Европрима");
	Eg eg1("Яйца", 5);
	Meat m("Мясо", 7);
	Souce s("Сырный соус");
	
	k.printKarot();
	l.printLuk();
	p.printPatata();
	eg1.printEg();
	m.printMeat();
	s.printSouce();
	l1.printLuk();
	
}
