/* 33. Write a program in C++ to divide two numbers and print on the screen.   
Sample Output:
Divide two numbers and print:
----------------------------------
The quotient of 30 and 10 is : 3.*/
#include <iostream>
#include<cmath>
using namespace std;
int main()
    {
    	int num1,num2,quotient;
		
        cout<<" Input the number : ";
    	cin>> num1>>num2;
    	quotient=num1/num2;
    	cout<<"The quotient of "<<num2 <<"and"<<num1<<"is "<<quotient<<endl;
        
return 0;
    }