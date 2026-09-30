#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec; //0

  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  vec.push_back(5);
  vec.emplace_back(6);
  vec.pop_back();


  cout << vec.size() << endl;
  cout << vec.capacity() << endl;

  for(int val : vec) {
    cout << val << " " << endl;
  }

  cout << vec[2] << " " << vec.at(2);

  cout << vec.front() << " " << vec.back();

  vector<int> vek(3, 10);

  vec.erase(vec.begin() + 2);
  vec.insert(vec.begin() + 1, 100);
  vec.clear();

  vector<int> vec = {1, 2, 3, 4, 5};

  //itertors

  vector<int>::iterator it;
  for(it = vec.begin(); it!=vec.end(); it++) {
    cout << *(it) << endl;
  }

  vector<int>::reverse_iterator it;
  for(it = vec.rbegin(); it!=vec.rend(); it++) {
    cout << *(it) << endl;
  }

  for(auto it = vec.rbegin(); it!=vec.rend(); it++) {
    cout << *(it) << endl;
  }
  return 0;
}
