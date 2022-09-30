#include<iostream>
using namespace std;

class Time
{
    private:
        int secs;
    public: 
        Time() {}
        Time(int D)
        {
            secs=(D*60);
        }
        void display()
        {
            cout<<"Duration is "<<secs<<" Seconds"<<endl;
        }
};


int main()
{
    int duration;
    cout<<"Enter time duration in minutes: ";
    cin>>duration;
    Time t1=duration;
    t1.display();
    return 0;
}       