#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "Sanju Ghosh"; // dynamic = runtime resize
  cout << str;

  str = "Hello";

  string str1 = "Sanju";
  string str2 = "Ghosh";


  string str3 = str1 + str2;
  cout << str3 << endl;

  cout << (str1 == str2) << endl;

  getline(cin, str);

  reverse(str.begin(), str.end());

  return 0;
}
