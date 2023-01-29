#include<iostream>
using namespace std;
void printpercentage(int number);
main()
{
     int number;
     cout<<"enter number";
     cin>>number;
     printpercentage(number);

}
void printpercentage(int number)
{
    int p1=0,p2=0,p3=0,p4=0,p5=0;
    float per1,per2,per3,per4,per5;
        int num;
    for(int n=1;n<=number;n=n+1)
     {
       cout<<"enter number:";
       cin>>num;
     
     if(num<200)
       {
        p1= p1 + 1;
       }
       if(num>=200&&num<=399)
       {
        p2 = p2 + 1;
       }
       if(num>=400&&num<=599)
       {
       p3=p3 +1;
       }
       if(num>=600&&num<=799)
       {
        p4=p4+1;
       }
       if(num>800)
       {
        p5=p5+1;
       }
     }
     
     per1=p1*100.0/number;
     per2=p2*100.0/number;
     per3=p3*100.0/number;
     per4=p4*100.0/number;
     per5=p5*100.0/number;
     cout<<per1<<endl;
     cout<<per2<<endl;
     cout<<per3<<endl;
     cout<<per4<<endl;
     cout<<per5<<endl;

       
     }