#include<iostream>
using namespace std;

main()
{
    int n,temp,rem,sum=0;

    cout<<"enter the number : ";
    cin>>n;

    temp=n;

    while(temp!=0)
    {
        rem = temp%10;
        sum = sum+rem;
        temp = temp/10;


    if(temp == 0)
    {
        if(sum > 9)
        {
            temp = sum;
            sum = 0;
        }
    }
}

cout<<"Generic root of "<<n<<" is : "<<sum;

}
