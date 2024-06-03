#include<iostream>
using namespace std;

main()
{
    int n,temp,c=0;

    cout<<"enter the number : ";
    cin>>n;

    temp = n;
    while(temp != 0)
    {
        temp = temp/10;
        c++;
    }
    cout<<"Total number of digits in "<<n<<" are : "<<c;
}
