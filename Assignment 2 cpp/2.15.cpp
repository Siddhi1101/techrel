/* 15. Write a program in C++ to calculate the volume of a cube.   
Sample Output:
Calculate the volume of a cube :
---------------------------------------
Input the side of a cube : 5
The volume of a cube is : 125 */

#include<iostream>
using namespace std;
int main()
{
  float num1, temp;
  cout << "Enter the side of cube : "<<endl;
  cin >> num1 ;
  
  temp=num1*num1*num1;
  cout << "The volume of cube is = " << temp << endl;
 
  return 0;
}