#include<iostream>
using namespace std;

main()

{
    int n;

    cout<<"enter the number : ";
    cin>>n;

    if(n % 11 == 0)
    {
        cout<<n<<" is divisible by 11";
    }
    else
    {
        cout<<n<<" is not divisible by 11";
    }
}
