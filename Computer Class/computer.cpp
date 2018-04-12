#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
#include "computer.cc"

int main()
{
  computer cp;
  cp.setBrand("HP");
  cp.setMemory(35);
  cp.setColor("Black");
  cp.setOperatingS("Linux");
  cout << "Your computer is " << cp.getBrand() << "." << endl;
  cout << "The color of your computer is " << cp.getColor() << endl;
  cout << "Your computer has a " << cp.getOperatingS() << " operating system" << endl;
  cout << "This computer has " << cp.getMemory() << " RAM of memory" << endl;
  return 0;
}
