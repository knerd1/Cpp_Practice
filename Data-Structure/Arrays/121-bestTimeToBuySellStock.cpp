#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> prices = {7, 1, 5, 3, 6, 4};

int main() {
  int mini = prices[0];
  int maxProfit = 0;
  for (int i = 1; i < prices.size(); i++) {
    int cost = prices[i] - mini;
    maxProfit = max(maxProfit, cost);
    mini = min(prices[i], mini);
  }
  cout << maxProfit;
}
