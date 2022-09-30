#include<iostream>
using namespace std;

class Rupee
{
    private:
        float r;
    public: 
        Rupee() {}
        Rupee(float x)
        {
            r=x;
        }
        float getRupee() { return r; }
        void display()
        {
            cout<<r<<" Rupees"<<endl;
        }
        operator float()
        {
            return r;
        }
};
class Dollar
{
    private:
        float d;
    public: 
        Dollar() {}
        Dollar(Rupee &R)
        {
            d=R.getRupee()/81.33;
        }
        void display()
        {
            cout<<d<<" dollars"<<endl;
        }
        operator Rupee()
        {
            return d*81.33;
        }
};

int main()
{
    Rupee r1=23;
    Dollar d1=r1; 
    d1.display();
    r1.display();

    r1=d1;
    d1.display();
    r1.display();

    return 0;
}       