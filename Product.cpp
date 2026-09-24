#include<iostream>
using namespace std;

class product
{
public:
    int productid;
    string product_name;
    float price;
    int monthlySales[12];

    void getdata()
    {
        cout<<"enter product id:";
        cin>>productid;

        cout<<"enter product name:";
        cin>>product_name;

        cout<<"enter price of product:";
        cin>>price;

        cout<<"enter sales for 12 months:";
        for(int i=0;i<12;i++)
        {
            cout<<"month "<<i+1<<":";
            cin>>monthlySales[i];
        }
    }

    int TotalQty()
    {
        int total=0;
        for(int i=0;i<12;i++)
        {
            total=total+monthlySales[i];
        }
        return total;
    }

    float TotalBill()
    {
        return TotalQty()*price;
    }

    void Display()
    {
        cout<<"\nProduct Id:"<<productid;
        cout<<"\nProduct Name:"<<product_name;
        cout<<"\nPrice of product:"<<price;
        cout<<"\nTotal Qty:"<<TotalQty();
        cout<<"\nTotal Bill:"<<TotalBill()<<endl;
    }
};

int main()
{
    product p;
    p.getdata();
    p.Display();
    return 0;
}
