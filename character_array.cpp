#include <iostream>
using namespace std;

int main() {
  char str[] = "Sanju"; // string literals
  cout << str << endl; //constant pointer

  char st[100];

  cin >> st;
  cout << st;

  char strr[100];

  cin.getline(strr, 100, '\n');

  for(char ch : strr) {
    cout << ch << " ";
}
cout << endl;
int len = 0;
for(int i = 0; i < strr[i] != '\0'; i++) {
  len++;
}

  return 0;
}
