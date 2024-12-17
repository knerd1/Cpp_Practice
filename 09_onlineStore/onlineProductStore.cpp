#include <ctime>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

struct Product {
  int productID;
  string name;
  string category;
};

struct Order {
  int orderID;
  int productID;
  int quantity;
  string customerID;
  time_t orderDate;
};

int main() {
  vector<Product> products = {{101, "Laptop", "Electronics"},
                              {102, "Smart-Phone", "Electronics"},
                              {103, "Coffee Maker", "Kitchen"},
                              {104, "blender", "Kitchen"},
                              {105, "Desk Lamp", "Home"}};

  deque<string> recentCustomers = {"C001", "C002", "C003"};
  recentCustomers.push_back("C004");
  recentCustomers.push_front("C005");

  list<Order> orderHistory;
  orderHistory.push_back({1, 101, 3, "C001", time(0)});
  orderHistory.push_back({2, 102, 2, "C002", time(0)});
  orderHistory.push_back({3, 101, 1, "C003", time(0)});

  set<string> categories;
  for (const auto &product : products) {
    categories.insert(product.category);
  }

  map<int, int> productStock = {{101, 15}, {102, 25}, {103, 34}, {104, 17}};

  multimap<string, Order> customerOrders;
  for (const auto &order : orderHistory) {
    customerOrders.insert({order.customerID, order});
  }

  unordered_map<string, string> customerData = {{"C001", "John"},
                                                {"C002", "Bob"},
                                                {"C003", "Alex"},
                                                {"C004", "Stark"},
                                                {"C005", "Tony"}};

  unordered_set<int> uniqueProductID;
  for (const auto &product : products) {
    uniqueProductID.insert(product.productID);
  }
  // for products
  cout << "Products: " << endl;
  for (const auto &product : products) {
    cout << "ID: " << product.productID << ", Name: " << product.name
         << ", Category: " << product.category << endl;
  }

  // for recet customers
  cout << "\nRecent Customers: " << endl;
  for (const auto &customer : recentCustomers) {
    cout << customer << endl;
  }

  // for order history
  cout << "\nOrder History: " << endl;
  for (const auto &order : orderHistory) {
    cout << "Order ID: " << order.orderID << ", Product ID: " << order.productID
         << ", Quantity: " << order.quantity
         << ", Customer ID: " << order.customerID
         << ", Order Date: " << ctime(&order.orderDate);
  }

  // for categories
  cout << "\nCategories:" << endl;
  for (const auto &category : categories) {
    cout << category << endl;
  }

  // for product stock
  cout << "\nProduct Stock:" << endl;
  for (const auto &stock : productStock) {
    cout << "Product ID: " << stock.first << ", Stock: " << stock.second
         << endl;
  }

  // for customer orders
  cout << "\nCustomer Orders:" << endl;
  for (const auto &entry : customerOrders) {
    const auto &order = entry.second;
    cout << "Customer ID: " << entry.first << ", Order ID: " << order.orderID
         << ", Product ID: " << order.productID
         << ", Quantity: " << order.quantity
         << ", Order Date: " << ctime(&order.orderDate);
  }

  // for customer data
  cout << "\nCustomer Data:" << endl;
  for (const auto &customer : customerData) {
    cout << "Customer ID: " << customer.first << ", Name: " << customer.second
         << endl;
  }

  // for unique product IDs
  cout << "\nUnique Product IDs:" << endl;
  for (const auto &productID : uniqueProductID) {
    cout << productID << endl;
  }

  return 0;
}
