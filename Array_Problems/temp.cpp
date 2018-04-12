// Luis Casado
// CS 244
// Dr. Austin
// 03 - 25 - 2018

// This program checks an array of temperatures and prints out the number of temperatures greater than 70
using namespace std;
#include <iostream>
#include <cmath>

int main()
{
  int temp[14];
  int sum = 0;
  int z = 1;
  for (int i = 0; i < 14; i++)
  {
    cout << z++ <<" Please enter the temperature in fahrenheit: ";
    cin >> temp[i];
    if(temp [i] > 70)
    {
      sum += 1;
    }
  }
  cout << "There are " << sum <<" tempeatures greater than 70 degrees fahrenheit" << endl;


  return 0;
}
