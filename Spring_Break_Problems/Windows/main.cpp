// Luis Casado
// 04 - 05 - 2018
// CS 244
//main part
#include <iostream>
#include "windows.h"
using namespace std;

int main()
{
  windows computer;

  computer.open();
  cout << computer.open() << endl;
  cout << computer.turnon() << endl;


  return 0;
}
