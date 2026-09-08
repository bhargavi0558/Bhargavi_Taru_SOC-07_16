#include<iostream>
using namespace std;

class Rectangle
{
	private:
	float length,breadth;
	public:
	//function defined inside the class
	void getData()
{
	cout<<"Enter length: ";
	cin>>length;
	
	cout<<"Enter breadth: ";
	cin>>breadth;
}
//function declared inside the class, defined outside the class

float area();
float perimeter();

void display()

{
	cout<<"Area: "<<area()<<endl;
	cout<<"Perimeter: "<<perimeter()<<endl;
}

};

//function declared outside the class 
float Rectangle::area()

{
	return length*breadth;
}

//function declared outside the class
float Rectangle::perimeter()
{
	return 2*(length+breadth);
}

int main()
{
	Rectangle r;
	r.getData();
	r.display();

	return 0;
}

