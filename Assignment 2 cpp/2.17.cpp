/* 17. Write a program in C++ to find the Area and Perimeter of a Rectangle.   
Sample Output:
Find the Area and Perimeter of a Rectangle :
-------------------------------------------------
Input the length of the rectangle : 10
Input the width of the rectangle : 15
The area of the rectangle is : 150
The perimeter of the rectangle is : 50
 */

#include<iostream>
using namespace std;
int main()
{
  float length,width,area,perimeter;
  
  cout << "Enter the Length of cylinder: "<<endl;
  cin >> length ;
  cout << "Enter the Width of cylinder: "<<endl;
  cin >> width ;
  
  perimeter=(2*length)+(2*width);
  
  cout << "The perimter of rectangle is = " << perimeter << endl;
 
  area=length*width;
  
  cout << "The area of rectangle is = " << area << endl;
  
  return 0;
}