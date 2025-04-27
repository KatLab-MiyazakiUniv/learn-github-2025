class ATM
{
public:
      ATM(int init_balance);
      void deposit(int amount);
      void withdraw(int amount);
      int getBalance() const;

private:
      int balance;
};
