#include <string.h>

class ATM
{
public:
      ATM(int init_bal);
      void deposit(int amount, char *buffer);
      void withdraw(int amount, char *buffer);
      int getBalance() const;

private:
      int balance;
};