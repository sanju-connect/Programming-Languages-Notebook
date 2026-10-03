#include <iostream>
#include <map>
using namespace std;

int main() {
  map<string, int> m;

  m["TV"] = 100;
  m["Laptop"] = 100;
  m["Headphones"] = 50;

for(auto p: m) {
  cout << p.first << " " << p.second << endl;
}

m.insert("camera", 25);

multimap<string, int> m;

m.emplace("TV", 100);
m.emplace("TV", 100);
m.emplace("TV", 100);
m.emplace("TV", 100);

return 0;
}
