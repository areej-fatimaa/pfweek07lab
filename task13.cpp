#include<iostream>
using namespace std;
float saved(int age, float price, int toyprice);
main()
{
     int age;
     float price;
    int toyprice;
    int result;
    cout<<"enter age";
    cin>>age;
    cout<<"enter price of washing machine";
    cin>>price;
    cout<<"enter price of unit toy";
    cin>>toyprice;
    result=saved(age,price,toyprice);
    if(result>price)
    {
        int savedprice=result-price;
        cout<<"yes!"<<endl<<savedprice;
    }
    else if(result<price)
    {
        int savedprice=price-result;
        cout<<"no!"<<endl<<savedprice;
    }
}
float saved(int age, float price, int toyprice)
{
    int totalprice=0;
    int totalpricetoy=0;
    int totalmoney=0;
    int money=0;
    int x=1;
    for(int n=1;n<=age;n=n+2)
    {
        totalpricetoy=toyprice+ totalpricetoy;
    }
  for(int m=2;m<=age;m=m+2)
  {
         money=money+10;
        totalprice=totalprice+money-1;
        cout<<totalprice<<endl;
        //x=x+1;
  }
   cout<<totalpricetoy<<endl;
  totalmoney=totalpricetoy+totalprice;
  return totalmoney;
}