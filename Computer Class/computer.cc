#include "computer.h"

void computer::setColor(string c)
{
  color = c;
}
void computer::setBrand(string b)
{
  brand = b;
}
void computer::setMemory(int num)
{
  memory = num;
}
string computer::getColor() const
{
  return color;
}
string computer::getBrand() const
{
  return brand;
}
double computer::getMemory() const
{
  return memory;
}
void computer::setOperatingS(string s)
{
  operatingsystem = s;
}
string computer::getOperatingS() const
{
  return operatingsystem;
}
