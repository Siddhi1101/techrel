/* 22. Write a program in C++ to find the third angle of a triangle.   
Sample Output:
Find the third angle of a triangle :
-----------------------------------------
Input the 1st angle of the triangle : 30
Input the 2nd angle of the triangle : 60
The 3rd of the triangle is : 90 */

#include <iostream>
using namespace std;
 
int main()
{
    float a1, a2, a3;
    cout<<" Input the 1st angle of the triangle : "<< endl;
    cin>>a1;
    cout<<" Input the 2nd angle of the triangle : "<< endl;
    cin>>a2;
	a3=180-(a1+a2);
    cout << " The 3rd of the triangle is : " << a3 << endl;
	cout << endl;
    return 0;
}