#include<iostream>
using namespace std;
main() 
{
int a,b,c,d,e;
cout<< " enter days ";
cin>>a;
cout<< " days: "<<a;
b=a/365;
cout<< " years: "<<b;
c=(a%365)/30;
cout<< " months: "<<c;
d=(a%30)/7;
cout<< " weeks: "<<d;
e=(a%7);
cout<< " days: "<<e;
}
