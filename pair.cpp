#include <iostream>
#include <vector>
using namespace std;

int main() {
  pair<int, int> p = {1, 5};

  cout << p.first << endl;
  cout << p.second << endl;
  pair<int, pair<int, int>> p = {1, {2, 3}};

  vector<pair<int, int>> vec = {{1, 2}, {2, 3}};

  vec.push_back{{4, 5}};
  vec.emplace_back{4, 5};

  for(auto p : vec) {
    cout << p.first << " " << p.second << endl;
  }

  return 0;
}
