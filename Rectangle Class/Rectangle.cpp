#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
  Rectangle box;
  double rectWidth;
  double rectLength;

  // Get the rectangle's width and the length from the user.
  cout << "This program will calculate the area of a \n";
  cerr << "rectangle. What is the width? ";
  cin >> rectWidth;
  cout << "What is the lenght? ";
  cin >> rectLength;

  // Store the width and lenght of the rectangle
  // in the box object
  box.setWidth(rectWidth);
  box.setLength(rectLength);

  // Display the rectangle's data.
  cerr << "Below is the rectangle's data: \n";
  cerr << "Width: " << box.getWidth() << endl;
  cerr << "Length: " << box.getLength() << endl;
  cerr << "Area: " << box.getArea() << endl;
  return 0;
}
