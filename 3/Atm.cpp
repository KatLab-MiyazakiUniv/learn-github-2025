#include "Atm.h"

ATM::ATM(int init_bal)
{
      if (init_bal >= 0)
      {
            balance = init_bal;
      }
      else
      {
            balance = 0;
      }
}

void ATM::deposit(int amount)
{
      if (amount > 0)
      {
            balance += amount;
      }
}

void ATM::withdraw(int amount)
{
      if (amount > 0 && amount <= balance)
      {
            balance -= amount;
      }
}

int ATM::getBalance() const
{
      return balance;
}
