#include <iostream>
using namespace std;
int main()
 {
	int choice;
	cout << "Enter 1, 2 or 3: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "Choice 1"; break;
	case 2:
		cout << "Choice 2"; break;
	case 3:
		cout << "Choice 3"; break;
	default:
		cout << "Not 1, 2 or 3"; break;
	}
}
