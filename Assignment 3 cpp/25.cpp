/* 25. Write a program in C++ to convert temperature in Kelvin to Celsius.   
Sample Output:
Convert temperature in Kelvin to Celsius :
------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Celsius : 26.85 */

#include <iostream>
using namespace std;
 
int main()
{
    float kelvin,  Celsius;
			
    cout << " Input the temperature in Kelvin : "<<endl;
    cin >> kelvin;
  Celsius = (kelvin - 273.15);
    cout << " The temperature in Kelvin    : " << kelvin << endl;
    cout << " The temperature in Fahrenheit : " << Celsius << endl;
	
    return 0;
}