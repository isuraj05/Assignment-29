#include<iostream>
using namespace std;

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
        int getA() { return a; }
        int getB() { return b; }
        void display()
        {
            cout<<"a="<<a<<" and b="<<b<<endl;
        }
};
class Item
{
    private:
        int add;
    public: 
        Item() {}
        Item(Product P)
        {
            add=P.getA()+P.getB();
        }
        void display()
        {
            cout<<"Addition is "<<add<<endl;
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