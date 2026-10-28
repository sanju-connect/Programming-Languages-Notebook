#include <iostream>
using namespace std;

class Account {
  private:
  int balance = 0;

  public:
    void deposit(int amount) {
      if(amount > 0) {
        balance += amount;
      }
    }

    int getBalance() {
      return balance;
    }
};

int main() {

  Account a;

  a.deposit(100);
  cout << a.getBalance();
  return 0;
}
