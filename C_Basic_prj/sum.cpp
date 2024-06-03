#include<iostream>
using namespace std;

main()
{
    int n,i=1,sum=0;

    cout<<"enter the number : ";
    cin>>n;

    while(i<=n)
    {
        sum = sum+i;
        i++;
    }

    cout<<"Sum of the numbers are : "<<sum;

}
