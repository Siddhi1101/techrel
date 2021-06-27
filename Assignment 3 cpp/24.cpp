/* 24. Write a program in C++ to convert temperature in Kelvin to Fahrenheit.   
Sample Output:
Convert temperature in Kelvin to Fahrenheit :
---------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Fahrenheit : 80.33 */

#include <iostream>
using namespace std;
 
int main()
{
    float kelvin, Fahrenheit;
			
    cout << " Input the temperature in Kelvin : ";
    cin >> kelvin;
    Fahrenheit=  (kelvin - 273.15)*(9.0 / 5) + 32;
    cout << " The temperature in Kelvin    : " << kelvin << endl;
    cout << " The temperature in Fahrenheit : " << Fahrenheit << endl;
	
    return 0;
}