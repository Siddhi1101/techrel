/*20. Write a program in C++ to convert temperature in Celsius to Fahrenheit.   
Sample Output:
Convert temperature in Celsius to Fahrenheit :
---------------------------------------------------
Input the temperature in Celsius : 35
The temperature in Celsius : 35
The temperature in Fahrenheit : 95 */
#include <iostream>
using namespace std;
 
int main()
{
    float frh, cel;
			
    cout << " Input the temperature in Celsius : "<<endl;
    cin >> cel;
    frh = (cel * 9.0) / 5.0 + 32;
    cout << " The temperature in Celsius    : " << cel << endl;
    cout << " The temperature in Fahrenheit : " << frh << endl;
	cout << endl;
    return 0;
}