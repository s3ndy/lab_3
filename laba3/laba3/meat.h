#pragma once
class Meat

{
	char* vid;
	int kg;
public:
	Meat();
	Meat(char*, int);
	~Meat();
	void setVid(char*);
	void setKg(int);
	char* getVid();
	int getKg();
	void printMeat();
};