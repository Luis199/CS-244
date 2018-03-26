// Luis Casado
// CS 244
// 03 - 25 - 2018
// Dr. Austin

/*
This programs alculates the GPA from a list of grades.
A=4, B=3, C=2, D=1, F=0 The numeric grades are stored in an array of size 10
– representing two semesters and print out the GPA.
*/
using namespace std;
#include <iostream>
#include <cmath>
#include <cassert>

int main()
{
  int n;
  int size = 10;
  int grades[size];
  double gpa;
  int sum;
  int z = 1;


  for (int i = 0; i < size; i++)
  {
    cout << ". Enter grade "<< z++ <<": ";
    cin >> grades[i];
    sum += grades[i];
  }
  gpa = sum / size;
  if (gpa == 4)
  {
    cout << "The GPA for the Spring and fall is =  " << gpa << " which is equivalent to an A\n";
  }
  if(gpa == 3)
  {
    cout << "The GPA for the Spring and fall is =  " << gpa << " which is equivalent to a B\n";
  }
  if (gpa == 2)
  {
    cout << "The GPA for the Spring and fall is =  " << gpa << " which is equivalent to a C\n";
  }
  if (gpa == 1)
  {
    cout << "The GPA for the Spring and fall is =  " << gpa << " which is equivalent to a D\n";
  }

  return 0;
}
