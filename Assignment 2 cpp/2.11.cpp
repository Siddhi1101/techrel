

/*11. Write a program in C++ to print the result of the specified operations.   
Sample Output:
Print the result of some specific operation :
--------------------------------------------------
Result of 1st expression is : 23
Result of 2nd expression is : 5
Result of 3rd expression is : 12
Result of 4th expression is : 3    */
#include <iostream>
using namespace std;
 void fun(int x,int y)
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
