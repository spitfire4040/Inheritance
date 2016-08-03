#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Animal.h"

using namespace std;

int main(int argc, char** argv)
{
	Animal dog;
	dog.setName("Spot");
	dog.setColor("Black");
	dog.setGender('M');
	dog.setAge(10);

	cout << "Name: " << dog.getName() << endl;
	cout << "Color: " << dog.getColor() << endl;
	cout << "Gender: " << dog.getGender() << endl;
	cout << "Age: " << dog.getAge() << endl;
	
	return 0;
}