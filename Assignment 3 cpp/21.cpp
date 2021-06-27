/* 21. Write a program in C++ to convert temperature in Fahrenheit to Celsius.   
Sample Output:
Convert temperature in Fahrenheit to Celsius :
---------------------------------------------------
Input the temperature in Fahrenheit : 95
The temperature in Fahrenheit : 95
The temperature in Celsius : 35 */

#include <iostream>
using namespace std;
 
int main()
{
    float frh, cel;
	cout << " Input the temperature in Fahrenheit : "<<endl;
    cin >> frh;
    cel = ((frh * 5.0)-(5.0 * 32))/9;
    cout << " The temperature in Fahrenheit : " << frh << endl;
    cout << " The temperature in Celsius : " << cel << endl;
	cout << endl;
    return 0;
}