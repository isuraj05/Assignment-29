#include<iostream>
using namespace std;

class Complex
{   
    private:
        int x;
    public:
        Complex() {}
        Complex(int a)
        {
            x=a;
        }
        void display()
        {
            cout<<"Object="<<x<<endl;
        }
};

int main()
{
    Complex c1;
    int x=5;
    c1=(Complex)x;
    c1.display();
    return 0;
}