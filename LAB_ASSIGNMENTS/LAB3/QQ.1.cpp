#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter Rational Number"<<endl;
    cin>>a>>b;
    cout<<"Enter Rational Number"<<endl;
    cin>>c>>d;
    int x=a*d;
    int y=b*c;
    int nums=x+y;
    int nums=x-y;
    int den=b*d;
    cout<<"Addition of Rational Numbers is "<<nums<<"/"<<den<<endl;
    cout<<"Subtraction of Rational Numbers is "<<nums<<"/"<<den<<endl;
    return 0;

}