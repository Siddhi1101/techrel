/* 30. Write a program in C++ to compute the total and average of four numbers.   
Sample Output:
Compute the total and average of four numbers :
----------------------------------------------------
Input 1st two numbers (separated by space) : 25 20
Input last two numbers (separated by space) : 15 25
The total of four numbers is : 85
The average of four numbers is : 21.25 */
#include <iostream>
using namespace std;

    int main()
    {
    	int num1,num2,num3,num4;
		
        cout<<" Input two number : ";
    	cin>>num1>>num2;
        cout<<" Input last two number : ";
    	cin>>num3>>num4;
    	float total=num1+num2+num3+num4;
		float Avg=total/4;
        cout<<" The total of four number is : "<< total<< endl;
        cout<<" The Average is : "<<Avg<< endl;
        cout << endl;
        return 0;
    }