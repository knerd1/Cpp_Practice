#include <iostream>
#include <string>
#include <vector>

using namespace std;

// base class
class Amazon {
protected:
  string amazonItemName;
  int totalQuantity;

public:
  Amazon(string cart, int count) : amazonItemName(cart), totalQuantity(count) {
    cout << "Amazon Constructor Called: " << amazonItemName << endl;
  }

  virtual void addToCart() const { cout << "Added" << amazonItemName << endl; }

  virtual void selectQuantity() const {
    cout << "Add Quantity: " << totalQuantity << endl;
  }

  virtual ~Amazon() { cout << "Amazon Destructor Called:" << endl; }
};

class shoes : public Amazon {
public:
  shoes(int item) : Amazon("Shoes", item) {
    cout << "shoes class Constructor called" << endl;
  }

  void addToCart() const override {
    cout << "Added to cart: " << amazonItemName << endl;
  }

  ~shoes() { cout << "shoes class Constructor called" << endl; }
};

class grocery : public Amazon {
public:
  grocery(int item) : Amazon("grocery", item) {
    cout << "grocery class Constructor called" << endl;
  }

  void addToCart() const override final {
    cout << "Added to cart: " << amazonItemName << endl;
  }

  ~grocery() { cout << "grocery class Constructor called" << endl; }
};

// class pulse : public grocery {
// public:
//   void addToCart() const override {
//     cout << "Added to cart: " << amazonItemName << endl;
//   }
// };

int main() {
  Amazon *item1 = new shoes(2);
  Amazon *item2 = new grocery(3);

  item1->addToCart();
  item1->selectQuantity();

  item2->addToCart();
  item2->selectQuantity();

  delete item1;
  delete item2;

  return 0;
}
