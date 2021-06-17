#include <iostream>
#include <string>
using namespace std;

int main () {
  string firstName = "John ";
  string lastName = "Doe";
  string fullName = firstName +" "+ lastName;
  cout << fullName;
  string fullName1 = firstName.append(lastName);
  cout << fullname1;
  return 0;
}
