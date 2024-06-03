#include<iostream>
using namespace std;
main()
{
    int n,temp,rem,result=0;

    cout<<"enter the number : ";
    cin>>n;

    temp=n;
    while(temp!=0)
    {
        rem = temp%10;
        result = result * 10+rem;
        temp = temp/10;
    }

    if(result == n)
    {
        cout<<n<<" is a palindrome number";
    }
    else
    {
        cout<<n<<" is not a palindrome number";
    }
}
