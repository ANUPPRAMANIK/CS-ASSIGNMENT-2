#include<iostream>
using namespace std;
main(){
float a,b,c,d,e,f,g,h;
cout<<" enter marks of 5 subjects(out of hundred) ";
cin>>a>>b>>c>>d>>e;
f=a+b+c+d+e;
cout<<" total: "<<f;
g=(a+b+c+d+e)/5;
cout<<" average: "<<g;
h=(f/500)*100;
cout<<" percentage: "<<h;
}
