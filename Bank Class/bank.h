class Bank_account
{
  private:
    double pin;
    double balance;
    double acccount_type;
    double acccount_number;

  public:
    bool access();
    double deposit(double);
    double withdrawal(double);
    double get_balance();
    double set_pin();
    void total_balance(double);
    double over_draft();

};
