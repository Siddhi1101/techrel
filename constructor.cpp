#include <iostream>
using namespace std;
class student
{
 public:
     int studid;
     string name;
     string clg;
     student()
     {
     cout<<"this is default constructor"<<endl;
     }
     student(int x,string y,string z)
     {
     studid=x;
     name=y;
     clg=z;
     cout<<"these is parameterzied constructor"<<endl;
     }
};
int main()
 {
 cout<< "hello Siddhi"<<endl;
 student obj(1,"siddhi","KIT");
 cout << obj.studid << "My id is" << obj.name << "and name is " << obj.clg << " clg is \n";
 return 0;

}
