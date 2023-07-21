#include <iostream>
using namespace std;
int main()
{
    float h,w,bmi;
    cout<<"Enter your Height in m : ";
    cin>>h;
    cout<<"Enter your Weight in kg : ";
    cin>>w;
    bmi=w/(h*h);
    cout<<bmi;
    if(bmi<=18)
    {
        cout<< " You are Underweight "<<endl;
    }
    else if(bmi>18 || bmi<=25)
    {
        cout<< " You are Normal "<<endl;
    }
    else if (bmi<25)
    {
        cout <<" You are Overweight "<<endl;
    }
    else
    {
        cout<< " You are OBs "<<endl;
    }
}
