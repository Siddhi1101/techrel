/* 40.area and perimeter of rectangle
*/
#include <iostream>
using namespace std;
 
int main()
{
float area,peri,width,height=0;
    
	cout << " Input the width of the rectangle: ";
	cin>> width;
	cout << " Input the height of the rectangle: ";
	cin>> height;	
	peri=2 * (width+height);
	area= height * width;
	cout<<"The area of the rectangle is: "<<area<<"\n";
	cout<<"The perimeter of the rectangle is: "<<peri<<"\n";
	
}