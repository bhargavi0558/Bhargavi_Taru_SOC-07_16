#include<iostream>
using namespace std;
class Rectangle 
{
private:
  float length,breadth;

public:
  // function defined inside the class

void getdata()
{
   cout<<"length:";
   cin>>length;

   cout<<"breadth:";
   cin>>breadth;

}

float area();
float perimeter();

void display()
{
  cout<<"area:"<<area()<<endl;

  cout<<"perimeter:"<<perimeter()<<endl;
}
};

float Rectangle::area()
{ 
   return length*breadth;
}

float Rectangle::perimeter()
{ 
   return 2*(length+breadth);
}

int main()
{   
   Rectangle r;
 
   r.getdata();
   r.display();

return 0;

};
