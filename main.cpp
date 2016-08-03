#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Animal.h"

using namespace std;

int main(int argc, char** argv)
{
	Dog dog;
	dog.setName("Spot");
	dog.setColor("Black");
	dog.setGender('M');
	dog.setAge(10);

	cout << endl;

	cout << "Name: " << dog.getName() << endl;
	cout << "Color: " << dog.getColor() << endl;
	cout << "Gender: " << dog.getGender() << endl;
	cout << "Age: " << dog.getAge() << endl;
	dog.speak();

	cout << endl;

	Cat cat;
	cat.setName("Tabby");
	cat.setColor("White");
	cat.setGender('F');
	cat.setAge(3);

	cout << "Name: " << cat.getName() << endl;
	cout << "Color: " << cat.getColor() << endl;
	cout << "Gender: " << cat.getGender() << endl;
	cout << "Age: " << cat.getAge() << endl;
	cat.speak();
	
	return 0;
}