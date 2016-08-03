#include <cstdlib>
#include <string>
#include "Animal.h"

using namespace std;

Animal::Animal()
{
	name = "no name";
	color = "no color";
	gender = 'x';
	age = 0;
}

Animal::Animal(string newName, string newColor, char newGender, int newAge)
{
	this->name = newName;
	this->color = newColor;
	this->gender = newGender;
	this->age = newAge;
}

Animal::Animal(const Animal& orig){}

Animal::~Animal(){}

string Animal::getName()
{
	return name;
}

string Animal::getColor()
{
	return color;
}

char Animal::getGender()
{
	return gender;
}

int Animal::getAge()
{
	return age;
}

void Animal::setName(string newName)
{
	name = newName;
}

void Animal::setColor(string newColor)
{
	color = newColor;
}

void Animal::setGender(char newGender)
{
	gender = newGender;
}

void Animal::setAge(int newAge)
{
	age = newAge;
}