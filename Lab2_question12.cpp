#include<iostream>
#include<cmath>
using namespace std;
main(){
float a,b,c,d,e;
cout<<" enter your principle(P)(in rupees), rate(R)(in %), time(T)(in years) and the number of times the interest is compounded per year(N) ";
cin>>a>>b>>c>>d;
e=a*pow(1+b/100*1/d,c*d)-a;
cout<< " compound interest: "<<e;
}
