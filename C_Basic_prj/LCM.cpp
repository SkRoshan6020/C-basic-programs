#include<iostream>
using namespace std;

main()
{
    int n1,n2,i,m,l=1;

    cout<<"enter the numbers : ";
    cin>>n1>>n2;

    m = n1 > n2 ? n1 : n2;

    i = m;

    while(1)
    {
        if(i % n1 == 0 && i % n2 == 0)
        {
            l = i;
            break;
        }
        i = i+m;
    }
    cout<<"LCM of "<<n1<<" and "<<n2<<" are : "<<l;
}
