#include "ATM.h"

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

void ATM::deposit(int amount, char *buffer)
{
      if (amount > 0)
      {
            balance += amount;
            strcpy(buffer, "Deposit successful.");
      }
      else
      {
            strcpy(buffer, "Deposit failed.");
      }
}

void ATM::withdraw(int amount, char *buffer)
{
      if (amount > 0 && amount <= balance)
      {
            balance -= amount;
            strcpy(buffer, "Withdrawal successful.");
      }
      else
      {
            strcpy(buffer, "Withdrawal failed.");
      }
}

int ATM::getBalance() const
{
      return balance;
}
