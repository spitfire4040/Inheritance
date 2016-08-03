#include <string>

using namespace std;

class Animal
{
	public:
		Animal();
		Animal(string newName, string newColor, char newGender, int newAge);
		Animal(const Animal& orig);
		~Animal();

		string getName();
		string getColor();
		char getGender();
		int getAge();
		void setName(string newName);
		void setColor(string newColor);
		void setGender(char newGender);
		void setAge(int newAge);

	private:
		string name;
		string color;
		char gender;
		int age;
};