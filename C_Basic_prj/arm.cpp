#include<iostream>
using namespace std;
main()
{
    int n,rem,temp,result=0;

    cout<<"enter the number : ";
    cin>>n;

    temp = n;
    while(temp!=0)
    {
        rem = temp%10;
        result = result+(rem*rem*rem);
        temp = temp/10;
    }

    if(result == n)
    {
        cout<<n<<" is a Armstrong number ";
    }
    else
    {
        cout<<n<<" is not a Armstrong number ";
    }
}
