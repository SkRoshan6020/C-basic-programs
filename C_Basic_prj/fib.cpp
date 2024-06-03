#include<iostream>
using namespace std;

main()
{
    int n,a=0,b=1,c=0;

    cout<<"enter the number : ";
    cin>>n;

    cout<<"Fibonacci series are : "<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<"\t"<<c;
        a = b;
        b = c;
        c = a+b;
    }

}


