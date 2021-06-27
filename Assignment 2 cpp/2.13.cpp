
/* 13. Write a program in C++ to swap two numbers.   
Sample Output:
Swap two numbers :
-----------------------
Input 1st number : 25
Input 2nd number : 39
After swapping the 1st number is : 39
After swapping the 2nd number is : 25 */

#include<iostream>
using namespace std;
int main()
{
  float num1, num2, temp;

  cout << "Enter first Number: "<<endl;
  cin >> num1 ;
  cout << "Enter second Number: "<<endl;
  cin >> num2 ;
  temp = num1;
  num1 = num2;
  num2 = temp;
  cout << "After Swappig num1 = " << num1 << endl;
  cout << "After Swapping num2 = " << num2 << endl;

  return 0;
}
 {
   cout<< "Result of first expression is: "<<x+y<<endl;
 }
 void fun1(int x,int y)
 {
   cout<< "Result of second expression is: "<<x-y<<endl;
 }
 void fun2(int x,int y)
 {
   cout<< "Result of third expression is: "<<x/y<<endl;
 }
 void fun4(int x,int y)
 {
   cout<< "Result of fourth expression is: "<<x*y<<endl;
 }
int main()
{
 fun(20,3);
 fun1(8,3);
 fun2(36,3);
 fun4(3,1);
 return 0;
 }
