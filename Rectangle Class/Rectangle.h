class Rectangle
{
  private:
  double width;
  double length;

  public:
  void setWidth(double);
  void setLength (double);
  double getWidth() const;
  double getLength()const;
  double getArea() const;
};

// setWidth assigns a value to the width member.
 void Rectangle::setWidth(double w)
 {
   width = w;
 }
 // setLength assigns a value to the length member.
 void Rectangle::setLength(double len)
 {
   length = len;
 }
 // 
 double Rectangle::getWidth() const
 {
   return width;
 }
 //getLenght returns the value in the lenght member.
 double Rectangle::getLength()const
 {
   return length;
 }
 // getArea returns the product of the width times the lenght
 double Rectangle::getArea()const
 {
   return length * width;
 }
 
