/* 26. Write a program in C++ to convert temperature in Fahrenheit to Kelvin.   
Sample Output:
Convert temperature in Fahrenheit to Kelvin :
---------------------------------------------------
Input the temperature in Fahrenheit : 80.33
The temperature in Fahrenheit : 80.33
The temperature in Kelvin : 300 */

#include <iostream>
using namespace std;
 
int main()
{
    float kelvin,  Fahrenheit;
			
    cout << " Input the temperature in Fahrenheit: "<<endl;
    cin >> Fahrenheit;
    kelvin = (5.0 / 9) * (Fahrenheit - 32) + 273.15;
    cout << " The temperature in Fahrenheit : " << Fahrenheit << endl;
    cout << " The temperature in Kelvin    : " << kelvin << endl;
   
	
    return 0;
}