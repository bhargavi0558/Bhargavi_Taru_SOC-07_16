#include<iostream>
#include<string>
using namespace std;

class Book
{
	public:
	string Title;
	string Author;

	Book(string t="IKIGAI", string a="Hector Garcia")

	{
	    Title = t;
	    Author = a;
	}

	Book(Book & b)

	{
	   Title = b.Title;
	   Author = b.Author;
	}

	void display()

	{

	  cout<<"Title of the Book = "<<Title<<endl;
	  cout<<"Name of the Author = "<<Author<<endl;

	}

};

	int main()

	{
	  Book b1;
	  b1.display();
	 
	  Book b2(b1);
	  b2.display();

	 return 0;

	}

