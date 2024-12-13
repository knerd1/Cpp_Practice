#include <iostream>

using namespace std;

class bankAccount {
private:
  string accountNumber;
  double balance;

public:
  bankAccount(string accNum, double initialBalance) {
    accountNumber = accNum;
    balance = initialBalance;
  }
  // getter method to get balance
  double getbalance() { return balance; }

  // method to deposit money
  void deposit(double amount) {
    if (amount > 0) {
      balance += amount;
      cout << "deposited: " << amount << endl;
    } else {
      cout << "Invalid deposit amount" << endl;
    }
  }
  // method to withdraw amount
  void withDraw(double amount) {
    if (amount > 0 && amount <= balance) {
      balance -= amount;
      cout << "withdrawn: " << amount << endl;
    } else {
      cout << "Invalid Withdraw Amount";
    }
  }
};

int main() {
  bankAccount myAccount("327327732", 8006);

  cout << "Current Balance: " << myAccount.getbalance() << endl;

  myAccount.deposit(1210);
  cout << "Current Balance after deposit: " << myAccount.getbalance() << endl;

  myAccount.withDraw(567);
  cout << "Current Balance after withdrawn: " << myAccount.getbalance() << endl;
  return 0;
}
