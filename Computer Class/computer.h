class computer
{
private:
  string brand;
  int memory;
  string color;
  string operatingsystem;

public:
  void setColor(string c);
  void setBrand(string b);
  void setMemory(int num);
  void setOperatingS(string s);
  string getColor() const;
  string getBrand() const;
  string getOperatingS() const;
  double getMemory() const;


};
