#include <iostream>
#include <string>

using namespace std;

class Tea {
public:
  virtual void ingredient() = 0; // pure virtual function
  virtual void brew() = 0;       // pure virtual function
  virtual void serve() = 0;      // pure virtual function
                                 //
  void makeTea() {
    ingredient();
    brew();
    serve();
  }
};

// derived clase

class GreenTea : public Tea {
  void ingredient() override { // This override keyword will redefine the pure
                               // virtual function
    cout << "green leaves and water" << endl;
  }
  void brew() override { cout << "Green Tea Brewed" << endl; }
  void serve() override { cout << "Green Tea served" << endl; }
};

class MilkTea : public Tea {
  void ingredient() override { cout << "milk, tea leaves and water" << endl; }
  void brew() override { cout << "Milk Tea brewed" << endl; }
  void serve() override { cout << "Milk Tea Served" << endl; }
};

int main() {
  GreenTea greenTea;
  MilkTea milkTea;

  greenTea.makeTea();
  milkTea.makeTea();
  return 0;
}
