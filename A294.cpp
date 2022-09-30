#include<iostream>
using namespace std;

class Item
{
    private:
        int add;
    public: 
        Item() {}
        Item(int i)
        {
            add=i;
        }
        void display()
        {
            cout<<"Addition is "<<add<<endl;
        }

};
class Product
{   
    private:
        int a,b;
    public:
        Product() {}
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        void display()
        {
            cout<<"a="<<a<<" and b="<<b<<endl;
        }
        operator Item()
        {
            return a+b;
        }
};

int main()
{
    Item i1;
    Product p1;
    p1.setData(3,4);
    i1=(Item)p1;
    p1.display();
    i1.display();
    return 0;
}       