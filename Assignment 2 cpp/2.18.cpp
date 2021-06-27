/* 18. Write a program in C++ to find the area of any triangle using Heron's Formula.   
Sample Output:
Find the area of any triangle using Heron's Formula :
----------------------------------------------------------
Input the length of 1st side of the triangle : 5
Input the length of 2nd side of the triangle : 5
Input the length of 3rd side of the triangle : 5
The area of the triangle is : 10.8253
 */

#include<iostream>
#include <cmath>
using namespace std;
int main()
{
  float a,b,c,result,s;
  
  cout << "Enter the length 1st side of the triangle: "<<endl;
  cin >> a ;
   cout << "Enter the length 2nd side of the triangle: "<<endl;
  cin >> b ;
   cout << "Enter the length 3rd side of the triangle: "<<endl;
  cin >> c ;
  
  s=(a+b+c)/2;
  result=sqrt(s*(s-a)*(s-b)*(s-c));
  cout << "The area of the triangle is = " << result << endl;
 
  
  return 0;
}