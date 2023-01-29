#include<iostream>
using namespace std;
void fibonacciseries(int length);
main()
{
   int length;
   cout<<"enter length:";
   cin>>length;
   fibonacciseries(length);
}
void fibonacciseries(int length)
{
    int no1=0;
    int no2=1;
    int fab=0;
    cout<<no1<<","<<no2<<",";
    for(int i=1;i<=length;i=i+1)
    {
        fab=no1+no2;
        cout<<fab<<",";
        no1=no2;
        no2=fab;
    }
       
}
