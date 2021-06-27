/* 32. Write a program in C++ to check whether a number is positive, negative or zero.   
Sample Output:
Check whether a number is positive, negative or zero :
-----------------------------------------------------------
Input a number : 8
The entered number is positive.*/
#include <iostream>
using namespace std;
int main()
    {
    	int num;
		
        cout<<" Input the number : ";
    	cin>> num;
        if (num >= 0){
cout << num << " is a positive number.";}
else{
cout << num << " is a negative number.";
}
return 0;
    }