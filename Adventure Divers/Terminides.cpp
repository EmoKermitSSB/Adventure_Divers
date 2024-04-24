#include "Terminides.h"
#include <iostream>

Terminides::Terminides()
{
	setName("Charognard");
	setHealth(10);
	setDescription("Un Terminides tres normal mais tres mechant quand meme.");
	setpower(30);

}
Terminides::~Terminides()
{
}

std::string Terminides::getName() {
	return name;
}

void Terminides::setName(std::string n)
{
	for (int i = 0; i < n.size(); i++) {
		if (n[i] == 32) {

		}
		else if (!isalpha(n[i])) {
			name = "-1";
			return;
		}
	}
	if (n.empty()) {
		name = "-1";
		return;
	}
	name = n;
}

int Terminides::getHealth()
{
	return health;
}

void Terminides::setHealth(int h)
{
	if (h < 0) {
		health = 0;
	}
	else {
		health = h;
	}
}


std::string Terminides::getDescription()
{
	return description;
}

void Terminides::setDescription(std::string d)
{
	description = d;
}

int Terminides::getpower()
{
	return power;
}

void Terminides::setpower(int p)
{
	power = p;
}

void Terminides::attack(Terminides& target)
{
	target.setHealth(target.getHealth() - getpower());

}


void Terminides::receiveDamage(int attackValue)
{
	setHealth(getHealth() - attackValue);
}
