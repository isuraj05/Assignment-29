#include<iostream>
using namespace std;

class Invent1
{
    private:
        float a,b;
    public: 
        Invent1() {}
        Invent1(float x, float y)
        {
            a=x;
            b=y;
        }
        float getA() { return a; }
        float getB() { return b; }
        void display()
        {
            cout<<"Data of First Class"<<endl;
            cout<<"a="<<a<<" and b="<<b<<endl;
        }
        operator float()
        {
            return a*b;
        }

};
class Invent2
{   
    private:
        int m,n;
    public:
        Invent2() {}
        Invent2(Invent1 I)
        {
            m=I.getA();
            n=I.getB();
        }
        void display()
        {
            cout<<"Data of Second Class"<<endl;
            cout<<"m="<<m<<" and n="<<n<<endl;
        }
};

int main()
{
    Invent1 s1(4,5);
    Invent2 d1;
    float tv;
    tv=s1;
    d1=s1;
    s1.display();
    d1.display();
    cout<<"After multiplying first class's data"<<endl;
    cout<<"tv="<<tv;
    return 0;
}       