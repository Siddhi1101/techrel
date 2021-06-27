/* 19. Write a program in C++ to find the area and circumference of a circle.   
Sample Output:
Find the area and circumference of any circle :
----------------------------------------------------
Input the radius(1/2 of diameter) of a circle : 5
The area of the circle is : 78.5397
The circumference of the circle is : 31.4159
 */

#include<iostream>
#include <cmath>
using namespace std;
int main()
{
  float a,area,circum;
  
  cout << "Enter the Radius of circle: "<<endl;
  cin >> a ;
   
  circum=2*3.14*a;
   cout << "The circumference f the Circle is = " << area << endl;
  
  area=3.14*a*a;
  cout << "The area of the Circle is = " << area << endl;
 
  
  return 0;
}