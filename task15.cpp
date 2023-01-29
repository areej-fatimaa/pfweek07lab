#include<iostream>
using namespace std;
float calculateprice(float money, int year);
main()
{
    float money;
    int year;
    float result;
    cout<<"enter money";
    cin>>money;
    cout<<"enter year";
    cin>>year;
    result=calculateprice(money, year);
    if(result>money)
    {
       int total=result-money;
       cout<<"yes!he will have carefree life and will have"<<total<<"dollor left"<<endl;
    }
    if(result<money)
    {
        int total=money-result;
        cout<<"he will need "<<total<<"dollors to survive";
    }

}
float calculateprice(float money, int year)
{
    int leftmoneyeven=0;
    int leftmoneyodd=0;
    int age=18;
    float totalleftmoney;
    for(int x=1800;x<=year;x=x+1)
    {
        if(x%2==0)
        {
            leftmoneyeven=leftmoneyeven+12000;
        }
        if(x%2!=0)
        {
            leftmoneyodd=12000+50*age;
        }
         age=age+1;
    }
    totalleftmoney=leftmoneyeven+leftmoneyodd;
        return totalleftmoney;
}