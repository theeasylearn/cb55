#include<iostream>
using namespace std;
int main()
{
   cout<<"declaring variables in c++";
   int age;
   float weight;
   char letter;
   //input
   cout<<"enter your age";
   cin>>age;
   cout<<"enter your weight";
   cin>>weight;
   cout<<"enter 1st letter of your name";
   cin>>letter;
   //display variable
   cout<<"age ="<<age<<endl;
   cout<<"weight ="<<weight<<endl;
   cout<<"letter ="<<letter<<endl;
   cout<<age<<endl<<weight<<endl<<letter;
}