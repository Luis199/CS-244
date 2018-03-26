//Luis Casado
// 03 - 26 -2018
// Dr. Austin
//CS 244
/*
This program that takes an integer array and prints out the sum of the even numbers. The array should have 15 integers.
*/

using namespace std;
#include <iostream>
#include <cmath>

int main()
{
  int z = 1;
  int array[15];
  int sum = 0;
  for(int i = 0; i < 15; i++)
  {
    cout << z++ << " Please enter a number: ";
    cin >>array[i];
    if(array[i] % 2 == 0)
    {
      sum += array[i];
    }
  }
  cout << sum << endl;
  return 0;
}
