/* 16. Write a program in C++ to calculate the volume of a cylinder.   
Sample Output:
Calculate the volume of a cylinder :
-----------------------------------------
Input the radius of the cylinder : 6
Input the height of the cylinder : 8
The volume of a cylinder is : 904.32
  */

#include<iostream>
using namespace std;
int main()
{
  float num1,num2, temp;
  float pi=3.14;
  cout << "Enter the Radius of cylinder: "<<endl;
  cin >> num1 ;
  cout << "Enter the Height of cylinder: "<<endl;
  cin >> num2 ;
  
  
  temp=pi*(num1*num1)*num2;
  cout << "The volume of Cylinder is = " << temp << endl;
 
  return 0;
}