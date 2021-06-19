#include <iostream>
#include <string>
using namespace std;
void hello(int p,int q)
{
cout<<"\n Substraction: "<< p+q ;
cout <<"\n mutiplication :"<< p*q;
cout <<"\n Division :"<<p/q;
}
void Myname(string fname,int age){
cout<<"\n My name is "<< fname;
cout<<"\n age is "<< age<< endl;
}
int qualification( int x)
{
return x+5;
}
int main() {
  int a=12,b=13;
  cout <<"\n Addition "<< a+b ;
  hello(10,12);
  Myname("Siddhi",21);
  cout<<qualification(2);
  return 0;
}