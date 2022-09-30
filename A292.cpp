#include<iostream>
using namespace std;

class Complex
{   
    private:
        int m,n;
    public:
        void setData(int a,int b)
        {
            m=a;
            n=b;
        }
        operator int()
        {
            return m+n;
        }
        void display()
        {
            cout<<"m="<<m<<" and n="<<n<<endl;
        }
};

int main()
{
    Complex c1;
    c1.setData(3,4);
    int x;
    x=(int)c1;
    c1.display();
    cout<<"x="<<x;
    return 0;
}       