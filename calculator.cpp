#include<iostream>
using namespace std;
int main()
{
    int x,a,b;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    cout<<"1 for addition"<<endl;
    cout<<"2 for subtraction"<<endl;
    cout<<"3 for multiplication"<<endl;
    cout<<"4 for division"<<endl;
    cout<<"Enter number for operation:"<<endl;
    cin>>x;
    switch(x)
    {
        case 1:cout<<(a+b)<<endl;
            break;
        case 2:cout<<(a-b)<<endl;
            break;
        case 3:cout<<(a*b)<<endl;
            break;
        case 4:cout<<(a/b)<<endl;
            break;

    }
    return 0;
}