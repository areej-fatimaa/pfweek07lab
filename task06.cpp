#include<iostream>
using namespace std;
int frequencychecker(int num, int digit);
main()
{
int num, result, digit;
cout<<"enter number";
cin>>num;
cout<<"enter digit";
cin>>digit;
result=frequencychecker(num, digit);
cout<<result;
}
int frequencychecker(int num, int digit)
{
    int total=0;
    int mod=0;
     while(num>0)
     {
        mod=num%10;
        if(mod==digit)
        {
            total=total+1;
        }
         num=num/10;
     }
     return total; 
}