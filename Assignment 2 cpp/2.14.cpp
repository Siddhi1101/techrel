/* 14. Write a program in C++ to calculate the volume of a sphere.   
Sample Output:
Calculate the volume of a sphere :
---------------------------------------
Input the radius of a sphere : 6
The volume of a sphere is : 904.32 */

#include<iostream>
using namespace std;
int main()
{
  float num1, temp;
  float pi=3.14;

  cout << "Enter the radius of sphere : "<<endl;
  cin >> num1 ;
  
  temp=1.33*pi*num1*num1*num1;
  cout << "The volume of sphere is = " << temp << endl;
 
  return 0;
}