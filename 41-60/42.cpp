/*42. Write a language program in C++ which accepts the user's first and last name and print them in reverse order with a space between them.
Sample Output:
Print the name in reverse where last name comes first:
-----------------------------------------------------------
Input First Name: Alexandra
Input Last Name: Abramov
Name in reverse is: Abramov Alexandra */
#include<iostream>
using namespace std;
int main()
    {
    char name1[30], name2 [30];
    cout << "\n\n Print the name in reverse where last name comes first:\n";
    cout << "-----------------------------------------------------------\n";
    cout << " Input First Name: ";
    cin >> name1;
    cout << " Input Last Name: ";
    cin >> name2;

    cout << " Name in reverse is: "<< name2 << " "<< name1 <<endl;
	cout << endl;
    return 0;

    }