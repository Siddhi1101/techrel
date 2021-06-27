/* 27. Write a program in C++ to convert temperature in Celsius to Kelvin.   
Sample Output:
Convert temperature in Celsius to Kelvin :
---------------------------------------------------
Input the temperature in Celsius : 26.85
The temperature in Celsius : 26.85
The temperature in Kelvin : 300  */

#include <iostream>
using namespace std;
 
int main()
{
    float kelvin,  Celsius;
			
    cout << " Input the temperature in Celsius: "<<endl;
    cin >> Celsius;
    kelvin = (Celsius + 273.15);
    cout << " The temperature in Fahrenheit : " << Celsius << endl;
    cout << " The temperature in Kelvin    : " << kelvin << endl;
   
	
    return 0;
}