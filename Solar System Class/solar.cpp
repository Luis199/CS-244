// Luis Casado
// CS 244
// Assignment 3 (Spring Break)
// Dr. Austin

using namespace std;
#include <iostream>
#include "Solar.cc"

int main ()
{
  //Earth object
  System earth;
  earth.setdiameter(7917.5);
  earth.setgravity(9.8);
  earth.setradius(3959);
  earth.setdistance(92.96);
  cout << "The diameter of the earth is: "<< earth.getdiameter()<< " miles\n";
  cout << "The radius of the earth is approximatley "<<earth.getradius() << " miles\n";
  cout << "The distance of the between the earth and the sun is around " << earth.getdistance() << " million miles\n";
  cout << "The acceleration of gravity on earth is: " <<earth.getgravity() << " meter per second square\n" << endl;
//Mercury object
  System mercury;
  mercury.setdiameter(3032);
  mercury.setgravity(3.59);
  mercury.setradius(1516);
  mercury.setdistance(35.98);

  cout << "The diameter of the mercury is: "<< mercury.getdiameter()<< " miles" << endl;
  cout << "The radius of the mercury is approximatley "<< mercury.getradius() << " miles\n";
  cout << "The distance of the between mercury and the sun is around " << mercury.getdistance() << " million miles\n";
  cout << "The acceleration of gravity on mercury is: " <<mercury.getgravity() << " meter per second square\n" << endl;
//Mars object
System mars;
mars.setdiameter(4212);
mars.setgravity(3.711);
mars.setradius(2106);
mars.setdistance(141.6);
cout << "The diameter of the mars is: "<< mars.getdiameter()<< " miles" << endl;
cout << "The radius of the mars is approximatley "<< mars.getradius() << " miles\n";
cout << "The distance of the between mars and the sun is around " << mars.getdistance() << " million miles\n";
cout << "The acceleration of gravity on mars is: " <<mars.getgravity() << " meter per second square\n" << endl;
  return 0;
}
