#include<iostream>
using namespace std;

class Dollar
{
    private:
        int d;
    public: 
        Dollar() {}
        Dollar(int x)
        {
            d=x;
        }
        void display()
        {
            cout<<d<<" dollars from object"<<endl;
        }
};

int main()
{
    int x=50;
    Dollar d1;
    d1=x;
    cout<<"int "<<x<<endl;
    d1.display();
    return 0;
}       