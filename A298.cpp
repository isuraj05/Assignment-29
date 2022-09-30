#include<iostream>
using namespace std;

class Rupee
{
    private:
        int r;
    public: 
        Rupee(int x)
        {
            r=x;
        }
        void display()
        {
            cout<<r<<" Rupees from object"<<endl;
        }
        operator int()
        {
            return r;
        }
};

int main()
{
    Rupee r=10;
    r.display();
    int x=r;
    cout<<x<<" Rupees"<<endl;
    return 0;
}       