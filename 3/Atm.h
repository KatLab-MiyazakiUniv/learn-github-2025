#include <string.h>

class ATM
{
public:
      ATM(int init_bal);
      void deposit(int amount);
      void withdraw(int amount);
      int getBalance() const;

private:
      int balance;
};