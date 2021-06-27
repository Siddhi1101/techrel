/* 38. Write a program in C++ that takes a number as input and prints its multiplication table upto 10. 
*/
#include <iostream>
using namespace std;
 
int main()
{
int a,i=0;
    
	cout << " Input positive integer: ";
	cin>> a;
	for (i=1;i<=10;i++)
	{
	cout << a<<" x "<< i << " = "<<a*i<<"\n" ;
	}
	
}

