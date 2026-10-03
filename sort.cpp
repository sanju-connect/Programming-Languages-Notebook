#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2) {
  if(p1.second < p2.second) return true;
  if(p1.second > p2.second) return false;

  if(p1.first < p2.first) return true;
  else return false;
}

int main() {
  int arr[] = {5, 4, 3, 2, 1};

  sort(arr, arr + 5, greater<int>());

  for(int val : arr) {
    cout << val << " ";
  }
  cout << endl;

  vector<pair<int, int>> vec = {{3, 1}, {2, 1}, {7, 1}, {5, 2}};

  sort(arr, arr + 5, greater<int>());

  vector<int> vec = {1, 2, 3, 4, 5};


  reverse(vec.begin(), vec.end());
  next_permutation(vec.begin(), vec.end());
  prev_permutation(vec.begin(), vec.end())
  min(4, 5);
  max(4, 6);

  max_element(vec.begin(), vec.end());
  min_element(vec.begin(), vec.end());

  binary_search(vec.begin(), vec.end(), 4);

  int n = 15;
  long int n2 = 16;
  long long int n3 = 15;

  cout << __builtin_popcount(n) << endl;
  cout << __builtin_popcountl(n2) << endl;
  cout << __builtin_popcountll(n3) << endl;


  return 0;
}
