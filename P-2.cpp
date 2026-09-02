#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	int rollNumber;
	string name;
	float marks;

	void accept()
{
	cout<<"Enter roll number:";
	cin>>rollNumber;

	cout<<"Enter Name:";
	cin.ignore();
	getline(cin,name);

	cout<<"Enter Marks:";
	cin>>marks;
}
   void calculateResult()
{
  if(marks>=40)
	cout<<"Result:PASS"<<endl;

  else	cout<<"Result:FAIL"<<endl;
};

   void display()
{ 
	cout<<"\n---Student Details---"<<endl;
	cout<<"Roll Number:"<<rollNumber<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"Marks:"<<marks<<endl;

	calculateResult();
}
};

	int main()
{
	Student s;

	s.accept();
	s.display();
	s.calculateResult();


	return 0;
}
