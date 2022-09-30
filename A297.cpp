#include<iostream>
using namespace std;

class Time
{
    private:
        int mins, secs;
    public: 
        Time() {}
        Time(int m, int s)
        {
            mins=m;
            secs=s;
        }
        int getMin() { return mins; }
        int getSec() { return secs; }
        void display()
        {
            cout<<mins<<" Minutes and "<<secs<<" Seconds"<<endl;
        }
};
class Minute
{
    private:
        int mins;
        int secs;
    public: 
        Minute() {}
        Minute(Time T)
        {
            mins=T.getMin();
            secs=T.getSec();
        }
        void display()
        {
            cout<<mins<<" Minutes and "<<secs<<" Seconds"<<endl;
        }
};

int main()
{
    Time t1(2,30);
    t1.display();
    Minute m1;
    m1.display(); //This line will print garbage timing
    m1=t1;
    t1.display();
    m1.display();
    return 0;
}       