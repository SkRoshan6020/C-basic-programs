#include<iostream>
using namespace std;

main()
{
   int i,n,first;
   char mn[10];

   cout<<"enter the name of the month : ";
   cin>>mn;

   cout<<"enter the numbers of days in that month : ";
   cin>>n;

   cout<<"enter first day in that month : ";
   cin>>first;


   cout<<mn<<endl;

   cout<<"Mon\tTue\tWed\tThu\tFri\tSat\tSun"<<endl;

   for(i=1; i<first; i++)
      cout<<" ";

      for(i=1; i<=n; i++)
      {
          cout<<"\t"<<i<<endl;
          if((first+i-1)%7==0)
            cout<<" ";
      }
}
