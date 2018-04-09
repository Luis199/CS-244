#include "Solar.h"
// Setters
void System::setdiameter(double d)
{
  diameter = d;
}
void System::setweight(double w)
{
  weight = w;
}
void System::setgravity(double g)
{
  gravity = g;
}
void System::setradius(double r)
{
  radius = r;
}
void System::setdistance(double ds)
{
  distance = ds;
}

//getters
double System::getdiameter()
{
  return diameter;
}
double System::getweight()
{
  return weight;
}
double System::getgravity()
{
  return gravity;
}
double System::getradius()
{
  return radius;
}
double System::getdistance()
{
  return distance;
}
