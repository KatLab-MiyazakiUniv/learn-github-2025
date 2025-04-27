#include "Atm.h"

ATM::ATM(int init_balance)
{
      if (init_balance >= 0)
      {
            balance = init_balance;
      }
      else
      {
            balance = 0;
      }
}

void ATM::deposit(int amount)
{
      balance += amount;
}

void ATM::withdraw(int amount)
{
      balance -= amount;
}

int ATM::getBalance() const
{
      return balance;
}
