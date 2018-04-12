/*
//It's good practice to have the order of your function definitions
//match the order of the function prototypes you created in your header
//(humans.h) file.
*/

#include "humans.h"

/*
//Remember to include the scope resolution operator (::) so that the compiler
//knows that these functions belong to your Human class instead of simply
//being 'loose' functions
*/

Human::Human() {
  age = 70;
  name = "Dennis Ritchie"; //Fun fact, this guy's the creator of C.
}

Human::Human(int newAge) {
  age = newAge;
  name = "default";
}

Human::Human(int newAge, string newName) {
  age = newAge;
  name = newName;
}

void Human::setAge(int newAge) {
  age = newAge;
}

void Human::setName(string newName) {
  name = newName;
}

int Human::getAge() const {
  return age;
}

string Human::getName() const {
  return name;
}
void Human::setHeight(int newHeight)
{
  height = newHeight;
}
int Human::getHeight() const
{
  return height;
}
void Human::birthday() {
  cout << "It's " << name << "'s ";
  cout << "birthday!\n";
  age++;
}

void Human::speak() {
  cout << "Hi my name is ";
  cout << name << endl;
  if (name == "Antonio Vanderas") {
    cout << "I created C++ back in 1979\n";
    cout << "I am " << height << " feet tall and I enjoy during my free time" << endl;
  }
}

void Human::jump(int meters) {
  cout << name << " jumped ";
  cout << meters << " meters!\n";
}
void Human::language(string idiom, string idiom2)
{
  cout << name << " Speaks ";
  cout << idiom << " and " << idiom2 << endl;
}
void Human::profession(string career, double salary)
{
  cout << name << " is a " <<career;
  cout << " and he makes $" << salary << " a year " << endl;
}
