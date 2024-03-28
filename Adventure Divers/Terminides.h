#pragma once
#include <iostream>

enum class Element {
	normal
};

class Terminides
{
private:
	std::string name;
	int health;
	std::string description;
	int power;

public:
	Terminides();

	~Terminides();

	std::string getName();
	void setName(std::string n);

	int getHealth();
	void setHealth(int h);

	std::string getDescription();
	void setDescription(std::string d);

	int getpower();
	void setpower(int p);

	void attack(Terminides target);


};