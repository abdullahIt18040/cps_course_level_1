
#include<bits/stdc++.h>
using namespace std;

class student{

public :
    string name;
    int age;
  student(string x,int y)
  {
      name=x;
      age=y;

  }

  void display()
  {

      cout<<name<<endl;
      cout<<age<<endl;
  }

   void display(int a,int b)
   {
       cout<<" a+b"<<endl;
   }
     void display(double a,int b)
   {
       cout<<"  double a+b"<<endl;
   }
};

int main(){
    student abdullah("sadheen",21);
    abdullah.display();
     abdullah.display(4.5,6);

}
